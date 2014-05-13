class chessmastersCommonLibrary_ModuleBase;
class cws_injury_ModuleBase: chessmastersCommonLibrary_ModuleBase
{
	category = "CWSInjury";

	displayName = "CWS Injury Module Base";
};
class cws_injury_ModuleConfig: cws_injury_ModuleBase
{
	subCategory = "System";

	scopeCurator = 2;

	displayName = "CWS Config";
	function = "ccl_fnc_ModuleDummy";

	curatorInfoType = "RscDisplayAttributesModuleCWSConfig";
};
class cws_injury_ModuleConfigEditor: cws_injury_ModuleBase
{
	subCategory = "System";

	scope = 2;

	displayName = "CWS Config";
	function = "cws_fnc_ModuleConfigEditor";

	class Arguments
	{
		class EnableDebugging
		{
			displayName = "Enable Debugging";
			description = "Enable to turn on full debugging for CWS (default: false)";
			typeName = "NUMBER";
			class values
			{
				class Enabled
				{
					name = "$STR_DISP_OPT_ENABLED";
					value = 1;
				};
				class Disabled
				{
					name = "$STR_DISP_OPT_DISABLED";
					value = 0;
					default = 1;
				};
			};
		};
		class EnableReviveGuaranty
		{
			displayName = "Enable Revive Guaranty";
			description = "Enable for a 100% revive chance. False, and the unit can die immediately (default: true)";
			typeName = "NUMBER";
			class values
			{
				class Enabled
				{
					name = "$STR_DISP_OPT_ENABLED";
					value = 1;
					default = 1;
				};
				class Disabled
				{
					name = "$STR_DISP_OPT_DISABLED";
					value = 0;
				};
			};
		};
		class EnableMedicSelfRevive
		{
			displayName = "Enable Medic Self-Revive";
			description = "Enable if you want to allow the medic to self-revive using first aid while down. Key combo is Ctrl+E (default: true)";
			typeName = "NUMBER";
			class values
			{
				class Enabled
				{
					name = "$STR_DISP_OPT_ENABLED";
					value = 1;
					default = 1;
				};
				class Disabled
				{
					name = "$STR_DISP_OPT_DISABLED";
					value = 0;
				};
			};
		};
		class EnableInjuryMarker
		{
			displayName = "Show Injury Map Marker";
			description = "Enable to show a marker for injured units on the map (default: true)";
			typeName = "NUMBER";
			class values
			{
				class Enabled
				{
					name = "$STR_DISP_OPT_ENABLED";
					value = 1;
					default = 1;
				};
				class Disabled
				{
					name = "$STR_DISP_OPT_DISABLED";
					value = 0;
				};
			};
		};
		class EnableInjuryMessage
		{
			displayName = "Show Injury Message";
			description = "Enable to show a message in side chat will show when a unit is injured (default: true)";
			typeName = "NUMBER";
			class values
			{
				class Enabled
				{
					name = "$STR_DISP_OPT_ENABLED";
					value = 1;
					default = 1;
				};
				class Disabled
				{
					name = "$STR_DISP_OPT_DISABLED";
					value = 0;
				};
			};
		};
		class EnableInjury3DIcon
		{
			displayName = "Show Injury 3D Icons";
			description = "Enable and a 3D icon will show you in-game the position of injured units within a range of 30 metres (default: true)";
			typeName = "NUMBER";
			class values
			{
				class Enabled
				{
					name = "$STR_DISP_OPT_ENABLED";
					value = 1;
					default = 1;
				};
				class Disabled
				{
					name = "$STR_DISP_OPT_DISABLED";
					value = 0;
				};
			};
		};
		class EnableDeadDialog
		{
			displayName = "Enable Death Dialog";
			description = "Enable the deadcam and the dead dialog (default: false)";
			typeName = "NUMBER";
			class values
			{
				class Enabled
				{
					name = "$STR_DISP_OPT_ENABLED";
					value = 1;
				};
				class Disabled
				{
					name = "$STR_DISP_OPT_DISABLED";
					value = 0;
					default = 1;
				};
			};
		};
		class EnableBleedingDisplay
		{
			displayName = "Enable Bleeding Counter Display";
			description = "Enable the bleeding counter display for the injured unit (default: true)";
			typeName = "NUMBER";
			class values
			{
				class Enabled
				{
					name = "$STR_DISP_OPT_ENABLED";
					value = 1;
					default = 1;
				};
				class Disabled
				{
					name = "$STR_DISP_OPT_DISABLED";
					value = 0;
				};
			};
		};
		class RamboFactor
		{
			displayName = "Rambo Factor";
			description = "Damage tolerance for the unit before the unit are unconcious ( 1== low, 2 == normal, 3 == higher, 5 == extreme)";
			defaultValue = "3";
		};
		class LifetimeFactor
		{
			displayName = "Random Bleed Time Factor";
			description = "Base time for bleeding out. The final time depends on the damage the unit takes before they are unconcious. The time is randomized and not exact.";
			defaultValue = "200";
		};
		class IconRange
		{
			displayName = "3D Icon Range";
			description = "Max range for the 3D icons, if enabled";
			defaultValue = "50";
		};
		class DeleteTime
		{
			displayName = "Body Cleanup Time";
			description = "Time in seconds until dead bodys are deleted. If set to 0 this feature is disabled. (only units with CWS loaded will be deleted)";
			defaultValue = "300";
		};
		class FirstaidDistance
		{
			displayName = "FirstAid Distance";
			description = "Maximum distance between the healer and the injured to do first aid";
			defaultValue = "2";
		};
		class DamageLimit
		{
			displayName = "Damage Limit";
			description = "Maximum damage a unit will receive if revive gauranty is enabled";
			defaultValue = "0.9";
		};
	};
};
class cws_injury_ModuleFailsafeReload: cws_injury_ModuleBase
{
	category = "Curator";

	scopeCurator = 2;

	displayName = "CWS Failsafe Reload";
	function = "cws_fnc_ModuleFailsafeReload";
};
class cws_injury_ModuleCWSLoad: cws_injury_ModuleBase
{
	subCategory = "Unit";

	scopeCurator = 2;

	displayName = "Load CWS";
	function = "cws_fnc_ModuleCWSLoad";
};
class cws_injury_ModuleRevive: cws_injury_ModuleBase
{
	subCategory = "Unit";

	scopeCurator = 2;

	displayName = "Revive Unit";
	function = "cws_fnc_ModuleRevive";
};
class cws_injury_ModuleDamageUnit: cws_injury_ModuleBase
{
	subCategory = "Unit";

	scopeCurator = 2;

	displayName = "Damage Unit";
	function = "cws_fnc_ModuleDamageUnit";
};
