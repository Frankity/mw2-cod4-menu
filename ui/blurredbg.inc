#undef FOG_SCROLL_TIME
#define FOG_SCROLL_TIME 60000 //30000

//#define DO_THE_BLUE_MENU //Uncomment if you want the blue menu
itemDef
{
	style			WINDOW_STYLE_SHADER
	rect			FULLSCREEN_WIDE
	background		"animbg_blur_back"
	visible			when( dvarString( fs_game ) == "" && dvarInt( cl_ingame ) != 1 );
	visible			1
	decoration
}

itemDef
{
	style			WINDOW_STYLE_SHADER
	rect			-107 0 1708 480
	exp				rect X((-107) - ((float(milliseconds() % FOG_SCROLL_TIME) / FOG_SCROLL_TIME) * (854)))
	background		"animbg_blur_fogscroll"
	visible			when( dvarString( fs_game ) == "" && dvarInt( cl_ingame ) != 1 );
	visible			1
	decoration
}

itemDef
{
	style			WINDOW_STYLE_SHADER
	rect			FULLSCREEN_WIDE
	background		"animbg_blur_front"
	visible			when( dvarString( fs_game ) == "" && dvarInt( cl_ingame ) != 1 );
	visible			1
	decoration
}

#ifdef DO_THE_BLUE_MENU
		itemDef
		{
			rect 0 0 640 480 4 4
			style 3
			border 0
			ownerdraw 0
			ownerdrawFlag 0
			borderSize 0
			foreColor 0 150 250 0
			backColor 0 0 0 0
			borderColor 0 0 0 0
			outlineColor 0 0 0 0
			origin 0 0
			background mockup_bg_glow
			decoration 
			type 0
			align 0
			textAlign 0
			textAlignX 0
			textAlignY 0
			textScale 0.55
			textStyle 0
			textFont 0
			feeder 0
			exp forecolor a ( ( ( sin ( milliseconds( ) / 1500 ) + 1 ) * 0.250000 ) + 0.250000  )
			visible			when( dvarString( fs_game ) == "" && dvarInt( cl_ingame ) != 1 );
			visible 1
		}
		itemDef
		{
			rect 0 0 640 480 4 4
			style 3
			border 0
			ownerdraw 0
			ownerdrawFlag 0
			borderSize 0
			foreColor 0 150 250 0
			backColor 0 0 0 0
			borderColor 0 0 0 0
			outlineColor 0 0 0 0
			origin 0 0
			background mockup_bg_glow
			decoration 
			type 0
			align 0
			textAlign 0
			textAlignX 0
			textAlignY 0
			textScale 0.55
			textStyle 0
			textFont 0
			feeder 0
			text "(null)"
			visible			when( dvarString( fs_game ) == "" && dvarInt( cl_ingame ) != 1 );
			visible 1
			exp forecolor a ( ( ( sin ( milliseconds( ) / 480 ) + 1 ) * 0.250000 ) + 0.250000  )
		}
#endif

itemDef
{
	style			WINDOW_STYLE_SHADER
	rect			FULLSCREEN_WIDE
	background		"animbg_blur_back"
	forecolor		0.8 0.8 1 1
	visible			when( dvarString( fs_game ) != "" && dvarInt( cl_ingame ) != 1 );
	decoration
}

itemDef
{
	style			WINDOW_STYLE_SHADER
	rect			-107 0 1708 480
	exp				rect X((-107) - ((float(milliseconds() % FOG_SCROLL_TIME) / FOG_SCROLL_TIME) * (854)))
	background		"animbg_blur_fogscroll"
	forecolor		0.8 0.8 1 1
	visible			when( dvarString( fs_game ) != "" && dvarInt( cl_ingame ) != 1 );
	decoration
}

itemDef
{
	style			WINDOW_STYLE_SHADER
	rect			FULLSCREEN_WIDE
	background		"animbg_blur_front"
	forecolor		0.8 0.8 1 1
	visible			when( dvarString( fs_game ) != "" && dvarInt( cl_ingame ) != 1 );
	decoration
}

#ifdef DO_THE_SIDEBAR_THINGY
	itemDef
	{
		rect -64 0 300 480 1 0
		style 3
		border 0
		ownerdraw 0
		ownerdrawFlag 0
		borderSize 0
		foreColor 1 1 1 0.1
		backColor 0 0 0 0
		borderColor 0 0 0 0
		outlineColor 0 0 0 0
		origin 0 0
		background gradient_fadein_fadebottom
		decoration 
		type 0
		align 0
		textAlign 0
		textAlignX 0
		textAlignY 0
		textScale 0.55
		textStyle 0
		textFont 0
		feeder 0
		visible 1
	}
#endif