
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

ifeq ($(filter __FAKE_VENDOR__ ,$(PP_OPT_COMMON)),__FAKE_VENDOR__)
#PP_OPT_COMMON += 
endif

#------------------------------------------------------------------------------
#	Liste	des fichiers sources	de	la	biblioth�que ou de l'�xecutable a g�n�rer
#	List of source	files	of	the library	or	executable to generate
#------------------------------------------------------------------------------

#Add files here
ifeq ($(filter __FAKE_VENDOR__ ,$(PP_OPT_COMMON)),__FAKE_VENDOR__)
REL_SRC_C_LIST += fakevendor.c
endif
