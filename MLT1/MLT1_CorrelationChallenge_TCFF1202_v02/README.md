This mark-down (.md) text file describes how to **create** 
the TruClient script offered as a solution to 
Stuart's Correlation Challenge at his MyLoadTest.com.

This file is intended to be inside the script file (in the same folder as the .usr file).

## <a name="CreateScript"> Create Script</a>

To create the script from scratch:

1. Open VuGen
2. Click File > New
3. Specify a file name following your organization's naming conventions.
4. Specify a folder following your organization's conventions.
5. Click OK.


At each step, right-click on the text in question to select **Inspect Element**.



## <a name="Recording"> Record Script</a>

1. Click Record.
2. Open a browser of the brand indicated in the script name ("FF" for Firefox, "IE" for Internet Explorer).
3. Manually perform the steps described in
https://github.com/TruClient/UISamples/blob/master/MLT1/README.md

4. Along the way, specify start and end transactions so individual scirpt lines can be easily identified later.

5. Save the script. 
6. Create a zip file so you can go back to its nacent form.


## <a name="AddComment">Edit Script - Add Comment</a>

Add a comment in **init** section to provide background information on the script.

1. High on the TruClient Sidebar, click on the **actions** list and select **Init** (rather than Action)

2. Click on the **vertical Toolbox** tab to expand it.
3. Select **Miscellaneous.**
4. **Drag** Comment to the right over the edge, and drop it on the white Sidebar.
5. **Click** on Insert comment here.
6. Press **Ctrl+A** to highlight all words in the comment. Press the keyboard **delete key** to remove the text.
7. Type a comment providing below information. 

**Title, Description, Protocol, Author, Email  and Date.**

Type dates in  **YYYY.Month.Day format** (such as 2015.06.23) to avoid confusion among international audiences.

Type in your **email address** so people can reach you.

TruClient automatically wraps the text between **/* and */** block comment tags.

8 .Press **Ctrl+Alt+S** or press the **Save** (diskette) icon to store the script to disk.

## <a name="EditScript">Edit Script - Run Types and Filters</a>

**Configure Verbosity for Runs**

Add JavaScript Code to Reveal Init Run Conditions.

Values which do not change on every iteration through Action() section should appear only one time by being processed in the Init section, which is invoked only once at the beginning of the run for each vUser.

Display in the log TruClient JavaScript variables associated with the run environment.

At the TruClient Sidebar:

1. High on the TruClient Sidebar, select **Init** (rather than Action).
2. In the TruClient window, click the **Toolbox** vertical tab to reveal its options.
3. Select **Miscellaneous.**
4. Drag **Evaluate JavaScript** and drop it under the previous step.
5. Click on the  **chevron icon** on the Evaluate JavaScript step to expand it. 
6. Click **[code]** or Arguments heading.
7. Click the Code **text entry area.**
8. Click the **JS icon** to pop-up a text window.
9. **Type** the following coding or **copy and paste** it .

```
// Run conditions:
var jDocMod = document.lastModified;

TC.log( "document.lastModified="+jDocMod );//=06/24/2015 20:51:06

TC.log(">> LR.scriptDir="+ 	  LR.scriptDir);

TC.log(">> LR.outputDir="+ 	  LR.outputDir);

TC.log(">> LR.userId="+ 	  LR.userId );

TC.log(">> LR.scenarioId="+   LR.scenarioId );

TC.log(">> LR.groupName="+ 	  LR.groupName );
```


**Filter Out URL Address**

Calls to Google Aanlytics (and other sites) are played back. Filter out requests to Google Analytics server.

1. Open the editor.
2. Paste the following at the last line.

```
//filter out google analytics
Utils.addAutoFilter("https://www.google-analytics.com/*", false);
```
 3 .Click **OK** to dismiss the editor.



## Add Transactions
This is done first so you can easily associate script lines with what transaction name was planned for it.

Since each transaction name is planned with a picture of the step, you can better understand what to code.

Save the script again to establsh a fall-back point.

**Define Transactions**

1 .Click on the Navigate step.


![navstep](https://cloud.githubusercontent.com/assets/10678180/8362359/fd1f9702-1b3d-11e5-975a-60b167b67084.PNG)

2 .Click the ![starttrans](https://cloud.githubusercontent.com/assets/10678180/8362373/08d7c63c-1b3e-11e5-8826-67608c1695a3.png)   start transaction icon.



3 .Enter the desired transaction name.

![transname](https://cloud.githubusercontent.com/assets/10678180/8362387/19f793e8-1b3e-11e5-8e48-2e3db78bdf68.PNG)

 4 .Click OK to set the transaction.

 5 .Click the ![endtrans](https://cloud.githubusercontent.com/assets/10678180/8362380/1068ef5c-1b3e-11e5-8237-8d9d26149759.png)   stop transaction icon


![startendtrans](https://cloud.githubusercontent.com/assets/10678180/8362389/1f7acf6a-1b3e-11e5-96b9-1646b4fedcdb.PNG)


Use the same technique mentioned above to complete the rest of the transaction name provided below.

```
Step 0 - Begin Correlation Challenge
Step 1 - Enter the random number
Step 2 - Select the default colour
Step 3 - Select the in-stock items
Step 4 - Final step
```

## Add Verification
Unlike C-langauge LoadRunner scripts which may contain function web_reg_save_param() 
which register listeners to recognize strings as they flow into the program,
TruClient scripts examine HTML and CSS identifiers after receipt.

Some applications do not return the correct page and the applications can change. So test scripts ideally would confirm that it got back the page that it expected.

In TruClient Action.

![toolbox](https://cloud.githubusercontent.com/assets/10678180/8372687/5081ce02-1bab-11e5-92d9-3456ea6463ca.PNG)


 1 .Open the **Toolbox** tab at the right edge of the TruClient Sidebar by clicking it.

![funver](https://cloud.githubusercontent.com/assets/10678180/8372722/8bf275fe-1bab-11e5-9f13-3754cfcad8f1.PNG)


 2 .In the **Functions** tab, drag **Verify** immediately under the web request line.


![vistext](https://cloud.githubusercontent.com/assets/10678180/8372244/fd6a7614-1ba6-11e5-8e74-11ad1f83a647.PNG)


 3 .In the Property field type "Visible Text", including quote marks around the property name.


![verify](https://cloud.githubusercontent.com/assets/10678180/8372159/2e643620-1ba6-11e5-83d3-186fa24e28bd.PNG)


 4 .Click on Click to choose an object.


![highlightobject](https://cloud.githubusercontent.com/assets/10678180/8372170/3bc0ff24-1ba6-11e5-95c9-1558312837ac.PNG)


 5 .Position cursor to highlight (in Green) the control containing the text to be validated.


![highlightgreen](https://cloud.githubusercontent.com/assets/10678180/8372172/4098a3e4-1ba6-11e5-93c0-f14c6834b0b8.PNG)


 6 .Click on the control (when it's in green) to generate this code:


![verifiedobject](https://cloud.githubusercontent.com/assets/10678180/8372173/44bbc686-1ba6-11e5-98c7-c9459b48d3ee.PNG)

 7 .Follow the above technique for the remaining steps to confirm that it got back the page that it expected.

```
PROTIP: Before adding verify step use the Toggle Breakpoint debugging technique by Right clicking on the step you want to verify.
```

## Edit Step 1

 1. In the TruClient window, click the Toolbox vertical tab to reveal its   options.
 2. Select Miscellaneous.

  ![mlt1md_image2](https://cloud.githubusercontent.com/assets/10678180/8443075/0cba7a38-1f49-11e5-9684-3795a24afe69.PNG)

 3. Drag **Evaluate JavaScript** and drop it above the step.

 4. Click on [Code] to edit
 5. Type in this line to instantiate a variable named **content** 
 to hold the innerHTML obtained from the screen.

 ```
 var content = document.getElementById('content-inner').innerHTML;
 ```

 Even though the **content-inner** Id is many lines 

 above the target number we want captured,
 we reference it because it is the lowest level identifier to the target text.

 6. Type in this code to define a regular expression to 
capture the string into a variable named **array**.
 
 Your organization may prefer that you use another  name to adopt a corporate convention.

 ```
 var array = content.match(/<strong>\s+([0-9]+)\s+<\/strong>/);
 ```
 The .match method operates on the content class defined earlier.

 The pattern is defined between two / (forward slashes).

 The text we want to capture is between `<strong>` and `</strong>` HTML tags.
 But in this particular case, there is not. 
 But there is the possibility that the HTML would contain more than one set   of `<strong` tags.Specify an increment number if that is the case.

 The two `\s+` `\s+`
 \s+ match any white space character .
 Quantifier: + Between one and unlimited times, as many times as possible.

 The parentheses in `([0-9]+)` specifies a grouping. 

 The `[0-9]` specifies any number (in the range of 0 through 9).

 The `+` in `([0-9]+)` specifies any number of repeats. 
 
 7. Type in this line to assign the 2nd value of the arrary  to a LoadRunner parameter  named "Step1Value" to hold ???

  where step 1 value is 4360 which dynamacally changes.
   
```
 TC.setParam("Step1Value",array[1]);
 ```

Next, follow the following steps inorder to capture the generated **Dynamic Number.**

![01_mlt1md_dynval](https://cloud.githubusercontent.com/assets/10678180/8470232/a699a9e4-204d-11e5-9868-9dfcb1e53f8a.PNG)

 1.Click on **4243/generated number** to open up the dialog.

![02mlt1md_replaced](https://cloud.githubusercontent.com/assets/10678180/8470234/ab7fdba4-204d-11e5-9bca-6dedb411a83d.PNG)

The Arguments dialog opens.

![03mlt1md_plain](https://cloud.githubusercontent.com/assets/10678180/8470236/ae5a52be-204d-11e5-8952-1a53dc65bd8d.PNG)

 2.Click the drop down arrow on the right of value and select **JavaScript.**

![04mlt1md_clickjs](https://cloud.githubusercontent.com/assets/10678180/8470237/b165c4de-204d-11e5-8ea9-bea12c8bdf36.PNG)

 3.Click the **JS** icon to pop-up a text window.

![05mlt1ms_jscode](https://cloud.githubusercontent.com/assets/10678180/8470241/b43a9fcc-204d-11e5-97e8-2b1380d64ea3.PNG)

 4.Replaced the value 4243/generated number with this code.
```
TC.getParam("Step1Value");
```
 5.Click **OK.**


## Edit Step 2

![01mlt1md_instockitems](https://cloud.githubusercontent.com/assets/10678180/8501797/a8c20604-216e-11e5-83eb-7e312d7136f1.PNG)

 1.In the TruClient window, click the Toolbox vertical tab to reveal its options.

 2.Select Miscellaneous.

![02mlt1md_evadragjs](https://cloud.githubusercontent.com/assets/10678180/8501799/b0c2415c-216e-11e5-8420-fd92df6be4af.png)


 3.Drag Evaluate JavaScript and drop it above the step.

![03mlt1md_clickoncode](https://cloud.githubusercontent.com/assets/10678180/8501803/b53441a4-216e-11e5-8845-31460b9f8281.PNG)

 4.Click on [Code] to edit.
 
 5.Type in this line to instantiate a variable named content to hold the innerHTML obtained from the screen.

```
var content = document.getElementById('content-inner').innerHTML;
var re = /<td>In Stock<\/td>\s+<td><input name="bookId\[\]" value="([A-z0-9]+)"\stype="checkbox">/g;
match = re.exec(content);while (match != null) {
  TC.setParam("Step3Value_" + counter.toString(),match[1]);
  match = re.exec(content); counter++;
}
TC.setParam("Step3Value_count",counter);
```

Next,

![04mlt1md_forloop](https://cloud.githubusercontent.com/assets/10678180/8501804/ba8b64ca-216e-11e5-8ba8-4c521d752660.PNG)

 1.In the TruClient window, click the Toolbox vertical tab to reveal its options.

 2.Select Flow Control.

![05mlt1md_forloopposi](https://cloud.githubusercontent.com/assets/10678180/8501805/c2a6a82c-216e-11e5-8bae-aa8070da2694.PNG)

 3.Drag For Loop and drop it below the Evaluate JavaScript step you just worked on.

![06mltmd_clickonvari](https://cloud.githubusercontent.com/assets/10678180/8501809/ce86d220-216e-11e5-92eb-5197969266b0.PNG)

 4.Click on var i=0 to edit

![06amltmd_clickeachjs](https://cloud.githubusercontent.com/assets/10678180/8502564/495471b2-2177-11e5-942a-26517fbd125b.PNG)


 5.Click on each JS and change the code as per the above screenshot which is:

```
Init: var i = 1
Condition: i < eval(TC.getParam("Step3Value_count"))
Increment: i++
```

 Next, 

 1.In the TruClient window, click the Toolbox vertical tab to reveal its options.
 
 2.Select Miscellaneous.
 
 3.Drag Evaluate JavaScript and drop it below the For Loop step.
 
 4.Click on [Code] to edit.
 
 5.Type in this line of code.

```
Step3Value=window.Step3Value=TC.getParam("Step3Value_"+i.toString())
```
![mlt1md_clickonfirstlink](https://cloud.githubusercontent.com/assets/10678180/8502680/53e360f0-2179-11e5-9cc1-b96e96c25486.png)

 6.Click on the first link .

![mlt1md_secpops](https://cloud.githubusercontent.com/assets/10678180/8502717/08af42e2-217a-11e5-915f-5e8e5c0f696a.png)

This section pops up.

![mlt1md_step3val](https://cloud.githubusercontent.com/assets/10678180/8502772/b4197c9c-217a-11e5-96c6-eb77cc41dfb5.png)

 7.Replace the Name field with Step3Value

![mlt1md_changeidmethos](https://cloud.githubusercontent.com/assets/10678180/8502808/28bcfa56-217b-11e5-8e8f-22d1b2311054.png)

 8.Change the ID Method to JavaScript by clicking drop down menu.

![09mlt1md_replacejs](https://cloud.githubusercontent.com/assets/10678180/8501821/e2f9af66-216e-11e5-83eb-0c2dab09e894.PNG)

 9.Replace the JavaScript field with the below code by clicking on JS.

```
var xpath="//input[@type=\"checkbox\" and @value=\""+ArgsContext.Step3Value+"\"]"
evalXPath(xpath);
```

![10mlt1md_delete](https://cloud.githubusercontent.com/assets/10678180/8501823/ead42e6e-216e-11e5-8639-a8f659683496.PNG)

![11mlt1md_delete2](https://cloud.githubusercontent.com/assets/10678180/8501825/eea8a7ea-216e-11e5-8edf-4450104e8676.PNG)

 10.Finally, select in stock steps and delete one by one by performing right click and delete technique.

 11.Save the script and Run.


## Step 3


