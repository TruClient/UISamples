This mark-up file describes the TruClient script offered as a solution to 
Stuart's Correlation Challenge at his MyLoadTest.com.

This file is intended to be inside the script file (in the same folder as the .usr file).

## Examine the HTML While Performing Steps Manually 

1. Open a browser.
2. Manually perform the steps described in
https://github.com/TruClient/UISamples/blob/master/MLT1/README.md

At each step, right-click on the text in question to select **Inspect Element**.

Identify in the HTML the applicable CSS identifier or the Regular Expression needed to capture text.

For example:

### Step 1

### Step 2



## <a name="Recording"> Record Script</a>

To create the script from scratch:

1. Open VuGen

...

5. Manually perform the steps described in
https://github.com/TruClient/UISamples/blob/master/MLT1/README.md

Along the way, specify start and end transactions so individual scirpt lines can be easily identified later.

6. Save the script. 
7. Create a zip file so you can go back to its nacent form.

## Add Transactions
This is done first so you can easily associate script lines with what transaction name was planned for it.

Since each transaction name is planned with a picture of the step, you can better understand what to code.

Save the script again to establsh a fall-back point.

## Add Verification
Unlike C-langauge LoadRunner scripts which may contain function web_reg_save_param() 
which register listeners to recognize strings as they flow into the program,
TruClient scripts examine HTML and CSS identifiers after receipt.

## Edit Step 1

1. Click the Toolbar and select **Evaluate JavaScript**.
2. Click on 
3. Click on ... to edit
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

The two `\s+` `\s+` are ???

The `([0-9]+)` specifies ???

5. Type in this line to assign the 2nd value of the arrary to a LoadRunner parameter named "Step1Value" to hold ???

```
TC.setParam("Step1Value",array[1]);
```


## Step 2



## Step 3


