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
	/* This script demonstrates menu recording across various UI libraries. Created by WilsonMar@gmail.com 2014.04.12. */
	truclient_step("2", "If ( false )", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Navigate to 'http://jqueryui.com/menu/'", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Mouse Over", "snapshot=Action_2.2.inf");
		{
			truclient_step("2.2.1", "Move mouse over Delphi menuitem", "snapshot=Action_2.2.1.inf");
		}
		truclient_step("2.3", "Click on Saarland menuitem", "snapshot=Action_2.3.inf");
		/* How to verify result of selection? */
	}
	truclient_step("3", "If ( false )", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Navigate to 'http://www.jqwidgets.co...xmenu/index.htm'", "snapshot=Action_3.1.inf");
		/* TODO: Exra Mouse Overs need clean-up: */
		truclient_step("3.3", "Mouse Over", "snapshot=Action_3.3.inf");
		{
			truclient_step("3.3.1", "Move mouse over jqxPasswordInput", "snapshot=Action_3.3.1.inf");
			truclient_step("3.3.2", "Move mouse over jqxColorPicker link", "snapshot=Action_3.3.2.inf");
			truclient_step("3.3.3", "Move mouse over Introduction The jQuery...", "snapshot=Action_3.3.3.inf");
			truclient_step("3.3.4", "Move mouse over Vertical Menu listitem", "snapshot=Action_3.3.4.inf");
			truclient_step("3.3.5", "Move mouse over Search Engine Friendly... heading", "snapshot=Action_3.3.5.inf");
			truclient_step("3.3.6", "Move mouse over jquery context menu image", "snapshot=Action_3.3.6.inf");
			truclient_step("3.3.7", "Move mouse over Introduction The jQuery...", "snapshot=Action_3.3.7.inf");
			truclient_step("3.3.8", "Move mouse over jqxMenu has a rich set...", "snapshot=Action_3.3.8.inf");
			truclient_step("3.3.9", "Move mouse over jquery context menu image", "snapshot=Action_3.3.9.inf");
			truclient_step("3.3.10", "Move mouse over jquery horizontal menu image", "snapshot=Action_3.3.10.inf");
			truclient_step("3.3.11", "Move mouse over jquery menu touch image", "snapshot=Action_3.3.11.inf");
			truclient_step("3.3.12", "Move mouse over This is the default display...", "snapshot=Action_3.3.12.inf");
			truclient_step("3.3.13", "Move mouse over Horizontal Menu heading", "snapshot=Action_3.3.13.inf");
			truclient_step("3.3.14", "Move mouse over jquery context menu image", "snapshot=Action_3.3.14.inf");
			truclient_step("3.3.15", "Move mouse over You can easily turn the...", "snapshot=Action_3.3.15.inf");
			truclient_step("3.3.16", "Move mouse over Introduction The jQuery...", "snapshot=Action_3.3.16.inf");
			truclient_step("3.3.17", "Move mouse over Search Engine Friendly... listitem", "snapshot=Action_3.3.17.inf");
			truclient_step("3.3.18", "Move mouse over Features heading", "snapshot=Action_3.3.18.inf");
			truclient_step("3.3.19", "Move mouse over Introduction The jQuery...", "snapshot=Action_3.3.19.inf");
			truclient_step("3.3.20", "Move mouse over jqxColorPicker link", "snapshot=Action_3.3.20.inf");
			truclient_step("3.3.21", "Move mouse over Introduction The jQuery...", "snapshot=Action_3.3.21.inf");
			truclient_step("3.3.22", "Move mouse over Deleted Items menuitem", "snapshot=Action_3.3.22.inf");
			truclient_step("3.3.23", "Move mouse over Inbox menuitem", "snapshot=Action_3.3.23.inf");
			truclient_step("3.3.24", "Move mouse over Calendar menuitem", "snapshot=Action_3.3.24.inf");
			truclient_step("3.3.25", "Move mouse over Mail menuitem", "snapshot=Action_3.3.25.inf");
			truclient_step("3.3.26", "Move mouse over Introduction The jQuery...", "snapshot=Action_3.3.26.inf");
			truclient_step("3.3.27", "Move mouse over Mail menuitem", "snapshot=Action_3.3.27.inf");
			truclient_step("3.3.28", "Move mouse over Contacts", "snapshot=Action_3.3.28.inf");
			truclient_step("3.3.29", "Move mouse over Inbox menuitem", "snapshot=Action_3.3.29.inf");
			truclient_step("3.3.30", "Move mouse over Personal menuitem", "snapshot=Action_3.3.30.inf");
			truclient_step("3.3.31", "Move mouse over jQWidgets menuitem", "snapshot=Action_3.3.31.inf");
			truclient_step("3.3.32", "Move mouse over jQWidgets", "snapshot=Action_3.3.32.inf");
			truclient_step("3.3.33", "Move mouse over jQWidgets menuitem", "snapshot=Action_3.3.33.inf");
		}
		truclient_step("3.4", "Click on Admin", "snapshot=Action_3.4.inf");
	}
	truclient_step("4", "If ( false )", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Navigate to 'http://demos.telerik.co...menu/index.html'", "snapshot=Action_4.1.inf");
		/* TODO: During mouse over Products, list does not persist on screen. */
		truclient_step("4.3", "Mouse Over", "snapshot=Action_4.3.inf");
		{
			truclient_step("4.3.1", "Move mouse over UI Widgets AutoComplete...", "snapshot=Action_4.3.1.inf");
			truclient_step("4.3.2", "Move mouse over UI Widgets heading", "snapshot=Action_4.3.2.inf");
			truclient_step("4.3.3", "Move mouse over UI Widgets AutoComplete...", "snapshot=Action_4.3.3.inf");
			truclient_step("4.3.4", "Move mouse over Products Stores Blog...", "snapshot=Action_4.3.4.inf");
			truclient_step("4.3.5", "Move mouse over Menu listbox", "snapshot=Action_4.3.5.inf");
			truclient_step("4.3.6", "Move mouse over Menu / Basic usage Products...", "snapshot=Action_4.3.6.inf");
			truclient_step("4.3.7", "Move mouse over Products Stores Blog...", "snapshot=Action_4.3.7.inf");
			truclient_step("4.3.8", "Move mouse over UI Widgets AutoComplete...", "snapshot=Action_4.3.8.inf");
			truclient_step("4.3.9", "Move mouse over Choose theme:Silver Documentation...", "snapshot=Action_4.3.9.inf");
			truclient_step("4.3.10", "Move mouse over Products Stores Blog...", "snapshot=Action_4.3.10.inf");
			truclient_step("4.3.11", "Move mouse over Products", "snapshot=Action_4.3.11.inf");
			truclient_step("4.3.12", "Move mouse over Menu / Basic usage", "snapshot=Action_4.3.12.inf");
			truclient_step("4.3.13", "Move mouse over Products", "snapshot=Action_4.3.13.inf");
			truclient_step("4.3.14", "Move mouse over Products Stores Blog...", "snapshot=Action_4.3.14.inf");
			truclient_step("4.3.15", "Move mouse over Menu / Basic usage", "snapshot=Action_4.3.15.inf");
			truclient_step("4.3.16", "Move mouse over Products", "snapshot=Action_4.3.16.inf");
			truclient_step("4.3.17", "Move mouse over Menu listbox", "snapshot=Action_4.3.17.inf");
			truclient_step("4.3.18", "Move mouse over Products Stores Blog...", "snapshot=Action_4.3.18.inf");
			truclient_step("4.3.19", "Move mouse over Products", "snapshot=Action_4.3.19.inf");
			truclient_step("4.3.20", "Move mouse over Menu / Basic usage", "snapshot=Action_4.3.20.inf");
			truclient_step("4.3.21", "Move mouse over Stores", "snapshot=Action_4.3.21.inf");
			truclient_step("4.3.22", "Move mouse over Products Stores Blog...", "snapshot=Action_4.3.22.inf");
		}
	}
	truclient_step("5", "If ( false )", "snapshot=Action_5.inf");
	{
		truclient_step("5.1", "Navigate to 'http://zinoui.com/demos/menu'", "snapshot=Action_5.1.inf");
		truclient_step("5.2", "Mouse Over", "snapshot=Action_5.2.inf");
		{
			truclient_step("5.2.1", "Move mouse over Southwest Division", "snapshot=Action_5.2.1.inf");
			truclient_step("5.2.2", "Move mouse over Pasific Division", "snapshot=Action_5.2.2.inf");
			truclient_step("5.2.3", "Move mouse over Northwest Division", "snapshot=Action_5.2.3.inf");
			truclient_step("5.2.4", "Move mouse over Atlantic division", "snapshot=Action_5.2.4.inf");
		}
		truclient_step("5.3", "Click on New York Knicks", "snapshot=Action_5.3.inf");
	}
	truclient_step("6", "If ( false )", "snapshot=Action_6.inf");
	{
		/* TODO: ERROR: Recognition needed after replay of File > Open. */
		truclient_step("6.2", "Navigate to 'http://dhtmlx.com/docs/...enu/index.shtml'", "snapshot=Action_6.2.inf");
		truclient_step("6.3", "Click on File", "snapshot=Action_6.3.inf");
		truclient_step("6.4", "Mouse Over", "snapshot=Action_6.4.inf");
		{
			truclient_step("6.4.1", "Move mouse over File", "snapshot=Action_6.4.1.inf");
			truclient_step("6.4.2", "Move mouse over Sub Icon image", "snapshot=Action_6.4.2.inf");
			truclient_step("6.4.3", "Move mouse over Open", "snapshot=Action_6.4.3.inf");
		}
		truclient_step("6.5", "Click on New", "snapshot=Action_6.5.inf");
		truclient_step("6.6", "Click on Like other DHTMLX components,...", "snapshot=Action_6.6.inf");
	}
	truclient_step("7", "If ( true )", "snapshot=Action_7.inf");
	{
		truclient_step("7.1", "Navigate to 'http://www.primefaces.o...imeui/menu.html'", "snapshot=Action_7.1.inf");
		truclient_step("7.2", "Move mouse over New", "snapshot=Action_7.2.inf");
		truclient_step("7.3", "Click on New", "snapshot=Action_7.3.inf");
		/* Verification: New appears highlighted. */
	}
}
