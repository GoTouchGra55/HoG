# Week 3
I DID EVERYTHING IN ROUGHLY ONE DAY!

First, I set up the entire project in cubemx. I added comms protocols, breakouts, crystal oscillators, etc. After that, I added the required stuff in KiCAD. Here I added 2 ICM45686 IMUs, 1 BMP581 Barometer, and then breakouts for power output. Then, I wired up the stuff I added here using the existing datasheets. I used the stm32h743vit6 as the mcu as it is very powerful. Although, I reckon I could've used the stm32f405rgt6 as it is cheaper and widely used in a lot of consumer oriented drone flight computers.
https://lapse.hackclub.com/timelapse/S5AEKcWjFcFN

Then, I wired up the 2 power sections consisting of +5V and +3.3V outputs. The +3.3V output is for the internal components like the MCU, IMU, Barometer, etc. while, the +5V output is for the servos and some external components that may required higher voltages. Here, I finished the entire wiring up within 2 hours. It was pretty easy ngl. Then, I did the ERC and fixed any errors. Finally, after that I assigned the footprints and the schematics part was over.
https://lapse.hackclub.com/timelapse/Qf_AoOY-mgPN

Firstly, I looked at the 3d version of the pcb to look for any problematic footprints. I found two here, so I fixed them. After that, I localized everything to separate sections. Then, I wired up the decoupling capacitors and the crystal to the mcu. For me, this is a default habit as they have to be as close as possible without interfering with other routes/components. Then, I set up bounds and tried planning out the board. I then placed the power sections on one side and routed them. I decided to use a 6 layer pcb as it is way easier to route that than a 2 layer one. If I hadn't used a 6 layer pcb, I probably wouldn't be able to submit this project on time.
https://lapse.hackclub.com/timelapse/OmWuiVIgm5il

This is where the flight computer really started coming together. First, I added some extra breakout pins for the servos and power. Then, for the ESC connection pads, I was confused on the footprint that I had to use but later decided to modify an already existing footprint for a solder pad. Then, I basically locked in and routed everything together utilizing 5/6 layers and 1 layer has to be a solid ground. I may change this in the following week to a 4 layer pcb as it is significantly cheaper to fabricate.
https://lapse.hackclub.com/timelapse/38z7tmix-HnZ

This was the day the flight computer got aestheticized. Firstly, I made the power distribution unit. This was a good idea as I do not want the noisy servo ground to come in contact with my telemetry ground. This would just make the board act up in the worst case scenario. Then, I tried adding a hog rider to make it in-theme with the board's name but it turned out horrible so I ditched it. Then I moved on to adding all the required text for the board like pin names and some form of branding. After that, the board is officially complete!
https://lapse.hackclub.com/timelapse/FG-Le-8sbzr-

Note: I may add some changes in the following week.
