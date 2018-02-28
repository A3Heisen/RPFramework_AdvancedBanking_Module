/*
Author: Heisen
First Edit: 26.02.2018
*/


[player] remoteExec ["ServerModules_fnc_retrieveBankingData",2]; //--- Send Request for Banking Information

waitUntil {!isNil{player getVariable "BankAccounts"}};

hint "Bank Retrieving Data Executed!";

//[] call ClientModules_fnc_initAdvancedATMMenu;

