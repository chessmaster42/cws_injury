class CfgPatches
{
	class cws_injury
	{
		units[] = {
				"cws_injury_ModuleConfig",
				"cws_injury_ModuleConfig_Editor",
				"cws_injury_ModuleCWSLoad",
				"cws_injury_ModuleCWSLoad_Editor",
				"cws_injury_ModuleDamageUnit",
				"cws_injury_ModuleEmpty",
				"cws_injury_ModuleFailsafeReload",
				"cws_injury_ModuleRevive"
		};
		requiredVersion = 1.0;
		requiredAddons[] = {
				"A3_UI_F",
				"A3_UI_F_Curator",
				"A3_Functions_F",
				"A3_Functions_F_Curator",
				"A3_Modules_F",
				"A3_Modules_F_Curator",
				"chessmastersCommonLibrary"
		};
		author[] = {"Chessmaster42"};
		authorUrl = "https://github.com/chessmaster42/cws_injury";
		version = 1.2.0;
		versionStr = "1.2.0";
		versionAr[] = {1,2,0};
	};
};

class CfgFactionClasses
{
	class ChessmastersCommonLibrary;
	class CWSInjury: ChessmastersCommonLibrary
	{
		displayname = "CWS Injury";

		addon = "cws_injury";
	};
};

class CfgVehicles
{
	#include "cfgVehicles.hpp"
};

class CfgFunctions
{
	#include "cfgFunctions.hpp"
};

class RscTitles
{
	#include "rscTitles.hpp"
};

#include "dialogs.hpp"
