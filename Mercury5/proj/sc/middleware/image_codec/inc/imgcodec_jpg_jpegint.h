#include "imgcodec_platform.h"
#ifdef IMGCODEC_USE_NEW_VERSION
/*
 * jpegint.h
 *
 * Copyright (C) 1991-1997, Thomas G. Lane.
 * Modified 1997-2009 by Guido Vollbeding.
 * This file is part of the Independent JPEG Group's software.
 * For conditions of distribution and use, see the accompanying README file.
 *
 * This file provides common declarations for the various JPEG modules.
 * These declarations are considered internal to the JPEG library; most
 * applications using the library shouldn't need to include this file.
 */


/* Declarations for both compression & decompression */

typedef enum {                        /* Operating modes for buffer controllers */
        JBUF_PASS_THRU,                /* Plain stripwise operation */
        /* Remaining modes require a full-image buffer to have been created */
        JBUF_SAVE_SOURCE,        /* Run source subobject only, save output */
        JBUF_CRANK_DEST,        /* Run dest subobject only, using saved data */
        JBUF_SAVE_AND_PASS        /* Run both subobjects, save output */
} J_BUF_MODE;

/* Values of global_state field (jdapi.c has some dependencies on ordering!) */
#define CSTATE_START        100        /* after create_compress */
#define CSTATE_SCANNING        101        /* start_compress done, write_scanlines OK */
#define CSTATE_RAW_OK        102        /* start_compress done, write_raw_data OK */
#define CSTATE_WRCOEFS        103        /* jpeg_write_coefficients done */
#define DSTATE_START        200        /* after create_decompress */
#define DSTATE_INHEADER        201        /* reading header markers, no SOS yet */
#define DSTATE_READY        202        /* found SOS, ready for start_decompress */
#define DSTATE_PRELOAD        203        /* reading multiscan file in start_decompress*/
#define DSTATE_PRESCAN        204        /* performing dummy pass for 2-pass quant */
#define DSTATE_SCANNING        205        /* start_decompress done, read_scanlines OK */
#define DSTATE_RAW_OK        206        /* start_decompress done, read_raw_data OK */
#define DSTATE_BUFIMAGE        207        /* expecting jpeg_start_output */
#define DSTATE_BUFPOST        208        /* looking for SOS/EOI in jpeg_finish_output */
#define DSTATE_RDCOEFS        209        /* reading file in jpeg_read_coefficients */
#define DSTATE_STOPPING        210        /* looking for EOI in jpeg_finish_decompress */


/* Declarations for compression modules */

/* Master control module */
struct jpeg_comp_master {
  JMETHOD(void, prepare_for_pass, (j_compress_ptr cinfo));
  JMETHOD(void, pass_startup, (j_compress_ptr cinfo));
  JMETHOD(void, finish_pass, (j_compress_ptr cinfo));

  /* State variables made visible to other modules */
  boolean call_pass_startup;        /* True if pass_startup must be called */
  boolean is_last_pass;                /* True during last pass */
};

/* Main buffer control (downsampled-data buffer) */
struct jpeg_c_main_controller {
  JMETHOD(void, start_pass, (j_compress_ptr cinfo, J_BUF_MODE pass_mode));
  JMETHOD(void, process_data, (j_compress_ptr cinfo,
                               JSAMPARRAY input_buf, JDIMENSION *in_row_ctr,
                               JDIMENSION in_rows_avail));
};

/* Compression preprocessing (downsampling input buffer control) */
struct jpeg_c_prep_controller {
  JMETHOD(void, start_pass, (j_compress_ptr cinfo, J_BUF_MODE pass_mode));
  JMETHOD(void, pre_process_data, (j_compress_ptr cinfo,
                                   JSAMPARRAY input_buf,
                                   JDIMENSION *in_row_ctr,
                                   JDIMENSION in_rows_avail,
                                   JSAMPIMAGE output_buf,
                                   JDIMENSION *out_row_group_ctr,
                                   JDIMENSION out_row_groups_avail));
};

/* Coefficient buffer control */
struct jpeg_c_coef_controller {
  JMETHOD(void, start_pass, (j_compress_ptr cinfo, J_BUF_MODE pass_mode));
  JMETHOD(boolean, compress_data, (j_compress_ptr cinfo,
                                   JSAMPIMAGE input_buf));
};

/* Colorspace conversion */
struct jpeg_color_converter {
  JMETHOD(void, start_pass, (j_compress_ptr cinfo));
  JMETHOD(void, color_convert, (j_compress_ptr cinfo,
                                JSAMPARRAY input_buf, JSAMPIMAGE output_buf,
                                JDIMENSION output_row, int num_rows));
};

/* Downsampling */
struct jpeg_downsampler {
  JMETHOD(void, start_pass, (j_compress_ptr cinfo));
  JMETHOD(void, downsample, (j_compress_ptr cinfo,
                             JSAMPIMAGE input_buf, JDIMENSION in_row_index,
                             JSAMPIMAGE output_buf,
                             JDIMENSION out_row_group_index));

  boolean need_context_rows;        /* TRUE if need rows above & below */
};

/* Forward DCT (also controls coefficient quantization) */
typedef JMETHOD(void, forward_DCT_ptr,
                (j_compress_ptr cinfo, jpeg_component_info * compptr,
                 JSAMPARRAY sample_data, JBLOCKROW coef_blocks,
                 JDIMENSION start_row, JDIMENSION start_col,
                 JDIMENSION num_blocks));

struct jpeg_forward_dct {
  JMETHOD(void, start_pass, (j_compress_ptr cinfo));
  /* It is useful to allow each component to have a separate FDCT method. */
  forward_DCT_ptr forward_DCT[MAX_COMPONENTS];
};

/* Entropy encoding */
struct jpeg_entropy_encoder {
  JMETHOD(void, start_pass, (j_compress_ptr cinfo, boolean gather_statistics));
  JMETHOD(boolean, encode_mcu, (j_compress_ptr cinfo, JBLOCKROW *MCU_data));
  JMETHOD(void, finish_pass, (j_compress_ptr cinfo));
};

/* Marker writing */
struct jpeg_marker_writer {
  JMETHOD(void, write_file_header, (j_compress_ptr cinfo));
  JMETHOD(void, write_frame_header, (j_compress_ptr cinfo));
  JMETHOD(void, write_scan_header, (j_compress_ptr cinfo));
  JMETHOD(void, write_file_trailer, (j_compress_ptr cinfo));
  JMETHOD(void, write_tables_only, (j_compress_ptr cinfo));
  /* These routines are exported to allow insertion of extra markers */
  /* Probably only COM and APPn markers should be written this way */
  JMETHOD(void, write_marker_header, (j_compress_ptr cinfo, int marker,
                                      unsigned int datalen));
  JMETHOD(void, write_marker_byte, (j_compress_ptr cinfo, int val));
};


/* Declarations for decompression modules */

/* Master control module */
struct jpeg_decomp_master {
  JMETHOD(void, prepare_for_output_pass, (j_decompress_ptr cinfo));
  JMETHOD(void, finish_output_pass, (j_decompress_ptr cinfo));

  /* State variables made visible to other modules */
  boolean is_dummy_pass;        /* True during 1st pass for 2-pass quant */
};

/* Input control module */
struct jpeg_input_controller {
  JMETHOD(int, consume_input, (j_decompress_ptr cinfo));
  JMETHOD(void, reset_input_controller, (j_decompress_ptr cinfo));
  JMETHOD(void, start_input_pass, (j_decompress_ptr cinfo));
  JMETHOD(void, finish_input_pass, (j_decompress_ptr cinfo));

  /* State variables made visible to other modules */
  boolean has_multiple_scans;        /* True if file has multiple scans */
  boolean eoi_reached;                /* True when EOI has been consumed */
};

/* Main buffer control (downsampled-data buffer) */
struct jpeg_d_main_controller {
  JMETHOD(void, start_pass, (j_decompress_ptr cinfo, J_BUF_MODE pass_mode));
  JMETHOD(void, process_data, (j_decompress_ptr cinfo,
                               JSAMPIMAGE output_buf, JDIMENSION *out_row_ctr,
                               JDIMENSION out_rows_avail));
};

/* Coefficient buffer control */
struct jpeg_d_coef_controller {
  JMETHOD(void, start_input_pass, (j_decompress_ptr cinfo));
  JMETHOD(int, consume_data, (j_decompress_ptr cinfo));
  JMETHOD(void, start_output_pass, (j_decompress_ptr cinfo));
  JMETHOD(int, decompress_data, (j_decompress_ptr cinfo,
                                 JSAMPIMAGE output_buf));
  /* Pointer to array of coefficient virtual arrays, or NULL if none */
  jvirt_barray_ptr *coef_arrays;
};

/* Decompression postprocessing (color quantization buffer control) */
struct jpeg_d_post_controller {
  JMETHOD(void, start_pass, (j_decompress_ptr cinfo, J_BUF_MODE pass_mode));
  JMETHOD(void, post_process_data, (j_decompress_ptr cinfo,
                                    JSAMPIMAGE input_buf,
                                    JDIMENSION *in_row_group_ctr,
                                    JDIMENSION in_row_groups_avail,
                                    JSAMPIMAGE output_buf,
                                    JDIMENSION *out_row_ctr,
                                    JDIMENSION out_rows_avail));
};

/* Marker reading & parsing */
struct jpeg_marker_reader {
  JMETHOD(void, reset_marker_reader, (j_decompress_ptr cinfo));
  JMETHOD(void, resync_to_next_marker, (j_decompress_ptr cinfo));
  /* Read markers until SOS or EOI.
   * Returns same codes as are defined for jpeg_consume_input:
   * JPEG_SUSPENDED, JPEG_REACHED_SOS, or JPEG_REACHED_EOI.
   */
  JMETHOD(int, read_markers, (j_decompress_ptr cinfo));
  /* Read a restart marker --- exported for use by entropy decoder only */
  jpeg_marker_parser_method read_restart_marker;

  /* State of marker reader --- nominally internal, but applications
   * supplying COM or APPn handlers might like to know the state.
   */
  boolean saw_SOI;                /* found SOI? */
  boolean saw_SOF;                /* found SOF? */
  int next_restart_num;                /* next restart number expected (0-7) */
  unsigned int discarded_bytes;        /* # of bytes skipped looking for a marker */
};

/* Entropy decoding */
struct jpeg_entropy_decoder {
  JMETHOD(void, start_pass, (j_decompress_ptr cinfo));
  JMETHOD(boolean, decode_mcu, (j_decompress_ptr cinfo,
                                JBLOCKROW *MCU_data));
#ifdef D_NON_BUFFERED_MULTISCAN_SUPPORTED
  JMETHOD(void, backup,  (j_decompress_ptr cinfo, struct jpeg_entropy_decoder **p_entropy_clone));
  JMETHOD(void, restore, (j_decompress_ptr cinfo, struct jpeg_entropy_decoder *entropy_clone));
#endif
#ifdef D_IMCU_ROW_STATE_CACHE_SUPPORTED
  JMETHOD(boolean, backup_state,  (j_decompress_ptr cinfo, char *buffer, size_t siz));
  JMETHOD(boolean, restore_state, (j_decompress_ptr cinfo, char *buffer, size_t size));
#endif
};

/* Inverse DCT (also performs dequantization) */
typedef JMETHOD(void, inverse_DCT_method_ptr,
                (j_decompress_ptr cinfo, jpeg_component_info * compptr,
                 JCOEFPTR coef_block,
                 JSAMPARRAY output_buf, JDIMENSION output_col));

struct jpeg_inverse_dct {
  JMETHOD(void, start_pass, (j_decompress_ptr cinfo));
  /* It is useful to allow each component to have a separate IDCT method. */
  inverse_DCT_method_ptr inverse_DCT[MAX_COMPONENTS];
};

/* Upsampling (note that upsampler must also call color converter) */
struct jpeg_upsampler {
  JMETHOD(void, start_pass, (j_decompress_ptr cinfo));
  JMETHOD(void, upsample, (j_decompress_ptr cinfo,
                           JSAMPIMAGE input_buf,
                           JDIMENSION *in_row_group_ctr,
                           JDIMENSION in_row_groups_avail,
                           JSAMPIMAGE output_buf,
                           JDIMENSION *out_row_ctr,
                           JDIMENSION out_rows_avail));

  boolean need_context_rows;        /* TRUE if need rows above & below */
};

/* Colorspace conversion */
struct jpeg_color_deconverter {
  JMETHOD(void, start_pass, (j_decompress_ptr cinfo));
  JMETHOD(void, color_convert, (j_decompress_ptr cinfo,
                                JSAMPIMAGE input_buf, JDIMENSION input_row,
                                JSAMPIMAGE output_buf, JDIMENSION output_row, int num_rows));
};

/* Color quantization or color precision reduction */
struct jpeg_color_quantizer {
  JMETHOD(void, start_pass, (j_decompress_ptr cinfo, boolean is_pre_scan));
  JMETHOD(void, color_quantize, (j_decompress_ptr cinfo,
                                 JSAMPARRAY input_buf, JSAMPARRAY output_buf,
                                 int num_rows));
  JMETHOD(void, finish_pass, (j_decompress_ptr cinfo));
  JMETHOD(void, new_color_map, (j_decompress_ptr cinfo));
};


/* Miscellaneous useful macros */

#undef MAX
#define MAX(a,b)        ((a) > (b) ? (a) : (b))
#undef MIN
#define MIN(a,b)        ((a) < (b) ? (a) : (b))


/* We assume that right shift corresponds to signed division by 2 with
 * rounding towards minus infinity.  This is correct for typical "arithmetic
 * shift" instructions that shift in copies of the sign bit.  But some
 * C compilers implement >> with an unsigned shift.  For these machines you
 * must define RIGHT_SHIFT_IS_UNSIGNED.
 * RIGHT_SHIFT provides a proper signed right shift of an INT32 quantity.
 * It is only applied with constant shift counts.  SHIFT_TEMPS must be
 * included in the variables of any routine using RIGHT_SHIFT.
 */

#ifdef RIGHT_SHIFT_IS_UNSIGNED
#define SHIFT_TEMPS        INT32 shift_temp;
#define RIGHT_SHIFT(x,shft)  \
        ((shift_temp = (x)) < 0 ? \
         (shift_temp >> (shft)) | ((~((INT32) 0)) << (32-(shft))) : \
         (shift_temp >> (shft)))
#else
#define SHIFT_TEMPS
#define RIGHT_SHIFT(x,shft)        ((x) >> (shft))
#endif


/* Short forms of external names for systems with brain-damaged linkers. */

#ifdef NEED_SPECIAL_EXTERNAL_NAMES
#define jinit_compress_master    ms_jinit_compress_master
#define jinit_c_master_control   ms_jinit_c_master_control
#define jinit_c_main_controller  ms_jinit_c_main_controller
#define jinit_c_prep_controller  ms_jinit_c_prep_controller
#define jinit_c_coef_controller  ms_jinit_c_coef_controller
#define jinit_color_converter    ms_jinit_color_converter
#define jinit_downsampler        ms_jinit_downsampler
#define jinit_forward_dct        ms_jinit_forward_dct
#define jinit_huff_encoder       ms_jinit_huff_encoder
#define jinit_arith_encoder      ms_jinit_arith_encoder
#define jinit_marker_writer      ms_jinit_marker_writer
#define jinit_master_decompress  ms_jinit_master_decompress
#define jinit_d_main_controller  ms_jinit_d_main_controller
#define jinit_d_coef_controller  ms_jinit_d_coef_controller
#define jinit_d_post_controller  ms_jinit_d_post_controller
#define jinit_input_controller   ms_jinit_input_controller
#define jinit_marker_reader      ms_jinit_marker_reader
#define jinit_huff_decoder       ms_jinit_huff_decoder
#define jinit_arith_decoder      ms_jinit_arith_decoder
#define jinit_inverse_dct        ms_jinit_inverse_dct
#define jinit_upsampler          ms_jinit_upsampler
#define jinit_color_deconverter  ms_jinit_color_deconverter
#define jinit_1pass_quantizer    ms_jinit_1pass_quantizer
#define jinit_2pass_quantizer    ms_jinit_2pass_quantizer
#define jinit_merged_upsampler   ms_jinit_merged_upsampler
#define jinit_memory_mgr         ms_jinit_memory_mgr
#define jdiv_round_up            ms_jdiv_round_up
#define jround_up                ms_jround_up
#define jcopy_sample_rows        ms_jcopy_sample_rows
#define jcopy_block_row          ms_jcopy_block_row
#define jzero_far                ms_jzero_far
#define jpeg_zigzag_order        ms_jpeg_zigzag_order
#define jpeg_natural_order       ms_jpeg_natural_order
#define jpeg_natural_order7      ms_jpeg_natural_order7
#define jpeg_natural_order6      ms_jpeg_natural_order6
#define jpeg_natural_order5      ms_jpeg_natural_order5
#define jpeg_natural_order4      ms_jpeg_natural_order4
#define jpeg_natural_order3      ms_jpeg_natural_order3
#define jpeg_natural_order2      ms_jpeg_natural_order2
#define jpeg_aritab              ms_jpeg_aritab
#endif /* NEED_SPECIAL_EXTERNAL_NAMES */


/* Compression module initialization routines */
EXTERN(void) jinit_compress_master JPP((j_compress_ptr cinfo));
EXTERN(void) jinit_c_master_control JPP((j_compress_ptr cinfo,
                                         boolean transcode_only));
EXTERN(void) jinit_c_main_controller JPP((j_compress_ptr cinfo,
                                          boolean need_full_buffer));
EXTERN(void) jinit_c_prep_controller JPP((j_compress_ptr cinfo,
                                          boolean need_full_buffer));
EXTERN(void) jinit_c_coef_controller JPP((j_compress_ptr cinfo,
                                          boolean need_full_buffer));
EXTERN(void) jinit_color_converter JPP((j_compress_ptr cinfo));
EXTERN(void) jinit_downsampler JPP((j_compress_ptr cinfo));
EXTERN(void) jinit_forward_dct JPP((j_compress_ptr cinfo));
EXTERN(void) jinit_huff_encoder JPP((j_compress_ptr cinfo));
EXTERN(void) jinit_arith_encoder JPP((j_compress_ptr cinfo));
EXTERN(void) jinit_marker_writer JPP((j_compress_ptr cinfo));
/* Decompression module initialization routines */
EXTERN(void) jinit_master_decompress JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_d_main_controller JPP((j_decompress_ptr cinfo,
                                          boolean need_full_buffer));
EXTERN(void) jinit_d_coef_controller JPP((j_decompress_ptr cinfo,
                                          boolean need_full_buffer));
EXTERN(void) jinit_d_post_controller JPP((j_decompress_ptr cinfo,
                                          boolean need_full_buffer));
EXTERN(void) jinit_input_controller JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_marker_reader JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_huff_decoder JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_arith_decoder JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_inverse_dct JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_upsampler JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_color_deconverter JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_1pass_quantizer JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_2pass_quantizer JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_merged_upsampler JPP((j_decompress_ptr cinfo));
/* Memory manager initialization */
EXTERN(void) jinit_memory_mgr JPP((j_common_ptr cinfo));

/* Utility routines in jutils.c */
EXTERN(long) jdiv_round_up JPP((long a, long b));
EXTERN(long) jround_up JPP((long a, long b));
EXTERN(void) jcopy_sample_rows JPP((JSAMPARRAY input_array, int source_row, JDIMENSION source_col,
                                    JSAMPARRAY output_array, int dest_row, JDIMENSION dest_col,
                                    int num_rows, JDIMENSION num_cols));
EXTERN(void) jcopy_block_row JPP((JBLOCKROW input_row, JBLOCKROW output_row,
                                  JDIMENSION num_blocks));
EXTERN(void) jzero_far JPP((void FAR * target, size_t bytestozero));

#ifdef D_LINK_TIME_DISPATCH
#ifdef NEED_SPECIAL_EXTERNAL_NAMES
#define dispatch_jpeg_multiscan_supported             ms_dispatch_jpeg_multiscan_supported

#define jinit_arith_decoder_multiscan                 ms_jinit_arith_decoder_multiscan
#define jinit_d_coef_controller_multiscan             ms_jinit_d_coef_controller_multiscan
#define start_pass_huff_decoder_multiscan             ms_start_pass_huff_decoder_multiscan
#define jinit_huff_decoder_multiscan                  ms_jinit_huff_decoder_multiscan

#define dispatch_jinit_arith_decoder_multiscan        ms_dispatch_jinit_arith_decoder_multiscan
#define dispatch_jinit_d_coef_controller_multiscan    ms_dispatch_jinit_d_coef_controller_multiscan
#define dispatch_start_pass_huff_decoder_multiscan    ms_dispatch_start_pass_huff_decoder_multiscan
#define dispatch_jinit_huff_decoder_multiscan         ms_dispatch_jinit_huff_decoder_multiscan
#endif

EXTERN(boolean) dispatch_jpeg_multiscan_supported JPP((void));

EXTERN(void) jinit_arith_decoder_multiscan JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_d_coef_controller_multiscan JPP((j_decompress_ptr cinfo));
EXTERN(void) start_pass_huff_decoder_multiscan JPP((j_decompress_ptr cinfo));
EXTERN(void) jinit_huff_decoder_multiscan JPP((j_decompress_ptr cinfo));

EXTERN(void) dispatch_jinit_arith_decoder_multiscan JPP((j_decompress_ptr cinfo));
EXTERN(void) dispatch_jinit_d_coef_controller_multiscan JPP((j_decompress_ptr cinfo));
EXTERN(void) dispatch_start_pass_huff_decoder_multiscan JPP((j_decompress_ptr cinfo));
EXTERN(void) dispatch_jinit_huff_decoder_multiscan JPP((j_decompress_ptr cinfo));
#endif

/* Constant tables in jutils.c */
#if 0                                /* This table is not actually needed in v6a */
extern const unsigned char jpeg_zigzag_order[]; /* natural coef order to zigzag order */
#endif
extern const unsigned char jpeg_natural_order[]; /* zigzag coef order to natural order */
extern const unsigned char jpeg_natural_order7[]; /* zz to natural order for 7x7 block */
extern const unsigned char jpeg_natural_order6[]; /* zz to natural order for 6x6 block */
extern const unsigned char jpeg_natural_order5[]; /* zz to natural order for 5x5 block */
extern const unsigned char jpeg_natural_order4[]; /* zz to natural order for 4x4 block */
extern const unsigned char jpeg_natural_order3[]; /* zz to natural order for 3x3 block */
extern const unsigned char jpeg_natural_order2[]; /* zz to natural order for 2x2 block */

/* Arithmetic coding probability estimation tables in jaricom.c */
//extern const INT32 jpeg_aritab[];

/* Suppress undefined-structure complaints if necessary. */

#ifdef INCOMPLETE_TYPES_BROKEN
#ifndef AM_MEMORY_MANAGER        /* only jmemmgr.c defines these */
struct jvirt_sarray_control { long dummy; };
struct jvirt_barray_control { long dummy; };
#endif
#endif /* INCOMPLETE_TYPES_BROKEN */
#endif