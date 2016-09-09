//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	/* 2015.05.14 This script demonstrates Implement of four different techniques to recognize objects in four different action files within the same script- as part of the TruClient Hands-on Guide. */
	truclient_step("2", "Evaluate JavaScript code // Run conditions: var j....net/*', false);", "snapshot=Init_2.inf");
	truclient_step("3", "If ( false )", "snapshot=Init_3.inf");
	{
		truclient_step("3.1", "Navigate to 'C:\\WM\\HPSR1_website\\...ite\\links.html'", "snapshot=Init_3.1.inf");
	}
	truclient_step("4", "Navigate to 'http://stormhelp.saas.h...html/links.html'", "snapshot=Init_4.inf");

	return 0;
}

Action()
{
	return 0;
}

A1_EvalXPathMatchParam()
{
	truclient_step("1", "Navigate to 'http://stormhelp.saas.h...html/links.html'", "snapshot=A1_EvalXPathMatchParam_1.inf");
	truclient_step("2", "For ( var i = 1 ; i < 9 ; i++ )", "snapshot=A1_EvalXPathMatchParam_2.inf");
	{
		truclient_step("2.1", "Click on Link 1 this is an examp... link", "snapshot=A1_EvalXPathMatchParam_2.1.inf");
		truclient_step("2.2", "Evaluate JavaScript code LR.advanceParam('LinkText');", "snapshot=A1_EvalXPathMatchParam_2.2.inf");
		truclient_step("2.3", "Click on Back to Links page link", "snapshot=A1_EvalXPathMatchParam_2.3.inf");
	}
	truclient_step("3", "Click on Link 1 this is an examp... link", "snapshot=A1_EvalXPathMatchParam_3.inf");
	truclient_step("4", "Click on Back to Links page link", "snapshot=A1_EvalXPathMatchParam_4.inf");

	return 0;
}

A2_EvalXPathArgsContext()
{
	truclient_step("1", "Navigate to 'http://stormhelp.saas.h...html/links.html'", "snapshot=A2_EvalXPathArgsContext_1.inf");
	truclient_step("2", "For ( var i = 1 ; i < 9 ; i++ )", "snapshot=A2_EvalXPathArgsContext_2.inf");
	{
		truclient_step("2.1", "Click on Link 1 this is an examp... link", "snapshot=A2_EvalXPathArgsContext_2.1.inf");
		truclient_step("2.2", "Click on Back to Links page link", "snapshot=A2_EvalXPathArgsContext_2.2.inf");
	}
	truclient_step("3", "Click on Link 1 this is an examp... link", "snapshot=A2_EvalXPathArgsContext_3.inf");
	truclient_step("4", "Click on Back to Links page link", "snapshot=A2_EvalXPathArgsContext_4.inf");

	return 0;
}

A3_EvalXPath_DOM_ArgsContext()
{
	truclient_step("1", "Navigate to 'http://stormhelp.saas.h...html/links.html'", "snapshot=A3_EvalXPath_DOM_ArgsContext_1.inf");
	truclient_step("2", "For ( var i = 1 ; i < 9 ; i++ )", "snapshot=A3_EvalXPath_DOM_ArgsContext_2.inf");
	{
		truclient_step("2.1", "Click on Link 1 this is an examp... link", "snapshot=A3_EvalXPath_DOM_ArgsContext_2.1.inf");
		truclient_step("2.2", "Click on Back to Links page link", "snapshot=A3_EvalXPath_DOM_ArgsContext_2.2.inf");
	}
	truclient_step("3", "Click on Link 1 this is an examp... link", "snapshot=A3_EvalXPath_DOM_ArgsContext_3.inf");
	truclient_step("4", "Click on Back to Links page link", "snapshot=A3_EvalXPath_DOM_ArgsContext_4.inf");

	return 0;
}

A4_Descriptors_Editor()
{
	truclient_step("1", "Navigate to 'http://stormhelp.saas.h...html/links.html'", "snapshot=A4_Descriptors_Editor_1.inf");
	truclient_step("2", "For ( var i = 1 ; i < 9 ; i++ )", "snapshot=A4_Descriptors_Editor_2.inf");
	{
		truclient_step("2.1", "Click on Link 1 this is an examp... link", "snapshot=A4_Descriptors_Editor_2.1.inf");
		truclient_step("2.2", "Click on Back to Links page link", "snapshot=A4_Descriptors_Editor_2.2.inf");
	}
	truclient_step("3", "Click on Link 1 this is an examp... link", "snapshot=A4_Descriptors_Editor_3.inf");
	truclient_step("4", "Click on Back to Links page link", "snapshot=A4_Descriptors_Editor_4.inf");

	return 0;
}

vuser_end()
{
	return 0;
}
