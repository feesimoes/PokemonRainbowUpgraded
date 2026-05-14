Route43_NorthEntrance_MapScripts::
# 3 "data/maps/Route43_NorthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route43_NorthEntrance_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route43_NorthEntrance_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Route43_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Route43_TriggerLeft_EnterLakeOfRage::
# 11 "data/maps/Route43_NorthEntrance/scripts.pory"
	compare VAR_DAY_DATE, 2
	goto_if_eq Route43_TriggerLeft_EnterLakeOfRage_2
# 17 "data/maps/Route43_NorthEntrance/scripts.pory"
	setdynamicwarp MAP_LAKE_OF_RAGE, 0
Route43_TriggerLeft_EnterLakeOfRage_1:
# 19 "data/maps/Route43_NorthEntrance/scripts.pory"
	release
	end

Route43_TriggerLeft_EnterLakeOfRage_2:
# 13 "data/maps/Route43_NorthEntrance/scripts.pory"
	setdynamicwarp MAP_LAKE_OF_RAGE_SUNNY, 0
	goto Route43_TriggerLeft_EnterLakeOfRage_1


Route43_TriggerRight_EnterLakeOfRage::
# 25 "data/maps/Route43_NorthEntrance/scripts.pory"
	compare VAR_DAY_DATE, 2
	goto_if_eq Route43_TriggerRight_EnterLakeOfRage_2
# 31 "data/maps/Route43_NorthEntrance/scripts.pory"
	setdynamicwarp MAP_LAKE_OF_RAGE, 1
Route43_TriggerRight_EnterLakeOfRage_1:
# 33 "data/maps/Route43_NorthEntrance/scripts.pory"
	release
	end

Route43_TriggerRight_EnterLakeOfRage_2:
# 27 "data/maps/Route43_NorthEntrance/scripts.pory"
	setdynamicwarp MAP_LAKE_OF_RAGE_SUNNY, 1
	goto Route43_TriggerRight_EnterLakeOfRage_1

