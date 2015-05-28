**HPSR1** = HP StormRunner sample pages for custom object identification 

 * <a href="#HP_Dynamic_Value"> Dynamic Value</a>
 * <a href="#HP_List"> Static List</a>
 * <a href="#HP_Dynamic_Table"> Dynamic Table</a>
 * <a href="#HP_Clickable_Table"> Clickable Table</a>

The HTML, images, CSS, and JavaScript files are provided in folder so 
you can execute this app when without public internet access.

As with other scripts, the naming convention for TruClient scripts is

  * TCFF1202 means TruCleint Firefox LoadRunner 12.02
  * TCIE1202 means TruCleint Internet Explorer LoadRunner 12.02

#### <a name="HP_Dynamic_Value"></a> Dynamic Value

TruClient script <a href="HPSR1_DynamicValue_TCFF1202_v01">HPSR1_DynamicValue_TCFF1202_v01</a>
processes http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/dynamic_value.html

![hpsr1_dynamic_value_v1](https://cloud.githubusercontent.com/assets/300046/7865448/1912acf2-0526-11e5-8557-9bb3e7e3be4f.png)

When the "Generate" button is pressed generates a random number.

The challenge is to get the script to obtain the value from the DOM and display it.

Right-clicking the response and selecting **Inspect Element** reveals the HTML name which needs to be identified.


#### <a name="HP_List"></a> List Loop

TruClient Script 
[HPSR1_list_loop_TCIE1202_v01](HPSR1_list_loop_TCIE1202_v01)
processes web page http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/links.html

![hpsr1_links_v1](https://cloud.githubusercontent.com/assets/300046/7865417/c62daa14-0525-11e5-97fd-c5ab19bee124.png)

This page has a list of 9 items. The HTML to the first link:

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

  * **1-EvalXPathMatchParam** is used in a sample script  from HP R&D at
 http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links1.rar.

This approach involves the creation of a text file containing expected values
such as "Link 1". This data file is referenced in VuGen as a parameter named
"LinkText". This parameter TruClient scriipt references in this JavaScript:

    ```
    evalXPath("//li[text()=\"" + ArgsContext.TC.getParam("LinkText") + "\"]");
    ```

ArgsContext is like "this." in JavaScript.

Such an approach is most approriate when mataching data in a file dynamically generated
from another system.


  * **2-EvalXPathArgsContext** is used in a sample script  from HP R&D at
  http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links2.rar
  
    ```
    evalXPath("//li[text()=\"Link " + ArgsContext.i + " - this is an example\"]");
  ```
  * **3-EvalXPath_DOM_ArgsContext** is used in a sample script  from HP R&D at
  http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links3.rar

    ```
    evalXPath("/html/body/ul/li[" + ArgsContext.i + "]/a");
    ```

  * **4-Descriptors_Editor** is used in sample script from HP R&D at
  http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links4.rar

    ```
    ArgsContext.i
    ```

This is automatically used as the incrementer.


#### <a name="HP_Dynamic_Table"></a> Dynamic Table

TruClient script [HPSR1_DynamicTable_TCIE1202_v01](HPSR1_DynamicTable_TCIE1202_v01)
(developed by Anil Mainali)
processes web page http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/table1.html
which generates a table. 

![hpsr1_table1_v1](https://cloud.githubusercontent.com/assets/300046/7865181/18cd231e-0524-11e5-9e3c-16b0b52b99f7.png)

Anil Mainali is recording a video of the web page operation, what Inspect Element reveals,
and how to construct the script which does this:

1. Identify which of the check boxes under Heading 0 is checked.
2. Identify how many rows were randomly generated.
2. Uncheck what is checked and check what is generated as unchecked.


#### <a name="HP_Clickable_Table"></a> Clickable Table
TruClient script [HPSR1_ClickableTable_TCFF1202_v01](HPSR1_ClickableTable_TCFF1202_v01)
processes web page http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/table2.html

![hpsr1_table2_v1](https://cloud.githubusercontent.com/assets/300046/7865273/a489d168-0524-11e5-8fe5-93107b0e53b4.png)

When the 'Refresh' button is pressed the table is regenerated with a random number of rows.
Under the Header 1 column is a 3-value toggle: Open > Closed > Error
which can be changed by clicking the **Submit data** for each row.

 * Click on Submit data when the value is Open changes the value to Closed.
 * Click on Submit data when the value is Closed changes the vaue to Error.
 * Click on Submit data when the value is Error does not change the value.
