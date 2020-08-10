# arduino_capacitative_water
A simple application using capacitative touch sensors on ESP32 for automatic water level control

A very simple script using the ESP32 module as a water level control.

The way this works is that you need to "calibrate" your two probes that are connected to push pin 0 and push pin 3. (These are the pins on the ESP32 that have push/capacitative funcationality) 

One probe will be your high level switch (when your tank is full) This is the level at which you would want your pump to start.
The 2nd probe will be your low level switch. (When your tank is empty and before your pump could run dry)

In reality you don't want your pump to turn on and off every time your low level switch is triggered. The best would be that only when the water gets to high level switch the pump would start and only when it reaches the low level switch would it turn off. This way the pump starts and stops a lot less frequently. This of course all depends on how you want your level switches to function. In my case i have a bucket filling up slowly at random times and i don't want the bucket to over-flow. So as long as the water doesn't over-flow and the pump doesn't run dry and too frequently i'm happy.

Lots of room for improvement but for now, it works.
