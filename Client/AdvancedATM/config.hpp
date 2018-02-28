class RPF_AdvancedATM
{
	class Deposits
	{
		BankOnly = true;
	};
	class Accounts
	{
		MaximumAccounts = 3;
		Services[] = {"ShitiFax","NatEast"};

		class ShitiFax
		{
			Accounts[] = {"YoungSavers","ExpressCash"};
			class YoungSavers
			{
				Conditions = "";
				OpeningCost = 0;
				IntrestRate = 0.025;
			};
			class ExpressCash
			{
				Conditions = "";
				OpeningCost = 1500;
				IntrestRate = 0.05;
			};
		};
		class NatEast
		{
			Accounts[] = {"EverydayBank","RewardBlack"};
			class EverydayBank
			{
				Conditions = "";
				OpeningCost = 0;
				IntrestRate = 0.025;
			};
			class RewardBlack
			{
				Conditions = "";
				OpeningCost = 1500;
				IntrestRate = 0.05;
			};
		};
	};
};