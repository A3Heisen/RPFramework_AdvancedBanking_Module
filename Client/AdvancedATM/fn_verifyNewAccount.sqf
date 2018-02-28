/*
Author: Heisen
First Edit: 27.02.2018
*/


private _selected = lbCurSel 1500;
if (_selected isEqualTo -1) exitWith {
	hint "Not Selected";
	closeDialog 0;
};

private _accountData =  call compile (lbData [1500,lbCurSel 1500]);

diag_log str _accountData;

private _selectedBankingAccount = (missionConfigFile >> "RPF_AdvancedATM" >> "Accounts" >> (_accountData select 1));
private _openCost = getNumber(_selectedBankingAccount >> "OpeningCost");

if ((player getVariable "cash") < _openCost) exitWith {
	hint "Not Enough Cash"; //--- Not Enough Cash
};

player setVariable ["cash",((player getVariable "cash")-_openCost)];

[player,(_accountData select 0),(_accountData select 1)] remoteExec ["ServerModules_fnc_insertBankingData",2];

_before = player getVariable "BankAccounts";
waitUntil {!((player getVariable "BankAccounts") isEqualTo _before)};
[player] remoteExec ["ServerModules_fnc_retrieveBankingData",2];

waitUntil{!isNil{player getVariable "BankAccounts"}};

private _bankAccounts = player getVariable "BankAccounts";
private _newBankAccount = _bankAccounts select ((count _bankAccounts)-1);

hint format ["New %1 %2 Account Created (SortNumber: %3 | Pin: %4)",_accountData select 0,_accountData select 1,_newBankAccount select 1,(_newBankAccount select 2) joinString ""];

closeDialog 0;