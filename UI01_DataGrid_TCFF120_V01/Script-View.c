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


Script_View_Init()
{
	/* This script demonstrates recording, verification, and repeatable replay of upload UI controls across various UI libraries - as part of the TruClient Hands-on Guide. Created 2014.04.01 by wilson.mar@hp.com. */
}

Script_View_Action()
{
	/* NEEDS VERIFY. Written to demo TruClient ability to handle data grids. By Wilson Mar 2014.04.25. */
	truclient_step("2", "If ( true )", "snapshot=Action_2.inf");
	{
		lr_start_transaction("T01_Landing");
		truclient_step("2.1", "Navigate to 'http://' + TC.getParam...c/example1.html'", "snapshot=Action_2.1.inf");
		lr_end_transaction("T01_Landing",0);
		truclient_step("2.2", "Evaluate JavaScript [Code] on 0 : pg 1 : row 0 : col...", "snapshot=Action_2.2.inf");
		truclient_step("2.3", "[not set]", "snapshot=Action_2.3.inf");
	}
}
