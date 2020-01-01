/*
 * Generic OS Support Layer
 *
 * Copyright (C) 2011, Broadcom Corporation
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom Corporation;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom Corporation.
 * $Id: generic_osl.h,v 1.6 2009-05-14 22:33:52 Exp $
 */


#ifndef generic_osl_h
#define generic_osl_h

#ifdef __cplusplus
extern "C" {
#endif

#include <wlantypedefs.h>
#include <lbuf.h>
#include <string.h>
#include <stdio.h>


/* --------------------------------------------------------------------------
 *  ASSERT
 */

#ifdef BCMDBG_ASSERT
extern void osl_assert(char *exp, char *file, int line);
#define ASSERT(exp) \
		do { if (!(exp)) osl_assert(#exp, __FILE__, __LINE__); } while (0)
#else
#define	ASSERT(exp)
#endif


/* Helper macros for unsupported functionality. */
static INLINE int
NU_OSL_STUB_INT(int ret)
{
	ASSERT(0);
	return (ret);
}

static INLINE void*
NU_OSL_STUB_VOID_PTR(void* ret)
{
	ASSERT(0);
	return (ret);
}


/* --------------------------------------------------------------------------
 * Network interface packet buffer macros.
 *
 *  This needs to be included after the ASSERT macros because it includes
 * static include functions that use the ASSERT macro.
 */
#include <pkt_lbuf.h>


/* --------------------------------------------------------------------------
 * Printf
 */

/* Logging functions used by the Mobile Communications BSP. */
#ifdef BWL_MOBCOM_DBGPRINTF
#include <stdio.h>
int fprintf_bsp(FILE *stream, const char *fmt, ...);
int printf_bsp(const char *fmt, ...);
#define fprintf fprintf_bsp
#define printf printf_bsp
#define fputs(str, stream) 		printf("%s", str)
#define fflush(stream)
#endif   /* BWL_MOBCOM_DBGPRINTF */


/* --------------------------------------------------------------------------
 * Malloc
 */


#define	MALLOC(osh, size)	osl_malloc((osh), (size))
#define	MFREE(osh, addr, size)	osl_mfree((osh), (addr), (size))


void* osl_malloc(osl_t *osh, uint size);
void osl_mfree(osl_t *osh, void *addr, uint size);

#define	MALLOCED(osh)		osl_malloced((osh))
uint osl_malloced(osl_t *osh);


/* osl_malloc_std() / osl_free_std() will be used by osl_malloc() / osl_free()
 * respectively to perform the actually memory allocation and de-allocation.
 * Users can select to simply map these to the standard malloc/free routines
 * provided by the C run-time library, by defining BWL_OSL_USE_STDLIB_MALLOC.
 * Alternatively, users can implement their own version of osl_malloc_std() and
 * osl_free_std() if they wish to use a custom memory manager.
 */
#ifdef BWL_OSL_USE_STDLIB_MALLOC
#define osl_malloc_std	malloc
#define osl_free_std	free
#elif defined(__RTK_OS__)
#define osl_malloc_std 	osl_ext_malloc
#define osl_free_std	osl_ext_free
#else
void* osl_malloc_std(size_t size);
void osl_free_std(void *ptr);
#endif   /* BWL_USE_STDLIB_MALLOC */


/* --------------------------------------------------------------------------
** OS abstraction APIs.
*/

typedef struct osl_pubinfo {
	unsigned int pktalloced;	/* Number of allocated packet buffers */

} osl_pubinfo_t;


/* microsecond delay */
#define	OSL_DELAY(usec)		osl_delay(usec)
extern void osl_delay(uint usec);


/* map from internal BRCM error code to OS error code. */
#define OSL_ERROR(bcmerror) ((bcmerror) < 0 ? -1 : 0)


/****************************************************************************
* Function:   osl_attach
*
* Purpose:    Init operating system abstraction layer.
*
* Parameters: None.
*
* Returns:    Operating system context.
*****************************************************************************
*/
osl_t* osl_attach(void);

/****************************************************************************
* Function:   osl_detach
*
* Purpose:    De-init the operating system abstraction layer.
*
* Parameters: osl (mod) Operating system context.
*
* Returns:    Nothing.
*****************************************************************************
*/
void osl_detach(osl_t *osh);


/* --------------------------------------------------------------------------
 * Hardware/architecture APIs.
 */

/* NOT SUPPORTED. */
#define OSL_PCMCIA_READ_ATTR(osh, offset, buf, size)	NU_OSL_STUB_INT(0)
#define OSL_PCMCIA_WRITE_ATTR(osh, offset, buf, size) 	NU_OSL_STUB_INT(0)
#define OSL_PCI_READ_CONFIG(osh, offset, size)		NU_OSL_STUB_INT(0)
#define OSL_PCI_WRITE_CONFIG(osh, offset, size, val)	NU_OSL_STUB_INT(0)
#define OSL_PCI_BUS(osh)				NU_OSL_STUB_INT(0)
#define OSL_PCI_SLOT(osh)				NU_OSL_STUB_INT(0)


/* Map/unmap physical to virtual - NOT SUPPORTED. */
#define REG_MAP(pa, size)	NU_OSL_STUB_VOID_PTR(NULL)
#define REG_UNMAP(va)		NU_OSL_STUB_VOID_PTR(NULL)


/* --------------------------------------------------------------------------
 * Register access macros.
 */
#include <bcmsdh.h>
#define R_REG(osh, r) (\
	sizeof(*(r)) == sizeof(uint8) ? \
		(uint8)(bcmsdh_reg_read(NULL, (uint32)r, sizeof(*(r))) & 0xff) : \
	sizeof(*(r)) == sizeof(uint16) ? \
		(uint16)(bcmsdh_reg_read(NULL, (uint32)r, sizeof(*(r))) & 0xffff) : \
	bcmsdh_reg_read(NULL, (uint32)r, sizeof(*(r))))
#define	W_REG(osh, r, v)	bcmsdh_reg_write(NULL, (uint32)r, sizeof(*(r)), (v))


/* --------------------------------------------------------------------------
** Map bcopy to memcpy.
*/

#ifdef BWL_MAP_BCOPY_TO_MEMCPY
/* bcopy, bcmp, and bzero */
#define bcopy(src, dst, len)	memcpy((dst), (src), (len))
#define bcmp(b1, b2, len)	memcmp((b1), (b2), (len))
#define bzero(b, len)		memset((b), 0, (len))
#endif   /* BWL_MAP_BCOPY_TO_MEMCPY */


/* -------------------------------------------------------------------------- */


#ifdef __cplusplus
	}
#endif

#endif  /* generic_osl_h  */