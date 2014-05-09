createShortcuts = 1;

class cws_injury
{
	tag = "cws";
	class init
	{
		file = "\cws_injury\functions\init";
		class initCWS{preInit = 1;};
		class initCWSGUI{preInit = 1;};
	};
	class common
	{
		file = "\cws_injury\functions\common";
		class damageUnit{};
		class drawCuratorIcons{};
		class reviveUnit{};
	};
	class modules
	{
		file = "\cws_injury\functions\modules";
		class moduleCWSLoad{};
		class moduleDamageUnit{};
		class moduleFailsafeReload{};
		class moduleRevive{};
	};
	class loaders
	{
		file = "\cws_injury\functions\loaders";
		class loadConfigSetting{};
		class loadCWS{};
	};
	class ui_init
	{
		file = "\cws_injury\functions\ui\init";
		class initAppliesTo{};
		class initConfigCheckboxes{};
		class initConfigSliders{};
		class initEnableDebugging{};
	};
	class cws
	{
		file = "\cws_injury\functions\cws";
		class canHeal{};
		class carry{};
		class checklauncher{};
		class cleanUpActions{};
		class deadcam{};
		class delbody{};
		class drag{};
		class drop{};
		class firstAid{};
		class getUnitDamage{};
		class handleDamage{};
		class handleHeal{};
		class handleKeys{};
		class injuredEffects{};
		class isHealable{};
		class isMedic{};
		class keyUnbind{};
		class lookingForWoundedMates{};
		class progressBar{};
		class progressBarInit{};
		class quote{};
		class sendAIHealer{};
		class setHealer{};
		class setHealingProgress{};
		class setUnitDamage{};
		class setupActions{};
		class setupUnitVariables{};
	};
};
