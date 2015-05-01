This repo holds TruClient scripts created as examples of how to create scripts on real apps.

What we would like to see in the script, and how to create a script is described in [Scripting.md](Scripting.md).

As with all LoadRunner scripts, each script exists as files within a **folder**.
The first element of script folder name specifies the website.
Inside that folder is a **.usr** file that one clicks to invoke VuGen to edit that file.
The various websites are listed in [WebsitesToScript.md](WebsitesToScript.md). 

The second element of each script folder name is the feature being tested.
For example, **Tooltip** is being tested by script **UI01_Tooltip_TCFF120_v01**.
The various UI features/capabilities are defined in [UI Features.md](UI Features.md).
