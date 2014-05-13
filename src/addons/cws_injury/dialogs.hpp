class CfgScriptPaths
{
	ChessmastersWoundingSystemDisplays = "\cws_injury\functions\ui\displays\";
};

class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscCombo;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscEdit;
class RscListBox;
class RscCheckBox;
class RscMapControl;
class RscText;
class RscXSliderH;

class RscDisplayAttributeModule: RscControlsGroupNoScrollbars
{
	class controls{};
};
class RscDisplayAttributeModuleCombo: RscDisplayAttributeModule
{
	class controls
	{
		class Title1: RscText{};
		class Value1: RscCombo{};
	};
};

class RscDisplayAttributeModuleCWSEnableDebugging: RscDisplayAttributeModuleCombo
{
	onSetFocus = "_this call cws_fnc_InitEnableDebugging";
	idc = 43010;
	class controls: controls
	{
		class Title1: Title1
		{
			idc = 43011;
			text = "Enable Debugging";
		};
		class Value1: Value1
		{
			idc = 43012;
		};
	};
};
class RscDisplayAttributeModuleCWSAppliesTo: RscDisplayAttributeModuleCombo
{
	onSetFocus = "_this call cws_fnc_InitAppliesTo";
	idc = 43020;
	class controls: controls
	{
		class Title1: Title1
		{
			idc = 43021;
			text = "Applies To";
		};
		class Value1: Value1
		{
			idc = 43022;
		};
	};
};
class RscDisplayAttributeModuleCWSConfigCheckboxes: RscDisplayAttributeModule
{
	onSetFocus = "_this call cws_fnc_InitConfigCheckboxes";
	idc = 43030;
	h = "8.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls: controls
	{
		class Title1: RscText
		{
			idc = 43031;
			text = "Enable Revive Guaranty";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value1: RscCheckBox
		{
			idc = 43032;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title2: RscText
		{
			idc = 43033;
			text = "Enable Medic Self-Revive";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value2: RscCheckBox
		{
			idc = 43034;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title3: RscText
		{
			idc = 43035;
			text = "Show Injury Map Marker";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value3: RscCheckBox
		{
			idc = 43036;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title4: RscText
		{
			idc = 43037;
			text = "Show Injury Message";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value4: RscCheckBox
		{
			idc = 43038;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title5: RscText
		{
			idc = 43039;
			text = "Show Injury 3D Icons";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value5: RscCheckBox
		{
			idc = 43040;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title6: RscText
		{
			idc = 43041;
			text = "Enable Death Dialog";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "5.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value6: RscCheckBox
		{
			idc = 43042;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "5.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title7: RscText
		{
			idc = 43043;
			text = "Enable Bleeding Counter Display";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "6.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value7: RscCheckBox
		{
			idc = 43044;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "6.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscDisplayAttributeModuleCWSConfigSliders: RscDisplayAttributeModule
{
	onSetFocus = "_this call cws_fnc_InitConfigSliders";
	idc = 43050;
	h = "7.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls: controls
	{
		class Title1: RscText
		{
			idc = 43051;
			text = "Rambo Factor";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value1: RscXSliderH
		{
			onSliderPosChanged = "(_this select 0) ctrlSetTooltip str(sliderPosition (_this select 0))";
			idc = 43052;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15.9 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title2: RscText
		{
			idc = 43053;
			text = "Random Bleed Time Factor";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value2: RscXSliderH
		{
			onSliderPosChanged = "(_this select 0) ctrlSetTooltip str(sliderPosition (_this select 0))";
			idc = 43054;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15.9 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title3: RscText
		{
			idc = 43055;
			text = "3D Icon Range";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value3: RscXSliderH
		{
			onSliderPosChanged = "(_this select 0) ctrlSetTooltip str(sliderPosition (_this select 0))";
			idc = 43056;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15.9 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title4: RscText
		{
			idc = 43057;
			text = "Body Cleanup Time";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value4: RscXSliderH
		{
			onSliderPosChanged = "(_this select 0) ctrlSetTooltip str(sliderPosition (_this select 0))";
			idc = 43058;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15.9 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title5: RscText
		{
			idc = 43059;
			text = "FirstAid Distance";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value5: RscXSliderH
		{
			onSliderPosChanged = "(_this select 0) ctrlSetTooltip str(sliderPosition (_this select 0))";
			idc = 43060;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15.9 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title6: RscText
		{
			idc = 43061;
			text = "Damage Limit";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "5.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value6: RscXSliderH
		{
			onSliderPosChanged = "(_this select 0) ctrlSetTooltip str(sliderPosition (_this select 0))";
			idc = 43062;
			x = "10.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "5.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15.9 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};

class RscDisplayAttributesModuleChessmastersCommonLibraryBase
{
	class Controls
	{
		class Background: RscText{};
		class Title: RscText{};
		class Content: RscControlsGroup
		{
			class controls{};
		};
		class ButtonOK: RscButtonMenuOK{};
		class ButtonCancel: RscButtonMenuCancel{};
	};
};

class RscDisplayAttributesModuleCWSConfig: RscDisplayAttributesModuleChessmastersCommonLibraryBase
{
	onLoad = "['onLoad',_this,'RscDisplayAttributesModuleCWSConfig','ChessmastersWoundingSystemDisplays'] call compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'";
	onUnload = "['onUnload',_this,'RscDisplayAttributesModuleCWSConfig','ChessmastersWoundingSystemDisplays'] call compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'";
	idd = 44100;
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title
		{
			text = "CWS Config";
		};
		class Content: Content
		{
			class Controls: controls
			{
				class Control1: RscDisplayAttributeModuleCWSEnableDebugging{};
				class Control2: RscDisplayAttributeModuleCWSConfigCheckboxes{};
				class Control3: RscDisplayAttributeModuleCWSConfigSliders{};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class RscDisplayAttributesModuleCWS: RscDisplayAttributesModuleChessmastersCommonLibraryBase
{
	onLoad = "['onLoad',_this,'RscDisplayAttributesModuleCWS','ChessmastersWoundingSystemDisplays'] call compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'";
	onUnload = "['onUnload',_this,'RscDisplayAttributesModuleCWS','ChessmastersWoundingSystemDisplays'] call compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'";
	idd = 44110;
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title
		{
			text = "Load CWS";
		};
		class Content: Content
		{
			class Controls: controls
			{
				class Control1: RscDisplayAttributeModuleCWSAppliesTo{};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
