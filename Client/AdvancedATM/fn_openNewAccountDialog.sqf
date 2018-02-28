/*
Author: Heisen
First Edit: 27.02.2018
*/


_missionConfigFile = (missionConfigFile >> "RPF_AdvancedATM");

_maxmiumAccountLimit = getNumber (_missionConfigFile >> "Accounts" >> "MaximumAccounts");
_bankingServices = getArray(_missionConfigFile >> "Accounts" >> "Services");

if ((count(player getVariable "bankAccounts")) >= _maxmiumAccountLimit) exitWith {
	//hint format ["You've reached the maximum accounts of %1 already!",_maxmiumAccountLimit];
	hint format [localize STR_RPF_MODULES_MAXIMUMACCOUNTS_ERROR,_maxmiumAccountLimit];
};

createDialog "useItem";
((findDisplay 1019) displayCtrl 1600) ctrlSetText "Select Service";
((findDisplay 1019) displayCtrl 1600) buttonSetAction "[] call ClientModules_fnc_openNewAccount";

{
	lbAdd [1500,_x];
	lbSetData [1500,_forEachIndex,_bankingServices select _forEachIndex];
} forEach _bankingServices;

diag_log format ["RPF Dialog Load: Banking Dialog Loaded, %1 entries added to Listbox",(count(_bankingServices))];