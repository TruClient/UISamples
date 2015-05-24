   /**********************************************************************************************
   **                                                                                           **
   **                   	             PLEASE NOTE										    **
   **                   	             ===========										    **
   **                                                                                           **
   **      The Script-View you see here is a READ-ONLY representation of the actual script.     **
   **                                                                                           **
   **      For creating, viewing, modifying, running and/or debugging a script, please press    **
   **                                                                                           **
   **      the "Develop Script" button. This will start Firefox,  with the TruClient sidebar    **
   **                                                                                           **
   **      at the left.  Starting Firefox may take a while. Alternatively, you can run          **
   **                                                                                           **
   **      the current script as-is, without starting Firefox, by pressing the "Run" button.    **
   **                                                                                           **
   **********************************************************************************************/


Script_View_Action()
{
	truclient_step("1", "If ( true )", "snapshot=Action_1.inf");
	{
		truclient_step("1.1", "Navigate to 'http://jqueryui.com/slider/'", "snapshot=Action_1.1.inf");
		truclient_step("1.2", "Drag focusable (1) 205px right", "snapshot=Action_1.2.inf");
		/* // No discernable way to get the value dragged to. */
	}
	truclient_step("2", "If ( true )", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Navigate to 'http://www.jqwidgets.co...lider/index.htm'", "snapshot=Action_2.1.inf");
		truclient_step("2.3", "Drag 0 131px right", "snapshot=Action_2.3.inf");
		truclient_step("2.5", "Verify #8E00FF 's 'Visible Text' contains '#8E00FF'", "snapshot=Action_2.5.inf");
	}
	truclient_step("3", "If ( true )", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Navigate to 'http://yuilibrary.com/y...ider-basic.html'", "snapshot=Action_3.1.inf");
		truclient_step("3.3", "Set Slider thumb slider to 50", "snapshot=Action_3.3.inf");
		truclient_step("3.4", "Verify Value 's 'Visible Text' contains '50'", "snapshot=Action_3.4.inf");
		truclient_step("3.5", "Set Slider thumb slider to 83", "snapshot=Action_3.5.inf");
		truclient_step("3.6", "Verify Value 's 'Visible Text' contains '83'", "snapshot=Action_3.6.inf");
	}
	truclient_step("4", "If ( false )", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Navigate to 'http://demos.telerik.co...ider/index.html'", "snapshot=Action_4.1.inf");
		/* TODO: Verify slider */
		truclient_step("4.4", "Set Drag slider to 10", "snapshot=Action_4.4.inf");
		truclient_step("4.6", "Set Drag slider to -10", "snapshot=Action_4.6.inf");
		truclient_step("4.8", "Click on Kendo jQuery Slider Control...", "snapshot=Action_4.8.inf");
	}
	truclient_step("7", "If ( true )", "snapshot=Action_7.inf");
	{
		truclient_step("7.1", "Navigate to 'http://zinoui.com/demos/slider'", "snapshot=Action_7.1.inf");
		truclient_step("7.2", "Drag focusable (2) 105px right", "snapshot=Action_7.2.inf");
		truclient_step("7.3", "Verify Remote Demo 's 'Visible Text' contains '68'", "snapshot=Action_7.3.inf");
	}
}
