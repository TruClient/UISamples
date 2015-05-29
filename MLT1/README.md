This page describes the Correlation Challenge web application at MyLoadTest.com.

http://www.myloadtest.com/loadrunner-correlation-exercise/
was developed by LoadRunner master Stuart Moncrieff (of Melbourne, Australia)
for use with LoadRunner C-language scripting.
This was before TruClient became available.

The video at ____ presents the manual steps the script needs to emulate:

1. Begin recording at URL http://www.myloadtest.com/training/correlation-challenge/

2. Scroll down the page to click the blue **Next** button.

3. At the "Step 1" screen: Type the 4-digit number above the text box into the text box.
A different number is generated every time. So after the recording, 
you would need to capture the number.

4. Highlight that number and right-click and select **Inspect Element** to see its HTML:

````
<p>
Here is a simple one to get you started. Enter the following number in the field below and press Next:
<strong> 7191 </strong>
</p>
<form method=
````

The number has no identifier that JavaScript can reference.

5. Click X at the upper right of the Firebug pane to exit.

6. Click **Next** for the Step 2 screen containing a drop-down list of colors.

7. At the "Step 2" screen: Leave the drop-down list set to its default value, and press Next.
A C-language LoadRunner script would register a capture of the table returned from the server.
But TruClient scripts do not need to do capture HTML that way because 
they use JavaScript to refer to the current value of the HTML contained in the DOM for each vuser.

So just click **Next** for the Step 3 screen containing a table.

8. At the "Step 3" screen: For each row containing "In Stock" under the Availability column heading, 
   check the corresponding column's Select checkbox. 

   This is perhaps the most difficult part of the charllenge to automate becuase 
   there is a correspondance among values in different columns of each separate row.

  The script needs a way to identify how many rows there are,
  whether a row has "In Stock" or "Out of Stock", and the appropriate checkbox to check. 
   
9. Press the blue **Next** button for the "Step 4" screen which does "some complicated things".

10. To determine what that is, one has to trace the execution of JavaScript after entry into the page.

11. Click **Next** for the page which says the challenge is complete.

How does one change the User-Agent string in VuGen scripts?
This is actually a common concern when testing apps running on internet browsers on mobile devices.

  HINT: Look in Runtime Settings, Browser.

How does one filter out all requests to www.google-analytics.com to avoid corrupting the site's Google Analytics metrics?

   The coding in C-programming scripts:

      ```
      web_add_auto_filter("Action=Exclude", "Host=www.google-analytics.com", LAST);
      ```
  In TruClient use:
  
  ```
  Utils.addAutoFilter("https://www.google-analytics.com/*", false);
  ```
