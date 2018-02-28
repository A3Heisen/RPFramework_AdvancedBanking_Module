/*
Author: Heisen
First Edit: 26.02.2018
*/

private ["_fetch"];
params [
	"_player"
];

_puid = getPlayerUID _player;

_check = [0,(format["existBankingData:%1",_puid])] call ExternalS_fnc_ExtDBquery; //--- Check if Banking Data Exists?

if !(_check select 0 select 0) then {
	diag_log format ["RPF Banking: Existing Data not found for player (puid: %1)",_puid];
	_fetch = [];
} else {
	diag_log format ["RPF Banking: Existing Data successfully found for player (puid: %1)",_puid];
	_fetch = [format["selectBankingData:%1",_puid], 2] call ExternalS_fnc_ExtDBasync;
};
diag_log str _fetch;

_player setVariable ["BankAccounts",_fetch,true];




/*

if !(_check select 0 select 0) then {
	_uniqueIdentifer = _player getVariable "bankAccounts";
	_pinNumber = [round(random 9),round(random 9),round(random 9),round(random 9)];
	_maxWithdrawl = getNumber(configFile >> "RPF_AdvancedATM" >> "Limits" >> "Withdrawl");
	_emptyTransactions = [];
	_insert = [0,format["insertBankingData:%1:%2:%3:%4:%5",_puid,_uniqueIdentifer,_pinNumber,_maxWithdrawl,_emptyTransactions]] call ExternalS_fnc_ExtDBquery; //--- Insert Banking Data
} else {
	_fetch = [format["retrieveBankingData:%1",_puid],2] call ExternalS_fnc_ExtDBasync; //--- Fetch Existing Banking Data
};