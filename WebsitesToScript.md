This page describes the websites that we think would be interesting to script.

Apps being tested by scripts are of three types:

A). **[Challenge pages](#ChallengeApps)** are presented as having known difficulties to tools for automation.
We script them to experience insight into how to script on real sites,
so that we can script real sites faster and better, while we are not in emergency mode.

B). **[Demo pages](#DemoPages)** containing a generic implementation of frameworks used to develop real apps.
We script them to provide a "heads up" on difficulties that might be encountered 
in real apps built with each framework listed here.

C). **[Real Famous websites](#RealFamousSites)**
with unique features that we should be able to control in TruClient scripts.
So let's try it.

Scripts (and explanation of scripts) for each challenge or demo is in a separate folder in this repo.
Folder names are in brackets mentioned below.

**CAUTION: Scripts pointing to websites here should not run with more than a single user at a time.**

<hr />

# <a name="ChallengeApps"></a> Challenge apps

* <a href="#HHPStormObjID"> **HPS1** = HP StormRunner Sample Pages for Custom Object Identification</a>
* <a href="#CorrelationChallenge"> **MLT1** = MyLoadTest Challenge</a>
* <a href="#TheInternet"> **TIH1** = The Internet on Herokuapp Challenge</a>

### <a name="HPStormObjID"></a> HPS1 = HP StormRunner Sample Pages for Custom Object Identification 

   * http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/links.html
     has a list of 9 items.
     Use [Michal - fill script name] with this page to learn how to iterate through links list. 

      ```
      <div class="container"  style="padding-left:20% !important">
      <div class="item-list">
      <a href="empty.html"><div class="item"><ul class="list-item"><li>Link 1 - this is an example</li></ul></div></a>
      ```

   * http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/table1.html
      generates dynamic table when pressing the 'Refresh' button. 
      Use [Michal - fill script name] with this page to learn how to toggle the selected cell state. 

   * http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/table2.html
     Clickable Tables page generates dynamic table when the 'Refresh' button is pressed. 
   Use [Michal - fill script name] with this page to learn how to close an open state cell. 

   * http://stormhelp.saas.hp.com/TruClient/TruClientExamples/html/dynamic_value.html
     generates a random number when the generate button is pressed. 

Techniques to script these pages begin from page 726 of the LoadRunner 12.02 User Guide,
where sample scripts are available (as rar files openable by WinZip).
It recommends a for loop to iterate over links in a web page with ID method set to JavaScript.

  * http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links1.rar

    ```
    evalXPath("//li[text()=\"" + ArgsContext.TC.getParam ("LinkText") + "\"]");
    ```

  * http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links2.rar
  
    ```
    evalXPath("//li[text()=\"Link " + ArgsContext.i + " - this is an example\"]");
  ```
  * http://stormhelp.saas.hp.com/TruClient/TruClientExamples/Scripts/Links3.rar

    ```
    evalXPath("/html/body/ul/li[" + ArgsContext.i + "]/a");
    ```

### <a name="CorrelationChallenge"></a> MLT1 = MyLoadTest Challenge
http://www.myloadtest.com/loadrunner-correlation-exercise/
was developed by LoadRunner master Stuart Moncrieff (of Melbourne, Australia)
for use with LoadRunner C-language scripting.
This was before TruClient became available.

#### <a name="CorrelationChallenge"></a> MyLoadTest Correlation Challenge
Here are the manual steps the script should emulate:

1. Filter out all requests to www.google-analytics.com to avoid corrupting the site's Google Analytics metics
   by coding in C-programming scripts:

      ```
      web_add_auto_filter("Action=Exclude", "Host=www.google-analytics.com", LAST);
      ```
  In TruClient use:
  
  ```
  Utils.addAutoFilter("https://www.google-analytics.com/*", false);
  ```
2. Begin recording at URL http://www.myloadtest.com/training/correlation-challenge/

3. At the "Step 1" screen: Click Next. Capture the number that appears on the next page.

4. Input the number in the text field and click Next.

5. At the "Step 2" screen: Leave the drop-down list set to its default value, and press Next.
   Capture the table returned.

6. At the "Step 3" screen: For each row containing "In Stock" under the Availability column heading, 
   check the corresponding column's Select checkbox. Press next.
   This is perhaps the most difficult part of the charllenge becuase it involves correspondance between rows.
   Capture some "complicated things" in the HTML returned for the next screen.

7. At the "Step 4" screen: Manually determine what is unsaid. Click Next. 

8. The text says the challenge is complete.
   However. Change the User-Agent string in your script to "VuGen" to show you aren't using a standard browser. 
   
9. Rerun page to show different information with the modified User-Agent.

<!--
#### <a name="CreditCardChallenge"></a> MyLoadTest Credit Card Challenge
http://www.myloadtest.com/credit-card-challenge/
has an error.
-->

#### <a name="BasicAJAXChallenge"></a> MyLoadTest basic AJAX application
http://www.myloadtest.com/scripting-exercise-a-basic-ajax-application/
from 2006 uses Google Suggest at
https://www.google.com/webhp?complete=1&hl=en&gws_rd=ssl.

Whatever one types in the text field in the middle, Google now puts users at the address bar.

Can TruClient handle this?

See [MLT1_Search_Google_TCFF1202_v01](MLT1_Search_Google_TCFF1202_v01)



#### <a name="UniqueUsernamese"></a> MyLoadTest Unique Usernames Challenge
http://www.myloadtest.com/scripting-exercise-unique-usernames/


<HR />

### <a name="TheInternet"></a> TIH1 = The Internet on Herokuapp Challenge
http://the-internet.herokuapp.com/
is a website constructed by a Selenium functional test automation guru Dave Haeffner
(http://davehaeffner.com).

David uses the 35 items on the website to provide the basis for describing Selenium coding tips such as 
http://elementalselenium.com/tips/45-checkboxes.

Source code used to build the website is at 
https://github.com/tourdedave/the-interne 
which contains instructions for creating a local server 



<hr />
# <a name="DemoPages"></a> Demo JavaScript Pages/apps

The TruClient scripting technology associated with HP LoadRunner addresses apps which are driven by **JavaScript**.
(The "Mobile Application - HTTP" LoadRunner script protocol create scripts from PCAP files created by WireShark)

There are several types of demo framework samples, listed by highst current hotness:

* <a href="#HybridMobileFrameworkDemos"> Hybrid mobile app development framework demos</a>
* <a href="#ResponsiveFrameworkDemos"> "Responsive" web development framework demos</a>
* <a href="#DesktopJSFrameworkDemos"> Desktop web development framework demos</a>
* <a href="#ASP.NETFrameworkDemos"> Desktop ASP.NET web development framework demos</a>

## <a name="HybridMobileFrameworkDemos"></a> Hybrid app development framework demos

* <a href="#Cordova"> Cordova/PhoneGap</a>
* <a href="#jQueryMobile"> jQueryMobile</a>
* <a href="#SenchaSpace"> SenchaSpace</a>
* <a href="#Trigger.io"> Trigger.io</a>
* <a href="#Worklight"> Worklight</a>
* <a href="#Lightstreamer"> Lightstreamer</a>
 
These frameworks create apps that don't require users to update their app.
Since JavaScript is dynamically sent from the server, apps can be updated dynamically
without re-submitting to the app store (which can take days or even not at all).

More importantly, the faster speed of development and testing shifts time to improving the UX
and better marketing.


NOTE: <a href="#Appcelerator"> Appcelerator</a> is not scripted in TruClient because the resulting app
is compiled into native code, and thus rather than JavaScript being exchanged with the server.


### <a name="Cordova"></a> Cordova/PhoneGap Demo (PGD1)

https://play.google.com/store/apps/details?id=com.dreamappworld.android.phonegapdemo.free&hl=en
Phone Gap Demo (PGD1) Android app.

http://phonegap.com 

User Interface Samples

PhoneGap (Apache Cordova) is a free and open source framework that allows you to create mobile apps using standardized web APIs.

### <a name="jQueryMobile"></a> jQueryMobile

A generic implementation of each framework feature is listed at  
http://api.jquerymobile.com/category/all/

http://demos.jquerymobile.com/1.4.5/
was the latest version listed at
http://jquerymobile.com/demos/

### <a name="SenchaSpace"></a> SenchaSpace

http://www.sencha.com/products/space/
Sencha Space does not seem to have a demo like the Kitchen Sink
for their other product.

Sencha Space is a a managed enterprise environment for securely distributing HTML5 and hybrid business apps 
in a way that offers business control of data without commandeering an employee’s phone.


### <a name="Trigger.io"></a> Trigger.io

https://trigger.io/examples/
lists mobile demo apps buildt using the 
https://trigger.io/
web-based mobile development platform and **Forge.io** replacement for PhoneGap/Coordova
that doesn't require locally installed IDE such as XCode, Eclipse.
Its UI components and cloud based build environment are a minimum of $39 per month after a 14 day trial.

<a target="_blank" href="http://trigger.io/cross-platform-application-development-blog/2012/02/24/why-trigger-io-doesnt-use-phonegap-5x-faster-native-bridge/">
The basis for the company's claims about faster performance than PhoneGap are from 2012:
<img src="http://trigger.io/cross-platform-application-development-blog/wp-content/uploads/2012/02/chart_1-21.png">
</a> using code at https://github.com/trigger-corp/Forge-vs-Cordova-Performance.

On iOS, JavaScript serializes API calls and store them temporarily in the DOM. 
It then makes a request to a fake URI (forge://…) which the native component intercepts
and acts on what is stored in the DOM.

JavaScript is called to execute directly in the context of the UIWebView by iOS component:

```
UIWebView.stringByEvaluatingJavaScriptFromString
```

### <a name="Worklight"></a> Worklight from IBM
http://www-01.ibm.com/software/in/worklight/
IBM Worklight is part of IBM calls its MobileFirst platform that 
extends PhoneGap (Apache Cordova) with additional development tools and server support for backend integration, authentication, push notifications, and life cycle management. 

[This article in Stackoverflow](http://stackoverflow.com/questions/12403319/why-use-ibm-worklight-if-it-ultimately-uses-phonegap?utm_source=appsebook&utm_medium=ebook&utm_campaign=MoovwebKinveyEbook)
notes that Worklight access more native controls than PhoneGap 
(Options Menu, busy indicator, tabbars, etc).


### <a name="Lightstreamer"></a> Lightstreamer

http://www.Lightstreamer.com/demos
demos a server that manages asynchronous WebRTC traffic, which is fast.


### <a name="NotIncluded"></a> Not Included
Appcelerator (ACL1)
uses its Aptana IDE to develop JavaScript, which is compiled into native code.
So communication with servers is not in JavaScript and thus not within the scope of TruClient.

<hr />

## <a name="ResponsiveFrameworkDemos"></a> "Responsive" web development framework demos

* <a href="#Bootstrap"> Bootstrap</a>


### <a name="Bootstrap"></a> Bootstrap Responsive web developmenet framework

http://getbootstrap.com/examples/theme/
provides a demo page showing how the whole range of UI elements look when built using 
Bootstrap.JS downloaded from 
or (more commonly) referenced from a CDN in HTML.
However the page doesn't have code to respond to user actions mimic'd by TruClient automation scripts.

http://expo.getbootstrap.com/
and http://builtwithbootstrap.com/
provide a showcase of real sites built using the library. 

The library began within Twitter, and enabled made it humanly possible to create responsive websites
by changing a few HTML properties. This simplicity is made possible by limiting how much space each column
takes by allocating 12 slots among all boxes. 

Bootstrap depends on jQuery and Grunt utilities.

<!-- http://www.williamghelfi.com/blog/2013/09/12/my-first-bootstrap-theme-with-themestrap/
-->

<hr />

## <a name="DesktopJSFrameworkDemos"></a> Desktop web development framework demos

The controls for each of these take up one column in the table.

A).	http://jqueryui.com/demos

B).	http://www.jqwidgets.com/jquery-widgets-demo (built on top of jquery)

C).	Bootstrap

D).	http://demos.telerik.com/kendo-ui/web/overview/index.html

E).	http://zinoui.com/demos 

F).	http://dhtmlx.com/docs/products/index.shtml (complete interfaces like spreadsheet, scheduler, Gantt chart, Geo Explorer, etc.)

G).	http://www.primefaces.org/primeui/demo.html 

H).	http://madrobby.github.io/scriptaculous/demos 

I).	http://www.prototype-ui.com (built on scriptaculous)

J).	http://livepipe.net (built on prototype)

K).	http://www.sencha.com/products/extjs/examples 

L).	http://www.greensock.com/gsap-js focuses on animation

M).	http://wijmo.com/demo/explore/  (many charts)

<hr />

## <a name="ASP.NETFrameworkDemos"></a> Desktop ASP.NET web development framework demos

*	http://demos.telerik.com/aspnet-ajax (kendo UI)
*	https://demos.devexpress.com/ASP/ 
*	http://aspnetajax.componentart.com 
*	http://demo.componentone.com/ASPNET/ControlExplorer/ 
*	http://demo.aspnetawesome.com 
*	https://codeontime.com/demo

<hr />

# <a name="RealFamousSites"></a> Real Famous websites

Several blogs identify notable examples of mobile web experiences:

* http://blog.hubspot.com/marketing/mobile-website-design-examples
* SitePoint.com
* hothomepages.com

Let's see how well famous sites can be scripted using TruClient.

* http://wikiwand.com presents wikipedia articles in larger fonts and bolder layouts.

