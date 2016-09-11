//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	/* Title: Demonstration TruClient script  Description: Correlation Challenge on MyLoadTest using TruClient scripting  Protocol: TruClient Date: 2015.05.11  Author: Wei Chien Yau  Website: https://weichienyau.com Reviewed by Anil Mainali Fixed verification for the final step. */
	truclient_step("2", "Evaluate JavaScript code // Run conditions: var j...net/*', false);", "snapshot=Init_2.inf");

	return 0;
}

Action()
{
	truclient_step("1", "Initial Correlation Challenge landing page", "snapshot=Action_1.inf");
	{
		lr_start_transaction("Initial Correlation Challenge Load");
		truclient_step("1.1", "Navigate to 'http://www.myloadtest.c...tion-challenge/'", "snapshot=Action_1.1.inf");
		truclient_step("1.2", "Verify Correlation Challenge 's 'Visible Text' Contain Correlation Challenge", "snapshot=Action_1.2.inf");
		lr_end_transaction("Initial Correlation Challenge Load",0);
	}
	truclient_step("2", "Step 0 - Begin Correlation Challenge", "snapshot=Action_2.inf");
	{
		lr_start_transaction("Step 0 - Begin by clicking next");
		truclient_step("2.1", "Click on Next button", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Verify Step 1 's 'Visible Text' Contain Step 1", "snapshot=Action_2.2.inf");
		lr_end_transaction("Step 0 - Begin by clicking next",0);
	}
	truclient_step("5", "Step 1 - Enter the random number", "snapshot=Action_5.inf");
	{
		truclient_step("5.1", "Evaluate JavaScript code var content = document.g...lue',array[1]);", "snapshot=Action_5.1.inf");
		truclient_step("5.2", "Click on Step 1 Here is a simple... textbox", "snapshot=Action_5.2.inf");
		truclient_step("5.3", "Type TC.getParam('Step1Value');  in Step 1 Here is a simple... textbox", "snapshot=Action_5.3.inf");
		lr_start_transaction("Step 1 - Enter the random number");
		truclient_step("5.4", "Click on Next button", "snapshot=Action_5.4.inf");
		truclient_step("5.5", "Verify Step 1 's 'Visible Text' Contain Step 2", "snapshot=Action_5.5.inf");
		lr_end_transaction("Step 1 - Enter the random number",0);
	}
	truclient_step("6", "Step 2 - Select the default colour", "snapshot=Action_6.inf");
	{
		lr_start_transaction("Step 2 - Select the default colour");
		truclient_step("6.1", "Click on Next button", "snapshot=Action_6.1.inf");
		truclient_step("6.2", "Verify Step 1 's 'Visible Text' Contain Step 3", "snapshot=Action_6.2.inf");
		lr_end_transaction("Step 2 - Select the default colour",0);
	}
	truclient_step("8", "Step 3 - Select the in-stock items", "snapshot=Action_8.inf");
	{
		truclient_step("8.1", "Evaluate JavaScript code var re = /<td>In S...ount',counter);", "snapshot=Action_8.1.inf");
		truclient_step("8.3", "For ( var i = 1 ; i < eval(TC.getParam(...p3Value_count')) ; i++ )", "snapshot=Action_8.3.inf");
		{
			truclient_step("8.3.1", "Evaluate JavaScript code Step3Value=window.Step3V...'+i.toString())", "snapshot=Action_8.3.1.inf");
			truclient_step("8.3.2", "Click on Step3Value checkbox", "snapshot=Action_8.3.2.inf");
		}
		lr_start_transaction("Step 3 - Select the in-stock items");
		truclient_step("8.5", "Click on Next button", "snapshot=Action_8.5.inf");
		truclient_step("8.6", "Verify Step 1 's 'Visible Text' Contain Step 4", "snapshot=Action_8.6.inf");
		lr_end_transaction("Step 3 - Select the in-stock items",0);
	}
	truclient_step("9", "Step 4 - Final step", "snapshot=Action_9.inf");
	{
		lr_start_transaction("Step 4 - Final step");
		truclient_step("9.1", "Click on Next button", "snapshot=Action_9.1.inf");
		truclient_step("9.2", "Verify Correlation Challenge 's 'Visible Text' Contain Correlation Challenge", "snapshot=Action_9.2.inf");
		lr_end_transaction("Step 4 - Final step",0);
	}

	return 0;
}

vuser_end()
{
	return 0;
}
