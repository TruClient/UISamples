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
	/* This script demonstrates tool tip recording across various UI libraries. Created by WilsonMar@gmail.com 2014.04.12. */
	truclient_step("2", "If ( true )", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Navigate to 'http://www.jqwidgets.co...oltip/index.htm'", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Mouse Over", "snapshot=Action_2.2.inf");
		{
			truclient_step("2.2.1", "Move mouse over element (1)", "snapshot=Action_2.2.1.inf");
			truclient_step("2.2.2", "Move mouse over image (1) image", "snapshot=Action_2.2.2.inf");
		}
	}
	truclient_step("3", "If ( true )", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Navigate to 'http://jqueryui.com/tooltip/'", "snapshot=Action_3.1.inf");
		/* Why were these captured? */
		truclient_step("3.3", "Mouse Over", "snapshot=Action_3.3.inf");
		{
			truclient_step("3.3.1", "Move mouse over But as it's not a native...", "snapshot=Action_3.3.1.inf");
			truclient_step("3.3.2", "Move mouse over Tooltips are also useful...", "snapshot=Action_3.3.2.inf");
			truclient_step("3.3.3", "Move mouse over Tooltips can be attached...", "snapshot=Action_3.3.3.inf");
			truclient_step("3.3.4", "Move mouse over Tooltips are also useful...", "snapshot=Action_3.3.4.inf");
		}
	}
}
