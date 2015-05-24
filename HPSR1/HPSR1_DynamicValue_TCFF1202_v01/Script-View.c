//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Script_View_Action()
{
	truclient_step("2", "If ( false )", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Navigate to 'C:\\LoadRunner\\HPSR1_w...amic_value.html'", "snapshot=Action_2.1.inf");
	}
	truclient_step("3", "If ( true )", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Navigate to 'http://stormhelp.saas.h...amic_value.html'", "snapshot=Action_3.1.inf");
	}
	truclient_step("4", "Click on Generate button", "snapshot=Action_4.inf");
	truclient_step("5", "Evaluate JavaScript code generated_data = documen...enerated_data );", "snapshot=Action_5.inf");
}
