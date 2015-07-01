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


## Step 2



## Step 3


