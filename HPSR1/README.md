**HPSR1** = HP StormRunner sample pages for custom object identification 

 * <a href="#HP_Dynamic_Value"> Dynamic Value</a>
 * <a href="#HP_List"> HP List</a>
 * <a href="#HP_Dynamic_Table"> Dynamic Table</a>
 * <a href="#HP_Clickable_Table"> Clickable Table</a>

As with other scripts, the naming convention for TruClient scripts is

  * TCFF1202 means TruCleint Firefox LoadRunner 12.02
  * TCIE1202 means TruCleint Internet Explorer LoadRunner 12.02

#### <a name="HP_Dynamic_Value"></a> Dynamic Value

TruClient script <a href="HPSR1_DynamicValue_TCFF1202_v01">HPSR1_DynamicValue_TCFF1202_v01</a>
processes http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/dynamic_value.html
which when the generate button is pressed generates a random number.

The challenge is to get the script to obtain the value from the DOM and display it.


#### <a name="HP_List"></a> List Loop

TruClient Script 
[HPSR1_list_loop_TCIE1202_v01](HPSR1_list_loop_TCIE1202_v01)
processes http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/links.html
which has a list of 9 items. The HTML to the first link:

```
<div class="container"  style="padding-left:20% !important">
  <div class="item-list">
    <a href="empty.html"><div class="item"><ul class="list-item"><li>Link 1 - this is an example</li></ul></div></a>
```

Techniques to script this begin from page 726 of the LoadRunner 12.02 User Guide.
It recommends a for loop to iterate over links in the web page.

  ```
  For ( var i = 1 ; i < 9 ; i++ )
  ```

This loop can be constructed by drag-and-drop within TruClient.

Other steps are placed within this loop.

Scripts constructed using the steps above are made available as different 
in my script **HPSR1_list_loop_TCFF1202_v01** (SR for StormRunner).
as rar files (openable by WinZip) from these links in the User Guide, or 

  * **1-EvalXPathMatchParam** http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links1.rar

    ```
    evalXPath("//li[text()=\"" + ArgsContext.TC.getParam("LinkText") + "\"]");
    ```

  * **2-EvalXPathArgsContext** 
  http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links2.rar
  
    ```
    evalXPath("//li[text()=\"Link " + ArgsContext.i + " - this is an example\"]");
  ```
  * **3-EvalXPath_DOM_ArgsContext** 
  http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links3.rar

    ```
    evalXPath("/html/body/ul/li[" + ArgsContext.i + "]/a");
    ```

  * **4-Descriptors_Editor** is used in sample script 
  http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links4.rar

    ```
    ArgsContext.i
    ```


#### <a name="HP_Dynamic_Table"></a> Dynamic Table

TruClient script [HPSR1_DynamicTable_TCIE1202_v01](HPSR1_DynamicTable_TCIE1202_v01)
processes http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/table1.html
which generates dynamic table when pressing the 'Refresh' button. 


#### <a name="HP_Clickable_Table"></a> Clickable Table
TruClient script [HPSR1_ClickableTable_TCFF1202_v01](HPSR1_ClickableTable_TCFF1202_v01)
processes web page http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/table2.html

This clickable Table page generates a dynamic table when the 'Refresh' button is pressed. 
