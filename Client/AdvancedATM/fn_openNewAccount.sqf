/*
Author: Heisen
First Edit: 27.02.2018
*/


private _selected = lbCurSel 1500;
if (_selected isEqualTo -1) exitWith {
	hint "Not Selected";
	closeDialog 0;
};

private _serviceData = lbData [1500,_selected];

private _selectedBankingService = (missionConfigFile >> "RPF_AdvancedATM" >> "Accounts" >> _serviceData);

lbClear 1500;

{
	private _openAccountCost = getNumber(_selectedBankingService >>  _x>> "OpeningCost");
	private _accountIntrestRate = getNumber(_selectedBankingService >> _x >> "IntrestRate");

	lbAdd [1500,_x];
	lbSetTooltip [1500,_forEachIndex,format["Open Cost: $%1\nIntrest Rate: %2%3",_openAccountCost,_accountIntrestRate,"%"]];
	lbSetData [1500,_forEachIndex,str[_serviceData,_x]];
} forEach (getArray(_selectedBankingService >> "Accounts"));


((findDisplay 1019) displayCtrl 1600) ctrlSetText "Select Account";
((findDisplay 1019) displayCtrl 1600) buttonSetAction "[] call ClientModules_fnc_verifyNewAccount";