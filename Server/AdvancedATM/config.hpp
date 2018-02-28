/*
Banks[] = {};
0:
	0: ARRAY, LOCATION
	1: SCALAR, DIR
*/

class RPF_AdvancedATM
{
	class BankingLocations
	{
		InteractionObject = "OfficeTable_01_new_F";
		MarkerDetails[] = {
			"ICON",
			"hd_dot",
			"ColorGreen",
			{5,5}
		};
		Banks[] = {
			{{16892.2,12650.5,20.9417},285}
		};
	};
	class Limits
	{
		Withdrawl = 250; //--- Default ATM Withdrawl Maximum Limit
	};
};
