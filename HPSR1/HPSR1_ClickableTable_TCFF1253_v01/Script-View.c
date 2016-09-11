//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	/* //Created by:Anil Mainali //Create Date: 2015.05.19 //Title: Demonstration TruClient script  //Description: This script demostrates as how to manupulate the script automatically which updates the rows with a status of "Open" to "Close" using object identification to find an object and perform an action if a condition exists using object identification methods - as part of the TruClient Hands-on Tutorial. */
	truclient_step("2", "Evaluate JavaScript code // Run conditions: var j....net/*', false);", "snapshot=Init_2.inf");

	return 0;
}

Action()
{
	lr_start_transaction("T01_Landing_URL");
	truclient_step("1", "Navigate to 'http://stormhelp.saas.h...tml/table2.html'", "snapshot=Action_1.inf");
	lr_end_transaction("T01_Landing_URL",0);
	truclient_step("2", "Evaluate JavaScript var rows = object.rows.length; on element (1)", "snapshot=Action_2.inf");
	truclient_step("3", "For ( var i = 1 ; i <= rows ; i++ )", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "If Open gridcell exists", "snapshot=Action_3.1.inf");
		{
			truclient_step("3.1.1", "Evaluate JavaScript var theOpenText = object; on Open gridcell", "snapshot=Action_3.1.1.inf");
			truclient_step("3.1.2", "Evaluate JavaScript code var clickOn = theOpenTex...clickOn.click();", "snapshot=Action_3.1.2.inf");
		}
		truclient_step("Else");
		{
			truclient_step("3.1.1", "Break", "snapshot=Action_3.1.1.inf");
		}
	}

	return 0;
}

vuser_end()
{
	return 0;
}
