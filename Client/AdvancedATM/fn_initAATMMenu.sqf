/*
Author: Kerkkoh
First Edit: 14.3.2016
*/

RPF_InteractionMenuItems pushBack [localize 'STR_RPF_MODULES_BANK_INTERACT_DIALOG', "['STR_RPF_MODULES_BANK_INTERACT_DIALOG'] call Client_fnc_interactionSub"];

_menuItems = [
	localize 'STR_RPF_MODULES_BANK_INTERACT_DIALOG',
	[
		["alive player"],
		[(localize "STR_RPF_MODULES_OPEN_BANK_ACCOUNT_DIALOG"), "[] call ClientModules_fnc_openNewAccountDialog"]
	]
];

RPF_InteractionSubItems pushBack _menuItems;