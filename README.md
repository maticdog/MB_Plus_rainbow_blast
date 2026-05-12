Unofficial project. Not affiliated with, endorsed, or sponsored by The Walt Disney Company. MagicBand and MagicBand+ are trademarks of Disney Enterprises, Inc. Names are used only to describe compatibility.

Welcome! This Github repository hosts the open source files for the MagicBand+ Light commands that I have compiled into an Arduino IDE sketch, so you can have your own light show at home... or take to the parks and make all the bands around you part of the show.

<h2>Part 1: What is this app anyway?</h2>

At Disney World and Disneyland, they use something called bluetooth beacons. That basically is when it is advertising a BLE command that the MagicBands pick up. In that command, the MagicBand is told what to display with it's lights. In this case we're making it display a rainbow. 

<h2>Part 2: What do I need to get started?</h2>

A ESP32 microcontroller (I used these: https://www.amazon.com/dp/B08D5ZD528)

A computer

The Arduino IDE app (https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)

<h2>Part 3: How do I install it?</h2>

Open the .ino file using Arduino IDE app on your computer 

OR You could also copy the code here and paste it into a new sketch in Arduino IDE.

Plug in your ESP32 device. 

Compile and upload to the device. 


<h2>FAQ</h2>
<h3>Why don't the lights come on???</h3>

This can be due to multiple things - one specifically being the MagicBand off or it's battery is dead. You will need to turn it on/charge it for this to work.

<h3>But it still doesn't work!</h3>

Sometimes it takes a while to turn on. 
The best thing that I have noticed is to double tap the MagicBand. Or push the button on the bottom of the band. That has been the "solution"

<h3>Can I modify it & add my own hex codes that I found?</h3>

Hell yeah! This project is open source and avalible to everyone, so feel free to do whatever. Hell, I copied most of this intro from https://github.com/haw8411/magic-band-plus-lights.

<h3>Where did you find all of the BLE codes?</h3>

There is a post on a website called emcot.world that has shows you how to assemble the color codes that can be used. https://emcot.world/Disney_MagicBand%2B_Bluetooth_Codes

Haw8411 has a more robust version of this app for Android phones and Flipper Zeros. If you want to change the color from a rainbow to something else. Check it out. https://github.com/haw8411/magic-band-plus-lights
