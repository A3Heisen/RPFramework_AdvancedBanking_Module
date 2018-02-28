/*
Author: Heisen
First Edit: 26.02.2018
*/


params [
	"_player",
	"_bankprovidor",
	"_bankservice"
];

_puid = getPlayerUID _player;

_sortNumber = [] call ServerModules_fnc_generateSortNumber;
if (_sortNumber isEqualTo 0) exitWith {
	[_player] call ServerModules_fnc_retrieveBankingData; //--- Generated pre-existing sort number, re-run process!
};
_pinNumber = [round(random 9),round(random 9),round(random 9),round(random 9)];

_insert = [0,format["insertBankingData:%1:%2:%3:%4:%5:%6:%7:%8",_sortNumber,_pinNumber,_puid,_bankProvidor,_bankService,0,0,([])]] call ExternalS_fnc_ExtDBquery;

diag_log format ["RPF Banking: Inserting Bank Account for player (puid: %1) (sortnumber: %2) (pinnumber: %3) (bankprovidor: %4) (bankservice: %5)",_puid,_sortNumber,_pinNumber,_bankProvidor,_bankService];
