cordova-plugin-mytarget
=================
Base of this plugin is https://github.com/DrMoriarty/cordova-plugin-mytarget v.1.0.0

Differences:

    - autoreftesh is disabled
    - you can refresh banner calling MyTarget.makeBanner function again

MyTarget integration for cordova

Installation

    cordova plugin add https://github.com/mikhail-a-kiselev/cordova-plugin-mytarget 

Usage

    MyTarget.makeBanner(slotId, success, fail); // initialize and show banner/ refresh and show banner after initialization

    MyTarget.removeBanner (success, fail); //hide banner

    MyTarget.makeFullscreen = function(slotId, success, fail) // get fullscreen ads
