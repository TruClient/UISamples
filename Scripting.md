This page describes **how** the scripts were created and how you can contribute to this effort.

First, please take the time to download the scripts.
The TruClient Tutorial guides you step-by-step to really learn TruClient.

Each script should contain several **steps**:

  * **Use case** (business process) steps are what real users would perform. 
  
  * You may need to help TruClient **recognize objects** during playback.
  
  * Start and End **Transactions**
  
  * **Verification** so that during automated runs what is returned is what is expected.

  * Run Logic to run a certain step or not under certain circumstances.

## <a name="ScriptingProcess"></a> Scripting Process

PROTIP: Here is the scripting process with some suggestions:

1. Collect **data values** needed.
   This includes the website URL, userid and password, etc.
   Collect both known valid and known invalid data.

2. Know what **permissions** are associated with each userid and password you use.
   When you only use Administrator credentials, you may issues that ordinary users gain.

3. Use a naming convention when creating script files.

4. Outline the user actions real users would do (the **use case** steps). 
   Store that in a file.
   You will likely repeat those steps recording several times.

5. For each use case step, write down the text that **uniquely verifies** whether the expected page returned.
   
6. Record a small number of steps, add verification. 
   Avoid creating a long sequence before conducting trial runs. 

7. During recording, move the mouse purposefully, as people normally would.
   But avoid random movements because you're bored
   because they may cause TruClient to fire off requests without you being able to see them do so.

8. Play the script frequently to catch errors before it's more difficult to remember what was changed.
   Replays identify where default **object identification** 
   fails to gets the attention of the app under test.

9. Practice the art of identifying objects in HTML, CSS, and JavaScript.
   Know how to target id's and names specified in HTML for reference by CSS and JavaScript.
   (Id's start with a # pound sign.) evalXPath()
   
10. If an action responds with an **error**, record the error but 
  temporarily wrap the steps within an **if (false)** action
   so it doesn't execute.

11. Add a watch for error messages that fail a script run if found.

12. Add data parameters in CSV files or (better yet) in a VTS (Virtual Table Server).

13. Exit VuGen and **zip up** the script each time you reach an achievement.

14. Review the script with a colleague.

The TruClient Hands-On Tutorial takes you through the above step-by-step.
