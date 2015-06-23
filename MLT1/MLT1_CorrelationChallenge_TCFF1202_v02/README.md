This mark-down (.md) text file describes the TruClient script offered as a solution to 
Stuart's Correlation Challenge at his MyLoadTest.com.

This file is intended to be inside the script file (in the same folder as the .usr file).

## Examine the HTML While Performing Steps Manually 

1. Open a browser of the brand indicated in the script name ("FF" for Firefox, "IE" for Internet Explorer).
2. Manually perform the steps described in
https://github.com/TruClient/UISamples/blob/master/MLT1/README.md

At each step, right-click on the text in question to select **Inspect Element**.

Identify in the HTML the applicable CSS identifier or the Regular Expression needed to capture text.

For example:

```
   Here is a simple one to get you started. Enter the following number in the field below and press Next:
   <strong> 7191 </strong>
```

### Step 1

## <a name="Recording"> Record Script</a>

To create the script from scratch:

1. Open VuGen
2. Click File > New
3. Specify a file name following your organization's naming conventions.
4. Specify a folder following your organization's conventions.
5. Manually perform the steps described in
https://github.com/TruClient/UISamples/blob/master/MLT1/README.md

Along the way, specify start and end transactions so individual scirpt lines can be easily identified later.

6. Save the script. 
7. Create a zip file so you can go back to its nacent form.

### Step 2

## <a name="Commenting"> Comment</a>

## **Add Comment, Run Types and Filters**

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

8.**Press Ctrl+Alt+S** or press the** Save** (diskette) icon to store the script to disk.

## Add Transactions
This is done first so you can easily associate script lines with what transaction name was planned for it.

Since each transaction name is planned with a picture of the step, you can better understand what to code.

Save the script again to establsh a fall-back point.

## Add Verification
Unlike C-langauge LoadRunner scripts which may contain function web_reg_save_param() 
which register listeners to recognize strings as they flow into the program,
TruClient scripts examine HTML and CSS identifiers after receipt.

## Edit Step 1

1. Click the Toolbar and under Miscellaneous, select **Evaluate JavaScript**.
2. Click on [Code] to edit
4. Type in this line to instantiate a variable named **content** to hold the innerHTML obtained from the screen.

 ```
 var content = document.getElementById('content-inner').innerHTML;
 ```

 Even though the **content-inner** Id is many lines above the target number we want captured,
 we reference it because it is the lowest level identifier to the target text.

5. Type in this code to define a regular expression to capture the string into a variable named **array**.
 
 Your organization may prefer that you use another name to adopt a corporate convention.

 ```
 var array = content.match(/<strong>\s+([0-9]+)\s+<\/strong>/);
 ```

 The .match method operates on the content class defined earlier.

 The pattern is defined between two / (forward slashes).

 The text we want to capture is between `<strong>` and `</strong>` HTML tags.
 But in this particular case, there is not. 
 But there is the possibility that the HTML would contain more than one set of `<strong` tags.
 Sppecify an increment number if that is the case.

 The two `\s+` `\s+`
 The parentheses in (\S+), called parenthesized back-reference, is used to extract the matched sub-string from the input    string. In this regex, there are two (\S+), match the first two words, separated by one or more whitespaces \s+.

 The parentheses in `([0-9]+)` specifies a grouping. 

 The `[0-9]` specifies any number (in the range of 0 through 9).

 The `+` in `([0-9]+)` specifies any number of repeats. 


6.Type in this line to assign the 2nd value of the arrary to a LoadRunner parameter named "Step1Value" to hold ???
  
 where step 1 value is 4360 which dynamacally changes.
   
 TC.setParam("Step1Value",array[1]);
 ```


## Step 2



## Step 3


