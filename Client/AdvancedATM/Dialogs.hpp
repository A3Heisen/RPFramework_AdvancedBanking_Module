class AdvancedATM
{
	idd = 10015;
	class controls 
	{
		class RscText_1000: RscText
		{
			idc = 1000;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.418 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "1"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "2"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "3"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "4"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "5"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "6"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "7"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1607: RscButton
		{
			idc = 1607;
			text = "8"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "9"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "10"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			text = "pindisplay"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class transactionHistory: RscListbox
		{
			idc = 1500;
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Pin Enter"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.969,0.608,0.133,1};
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.366094 * safezoneW;
			h = 0.418 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Banking Union"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.366094 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.969,0.608,0.133,1};
		};
		class editbox: RscEdit
		{
			idc = 1401;
			text = "Cash"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;
			text = "Withdraw"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;
			text = "Deposit"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Transactions"; //--- ToDo: Localize;
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "Balance: $999 999 9"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1612: RscButton
		{
			idc = 1612;
			text = "Transfer Funds"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscEdit_1402: RscEdit
		{
			idc = 1402;
			text = "SortNumber"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
			tooltip = "SortNumber"; //--- ToDo: Localize;
		};
		class RscButton_1613: RscButton
		{
			idc = 1613;
			text = "Change PIN"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButton_1614: RscButton
		{
			idc = 1614;
			text = "Freeze Funds"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
	};
};