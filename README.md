Donate to this reposotiroy maintainer:
[![Flattr this git repo](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=bkubicek&url=https://github.com/bkubicek/Marlin&title=Marlin&language=en_GB&tags=github&category=software) 
or <a href="https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=kubicek%40gmx%2eat&lc=US&item_name=Open%20Source%20developments&currency_code=EUR&bn=PP%2dDonationsBF%3abtn_donate_LG%2egif%3aNonHosted">Paypal</a> 

Donate to the  <a href="http://sourceforge.net/donate/index.php?group_id=159590">reprap foundation</a> 

This RepRap firmware is a mashup between <a href="https://github.com/kliment/Sprinter">Sprinter</a>, <a href="https://github.com/simen/grbl/tree">grbl</a> and many original parts.

Derived from Sprinter and Grbl by Erik van der Zalm.
Sprinters lead developers are Kliment and caru.
Grbls lead developer is Simen Svale Skogsrud.
It has been adapted to the Ultimaker Printer by:
Bernhard Kubicek, Matthijs Keuper, Bradley Feldman, and others...


Features:
 - Interrupt based movement with real linear acceleration
 - High steprate
 - Look ahead (Keep the speed high when possible. High cornering speed)
 - Interrupt based temperature protection
 - preliminary support for Matthew Roberts advance algorithm 
   For more info see: http://reprap.org/pipermail/reprap-dev/2011-May/003323.html
 - Full endstop support
 - Simple LCD support (16x2)
 - SD Card support
 - Provisions for Bernhard Kubicek's new hardware control console and 20x4 lcd

This firmware is optimized for Ultimaker's gen6 electronics (including the Ultimaker 1.5.x daughterboard and Arduino Mega 2560).

The default baudrate is 115200. 


========================================================================================

Configuring and compilation


Install the latest arduino software IDE/toolset (currently 0022)
   http://www.arduino.cc/en/Main/Software

Install Ultimaker's RepG 25 build
    http://software.ultimaker.com
(or alternatively install Kliment's printrun/pronterface  https://github.com/kliment/Printrun_)

Copy the Ultimaker Marlin firmware
   https:/github.com/bkubicek/Marlin
   (Use the download button)

Start the arduino IDE.
Select Tools -> Board -> Arduino Mega 2560 
Select the correct serial port in Tools ->Serial Port
Open Marlin.pde

Click the Verify/Compile button

Click the Upload button
If all goes well the firmware is uploading

Start Ultimaker's Custom RepG 25
Make sure Show Experimental Profiles is enabled in Preferences
Select Sprinter as the Driver

Press the Connect button.

KNOWN ISSUES: RepG will display:  Unknown: marlin x.y.z

That's ok.  Enjoy Silky Smooth Printing.



