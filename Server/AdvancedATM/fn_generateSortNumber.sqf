/*
Author: Heisen
First Edit: 27.02.2018
*/

private ["_array"];

_array = [round(random 9),round(random 9),round(random 9),round(random 9),round(random 9),round(random 9),round(random 9)];
_array = _array joinString "";

_check = [0,(format["existBankingSortNumber:%1",_array])] call ExternalS_fnc_ExtDBquery; //--- Check if Sort Number Data Exists?

if (_check select 0 select 0) then {
	_array = 0;
};

_array;