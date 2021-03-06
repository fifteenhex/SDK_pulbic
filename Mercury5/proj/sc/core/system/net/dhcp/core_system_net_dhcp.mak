#-------------------------------------------------------------------------------
#	$(Variable) is generated by script and $(variable) is manually maintained.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
#	Description of some variables owned by the library
#-------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS = lib

PATH_C +=\
    $(PATH_core_system_net_dhcp)/src\

PATH_H += \
    $(PATH_ahc)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_isp)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_core)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_net)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_sdk)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_snr)/inc\
    $(PATH_core_application_mmpd_flow_ctl)/inc\
    $(PATH_core_application_mmps_display)/inc\
    $(PATH_core_application_mmps_system)/inc\
    $(PATH_core_application_mmps_vid_recd)/inc\
    $(PATH_core_driver_bsp)/inc\
    $(PATH_core_driver_common)/inc\
    $(PATH_core_driver_img_pipe)/inc\
    $(PATH_core_driver_misc)/inc\
    $(PATH_core_driver_pwm)/inc\
    $(PATH_core_include_application)\
    $(PATH_core_include_display)\
    $(PATH_core_include_img_pipe)\
    $(PATH_core_include_misc)\
    $(PATH_core_lib_fs)/inc\
    $(PATH_core_lib_gui_inc_Config)\
    $(PATH_core_lib_gui_inc_Core)\
    $(PATH_core_system_host_if)/inc\
    $(PATH_core_system_misc)/inc\
    $(PATH_core_system_mm)/inc\
    $(PATH_core_system_net_api)/inc\
    $(PATH_core_system_net_dhcp)/inc\
    $(PATH_core_system_net_libupnp_core_genlib)/inc\
    $(PATH_core_system_net_libupnp_upnp)/inc\
    $(PATH_core_system_net_lib)/inc\
    $(PATH_core_system_net_lwip_api)/inc\
    $(PATH_core_system_net_lwip_ipv4)/inc\
    $(PATH_core_system_net_lwip_netif)/inc\
    $(PATH_core_system_net_lwip_port)/inc\
    $(PATH_core_system_os)/inc\
    $(PATH_core_system_sensor)/inc\
    $(PATH_core_utility)/inc\
    $(PATH_driver_drv_int_pub)\
    $(PATH_driver_drv_io_pub)\
    $(PATH_driver_drv_timer_pub)\
    $(PATH_driver_hal_infinity_int_pub)\
    $(PATH_driver_hal_infinity_io_pub)\
    $(PATH_driver_hal_infinity_kernel)/inc\
    $(PATH_driver_hal_infinity_timer_pub)\
    $(PATH_middleware_pm_pub)\
    $(PATH_project_Dvr_CarDV_SDK_UI)/inc\
    $(PATH_system_MsWrapper_pub)\
    $(PATH_system_fc_pub)\
    $(PATH_system_libc)/inc\
    $(PATH_system_rtk_pub)\
    $(PATH_system_sdtarget_common_include)\
    $(PATH_system_sdtarget_wintarget)/inc\
    $(PATH_system_sys_pub)

#-------------------------------------------------------------------------------
#	List of source files of the library or executable to generate
#-------------------------------------------------------------------------------
SRC_C_LIST =\
    dhcp_server.c \
    dhcp_server_port.c \
