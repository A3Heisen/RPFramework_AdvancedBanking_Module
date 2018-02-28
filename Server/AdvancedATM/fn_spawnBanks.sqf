/*
Author: Heisen
First Edit: 28.02.2018
*/


RPF_Banks_Markers = [];

_bankingSetup = (configFile >> "RPF_AdvancedATM" >> "BankingLocations");
_defaultInteractionObject = getText (_bankingSetup >> "InteractionObject");
_defaultMarkerDetails = getArray (_bankingSetup >> "MarkerDetails");
{
	_newBankingLocation = createVehicle [_defaultInteractionObject,(_x select 0),[],0,"NONE"];
	_newBankingLocation setDir (_x select 1);
	_newBankingLocation_MarkerStr = createMarker [(format["bankMarkerStr_%1",(count RPF_Banks_Markers) + 1]),[(_x select 0 select 0),(_x select 0 select 1)]];
	_newBankingLocation_MarkerStr setMarkerShape  (_defaultMarkerDetails select 0);
	_newBankingLocation_MarkerStr setMarkerType (_defaultMarkerDetails select 1);
	_newBankingLocation_MarkerStr setMarkerColor (_defaultMarkerDetails select 2);
	_newBankingLocation_MarkerStr setMarkerSize (_defaultMarkerDetails select 3);
	RPF_Banks_Markers pushback (format["bankMarkerStr_%1",(count RPF_Banks_Markers) + 1]);
} forEach (getArray(_bankingSetup >> "Banks"));