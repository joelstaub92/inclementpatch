MirageTower_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_B1F_OnTransition
	.byte 0

MirageTower_B1F_OnTransition:
	setflag FLAG_ENTERED_MIRAGE_TOWER
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	setflag FLAG_LANDMARK_MIRAGE_TOWER
	end
