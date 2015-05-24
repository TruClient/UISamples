//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Script_View_Init()
{
	/* Created by: Anil Mainali Create Date: 2015.05.19 Title: Demonstration TruClient script  Description:  This script demonstrates as how to  manipulates dynamic data when a page generates dynamic table when pressing the 'Refresh' button - as part of the TruClient Hands-on Tutorial. */
	truclient_step("2", "Evaluate JavaScript code // Run conditions: var j....net/*', false);", "snapshot=Init_2.inf");
}

Script_View_Action()
{
	lr_start_transaction("T01_Landing_URL");
	truclient_step("1", "Navigate to 'http://stormhelp.saas.h...tml/table1.html'", "snapshot=Action_1.inf");
	lr_end_transaction("T01_Landing_URL",0);
	truclient_step("2", "For ( var i = 1 ; i < 4 ; i++ )", "snapshot=Action_2.inf");
	{
		lr_start_transaction("T02_ClickOn_Refresh_Button");
		truclient_step("2.1", "Click on Refresh button", "snapshot=Action_2.1.inf");
		lr_end_transaction("T02_ClickOn_Refresh_Button",0);
	}
	truclient_step("3", "Evaluate JavaScript object.checked = !object.checked;  on onTable Cell gridcell", "snapshot=Action_3.inf");
}
