/*
#ifndef PC_IN_GAME
	#include "ui/bg.inc"
#endif
*/
blurWorld		7.0

//PREPROC_SHADER_DRAW( -120 0 880 480, 0 0, "white", 0 0 0 0.75, 0, 1, 0 0 0 0 )

//PREPROC_SHADER_DRAW( 0 0 640 480, 0 0, "white", 0 0 0 0.75, 0, 1, 0 0 0 0 )
//PREPROC_SHADER_DRAW( ORIGIN_OPTIONS_FRAME 100 480, 0 0, "gradient_fadein", 0 0 0 0.1, 0, 1, 0 0 0 0 )
//PREPROC_SHADER_DRAW( ORIGIN_OPTIONS_FRAME 600 480, 100 0, "gradient_fadein", 0 0 0 0.5, 0, 1, 0 0 0 0 )

#undef BACK_OPEN
#define BACK_OPEN exec "wait";
//#include "ui_mp/navcontrols.inc"
//CHOICE_MENU_TITLE( "@MENU_OPTIONS" )

#undef CHOICE_X_START
#define CHOICE_X_START	-324

#undef CHOICE_Y_START
#define CHOICE_Y_START	-20 //82

#undef CHOICE_HORIZONTAL_ALIGN
#define CHOICE_HORIZONTAL_ALIGN HORIZONTAL_ALIGN_CENTER

#undef CHOICE_VERTICAL_ALIGN
#define CHOICE_VERTICAL_ALIGN VERTICAL_ALIGN_TOP

#undef CHOICE_TEXTALIGN
#define	CHOICE_TEXTALIGN	ITEM_ALIGN_MIDDLE_RIGHT

#undef CHOICE_TEXT_OFFSET_X
#define CHOICE_TEXT_OFFSET_X	-15

//CHOICE_SECTION_TITLE( 1, "@MENU_SYSTEM" )
CHOICE_BUTTON_VIS( 2, "@MENU_GRAPHICS", LOCAL_CLOSE_ALL open options_graphics, when( ( !dvarint( sv_running ) || dvarInt( ui_allow_graphic_change ) ) && dvarInt( arcademode ) == 0 ); )
CHOICE_DBUTTON_VIS( 2, "@MENU_GRAPHICS", when( ( dvarint( sv_running ) && dvarInt(ui_allow_graphic_change)==0 ) || dvarBool( arcademode ) ); )
CHOICE_BUTTON_VIS( 3, "@MENU_TEXTURE_SETTINGS", LOCAL_CLOSE_ALL  open options_graphics_texture, when( ( !dvarint( sv_running ) || dvarInt( ui_allow_graphic_change ) ) && dvarInt( arcademode ) == 0 ); )
CHOICE_DBUTTON_VIS( 3, "@MENU_TEXTURE_SETTINGS", when( ( dvarint( sv_running ) && dvarInt(ui_allow_graphic_change)==0 ) || dvarBool( arcademode ) ); )
CHOICE_BUTTON_VIS( 4, "@MENU_SOUND", LOCAL_CLOSE_ALL open pc_options_audio, when( !dvarint( cl_ingame ) ) )
CHOICE_BUTTON_VIS( 4, "@MENU_SOUND", LOCAL_CLOSE_ALL close pc_options open pc_options_audio, when( dvarint( cl_ingame ) ) ) // ingame
CHOICE_BUTTON_VIS( 5, "@MENU_CONTROLS", LOCAL_CLOSE_ALL open pc_options_controls, when( !dvarint( cl_ingame ) ) )
CHOICE_BUTTON_VIS( 5, "@MENU_CONTROLS", LOCAL_CLOSE_ALL close pc_options close pc_options_audio close options_voice open pc_options_controls, when( dvarint( cl_ingame ) ) ) // ingame
CHOICE_BUTTON_VIS( 6, "@MENU_VOICECHAT", LOCAL_CLOSE_ALL open options_voice, when( !dvarint( cl_ingame ) ) )
CHOICE_BUTTON_VIS( 6, "@MENU_VOICECHAT", LOCAL_CLOSE_ALL close pc_options open options_voice, when( dvarint( cl_ingame ) ) ) // ingame
CHOICE_BUTTON_VIS( 7, "@MENU_RESET_SYSTEM_DEFAULTS", LOCAL_CLOSE_ALL open options_graphics_defaults, when( ( !dvarint( sv_running ) || dvarInt( ui_allow_graphic_change ) ) && dvarInt( arcademode ) == 0 ); )
CHOICE_DBUTTON_VIS( 7, "@MENU_RESET_SYSTEM_DEFAULTS", when( ( dvarint( sv_running ) && dvarInt(ui_allow_graphic_change)==0 ) || dvarBool( arcademode ) ); )

// ---


#undef TEXTSIZE_BUTTON_PC
#define TEXTSIZE_BUTTON_PC	0.33

#undef CHOICE_SIZE_Y
#define CHOICE_SIZE_Y 		20


#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		180

#undef  SECTION_X_OFFSET
#define SECTION_X_OFFSET 	60

#undef CHOICE_DVAR_TEXTALIGN
#define CHOICE_DVAR_TEXTALIGN	ITEM_ALIGN_MIDDLE_LEFT

#undef CHOICE_TEXTSIZE
#define CHOICE_TEXTSIZE		TEXTSIZE_SMALL

#undef CHOICE_DVAR_OFFSET_X
#define	CHOICE_DVAR_OFFSET_X	(185 - CHOICE_TEXT_OFFSET_X)
// ---