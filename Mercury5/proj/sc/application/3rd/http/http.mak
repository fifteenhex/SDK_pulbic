PATH_H = \
    $(PATH_audio)/pub \
    $(PATH_avp)/pub \
    $(PATH_cus_app)/inc \
    $(PATH_esl)/pub \
    $(PATH_fms)/pub \
    $(PATH_i18n)/inc \
    $(PATH_http)/inc \
    $(PATH_http)/pub \
    $(PATH_ResMgr)/inc \
    $(PATH_ResMgr)/pub \
    $(PATH_ResMgr)/inc/ABL \
    $(PATH_ResMgr)/inc/MediaCmd \
    $(PATH_ResMgr)/inc/Util \
    $(PATH_fc)/pub \
    $(PATH_mmmanager)/pub \
	$(PATH_mserv)/inc \
    $(PATH_MsWrapper)/pub \
    $(PATH_NCCBrowser_target)/inc \
    $(PATH_NCCMms_target)/inc \
    $(PATH_rtk)/pub \
    $(PATH_sdk)/inc \
    $(PATH_sdk)/pub \
    $(PATH_sys)/pub \
    $(PATH_timer)/pub \
    $(PATH_trc)/pub \
    $(PATH_dynldr)/pub
#
#	Important :	This software is protected	by	Copyright and the	information
#					contained herein is confidential. Distribution,	reproduction
#					as	well as exploitation	and transmission of its	contents	is
#					not allowed	except if expressly permitted. Infringments
#					result in damage claims
#					Copyright Wavecom	S.A. (c)	$JustDate:$
#

# ****************************************************************************
# *  File	 :	$Workfile:$			$Revision:$
# *--------------------------------------------------------------------------*
# *  Scope	 :	  Description of the	librarie	to	generate							  *
# *																								  *
# *  Notes	 :	  to launch	the compilation of the current library,			  *
# *				  type from	output directory :										  *
# *						 make	-r	-f	..//gen.mak	TARGET=<target>					  *
# *																								  *
# *																								  *
# *																								  *
# *  Changes	 :																				  *
# *--------------------------------------------------------------------------*
# *  Version VSS	| Date			  | Author |	Modification					  *
# *--------------------------------------------------------------------------*
# *	$Log:$
#
# ****************************************************************************

#SCE_OPTIONS = -R -G -Cysc.cfg -N
#SCE_OPTIONS = -R -N

#------------------------------------------------------------------------------
#	Description	des variables propre	a la biblioth�que
#	Description	of	some variables	own to the librairie
#------------------------------------------------------------------------------
# Library module (lib) or Binary	module (bin)
PROCESS		= lib


#------------------------------------------------------------------------------
#	Liste	des fichiers sources	de	la	biblioth�que ou de l'�xecutable a g�n�rer
#	List of source	files	of	the library	or	executable to generate
#------------------------------------------------------------------------------
SRC_C_LIST += http.c
