//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Script_View_Init()
{
	/* Title: Demonstration TruClient script. Description: Correlation Challenge on MyLoadTest using TruClient scripting  Protocol: TruClient FireFox Date: 2015.06.02 */
	truclient_step("2", "Evaluate JavaScript code // Run conditions: var j...net/*', false);", "snapshot=Init_2.inf");
}

Script_View_Action()
{
	lr_start_transaction("Initial Correlation Challenge Load");
	truclient_step("1", "Navigate to 'http://www.myloadtest.c...tion-challenge/'", "snapshot=Action_1.inf");
	truclient_step("3", "Verify Correlation Challenge 's 'Visible Text' Contain Correlation Challenge", "snapshot=Action_3.inf");
	lr_end_transaction("Initial Correlation Challenge Load",0);
	lr_start_transaction("Step 0 - Begin by clicking next");
	truclient_step("4", "Click on Next button", "snapshot=Action_4.inf");
	truclient_step("5", "Verify Step 1 's 'Visible Text' Contain Step 1", "snapshot=Action_5.inf");
	lr_end_transaction("Step 0 - Begin by clicking next",0);
	truclient_step("6", "Evaluate JavaScript code var content = document.g...lue',array[1]);", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Step 1 Here is a simple... textbox", "snapshot=Action_7.inf");
	truclient_step("8", "Type TC.getParam('Step1Value');  in Step 1 Here is a simple... textbox", "snapshot=Action_8.inf");
	lr_start_transaction("Step 1 - Enter the random number");
	truclient_step("9", "Click on Next button", "snapshot=Action_9.inf");
	truclient_step("10", "Verify Step 1 's 'Visible Text' Contain Step 2", "snapshot=Action_10.inf");
	lr_end_transaction("Step 1 - Enter the random number",0);
	lr_start_transaction("Step 2 - Select the default colour");
	truclient_step("11", "Click on Next button", "snapshot=Action_11.inf");
	truclient_step("12", "Verify Step 1 's 'Visible Text' Contain Step 3", "snapshot=Action_12.inf");
	lr_end_transaction("Step 2 - Select the default colour",0);
	truclient_step("13", "Evaluate JavaScript code var re = /<td>In S...ount',counter);", "snapshot=Action_13.inf");
	truclient_step("14", "For ( var i = 1 ; i < eval(TC.getParam(...p3Value_count')) ; i++ )", "snapshot=Action_14.inf");
	{
		truclient_step("14.1", "Evaluate JavaScript code Step3Value=window.Step3V...'+i.toString())", "snapshot=Action_14.1.inf");
		truclient_step("14.2", "Click on Step3Value checkbox", "snapshot=Action_14.2.inf");
	}
	lr_start_transaction("Step 3 - Select the in-stock items");
	truclient_step("18", "Click on Next button", "snapshot=Action_18.inf");
	truclient_step("19", "Verify Step 1 's 'Visible Text' Contain Step 4", "snapshot=Action_19.inf");
	lr_end_transaction("Step 3 - Select the in-stock items",0);
	lr_start_transaction("Step 4 - Final step");
	truclient_step("20", "Click on Next button", "snapshot=Action_20.inf");
	truclient_step("21", "Verify Correlation Challenge 's 'Visible Text' Contain Correlation Challenge", "snapshot=Action_21.inf");
	lr_end_transaction("Step 4 - Final step",0);
}
