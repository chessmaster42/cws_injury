Chessmaster's Wounding System for Arma 3
==========

Features
----------
-	fully AI compatible
-	fully MP and JIP compatible
-	very low usage of network traffic (nearly 100% local on clients)
-	compatible for missions designed for usage of headless client
-	compatible for missions without respawn
-	config file to change some parameters if needed
-	configure the damage tolerance of your units
-	unconscious state without being really death
-	drag, carry and drop unconscious units
-	unconscious units have a visual effect while bleeding
-	unconscious units are able to move around and fire their primary weapon
-	unconscious units are ignored by AI until they fire their weapon
-	unconscious units aren't able to walk, throw grenades, reload, etc.
-	unconscious medics are able to use first aid on themselves (can be disabled in config)
-	markers show unconscious units on the map
-	3D icons show unconscious units in-game within a circle of 30 metres (distance is configurable)
-	3D icons show bleeding percentage to medics and the icon and text are bigger so that the medic can more easily check on the wounded
-	progress of healing is visualized (progress bar)
-	a player who starts the first aid process can abort by walking away
-	injured or unconscious units will be healed different amounts based on who healed (medic vs non-medic) and whether they used a medikit or first aid kit
-	deadcam dialog implemented
-	a famous quote about war displayed during deadcam dialog

Known Issues
----------
-	AI don't always run the healing animation while performing First Aid
-	Players may sometimes die once again immediately after respawn

Script Setup
==========

1. Add the following line to your init.sqf file:
```php
call compile preprocessFile "cws_injury\cws_init.sqf";
```
2. Add the following to your description.ext:
```php
class CfgFunctions
{
	#include "cws_injury\cfgFunctionsCWS.hpp"
};
class RscTitles
{
	#include "cws_injury\dialogs\RscTitlesCWS.hpp"
};
```
3. Configure settings in cws_injury\cws_config.sqf

Mod Setup
==========

TODO - Add mod setup instructions

Credits
==========
-	Psychobastard for the A3 Wounding system upon which this is based [Source](http://forums.bistudio.com/showthread.php?170975-A3-Wounding-System)
-	BonInf* for the first multiplayer compatible version (Arma 2)
-	EightSix for his PatrolOps and the included status bar
-	BI for the design idea (Wounding module Arma 2)

Changelog
==========

v1.0.1 - Minor bug fixes
--Fixed persistent "You are dead." message
--Fixed death after respawn
--Fixed possible bleeding bug
--Fixed side chat message setting check

v1.0.0 - Initial release