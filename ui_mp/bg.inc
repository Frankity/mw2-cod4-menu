///////////////////////
///    COD4 Menu    ///
///     by Slash    ///
///   and momo5502  ///
///////////////////////
		itemDef
		{
			rect 0 0 640 480 4 4
			style 3
			border 0
			ownerdraw 0
			ownerdrawFlag 0
			borderSize 0
			foreColor 1 1 1 1
			backColor 0 0 0 0
			borderColor 0 0 0 0
			outlineColor 0 0 0 0
			origin 0 0
			background mw2_main_background
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
			visible 1
		}
		itemDef
		{
			rect 0 0 1708 480
			style 3
			border 0
			ownerdraw 0
			ownerdrawFlag 0
			borderSize 0
			foreColor 1 1 1 0.5
			backColor 0 0 0 0
			borderColor 0 0 0 0
			outlineColor 0 0 0 0
			origin 0 0
			background mw2_main_cloud_overlay
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
			exp rect x ( ( 0 - 107 ) - ( ( float( milliseconds( ) % 60000 ) / 60000 ) * ( 854 ) )  )
			visible 1
		}
		itemDef
		{
			rect 0 0 -1708 -480
			style 3
			border 0
			ownerdraw 0
			ownerdrawFlag 0
			borderSize 0
			foreColor 1 1 1 0.5
			backColor 0 0 0 0
			borderColor 0 0 0 0
			outlineColor 0 0 0 0
			origin 0 0
			background mw2_main_cloud_overlay
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
			exp rect x ( ( - 107 + 854 ) + ( ( float( milliseconds( ) % 50000 ) / 50000 ) * ( 854 ) )  )
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
			exp forecolor a ( ( ( sin ( milliseconds( ) / 1500 ) + 1 ) * 0.250000 ) + 0.250000  )
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
			visible 1
			exp forecolor a ( ( ( sin ( milliseconds( ) / 480 ) + 1 ) * 0.250000 ) + 0.250000  )
		}
#ifdef MENU_BACKGROUND
		itemDef
		{
			rect -107 0 854 480
			style 3
			border 0
			ownerdraw 0
			ownerdrawFlag 0
			borderSize 0
			foreColor 1 1 1 0.5	//standart a : 0.7
			backColor 0 0 0 0
			borderColor 0 0 0 0
			outlineColor 0 0 0 0
			origin 0 0
			//background background_american_w
			background animbg_blur_front
			decoration 
			type 0
			visible 1
		}
#endif