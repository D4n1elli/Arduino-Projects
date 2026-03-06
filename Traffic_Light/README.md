# Traffic light Arduino project

## Description
This project simulates a basic traffic light using an Arduino UNO and three leds (red, yellow and green), the leds turn on and off sequentially to replicate the behaviour of the traffic signal.

## How it works
Starts with the red led lighting up, then turning off so the yellow can light up, and then it turns off so the green led can light up, and repeat this pattern. Each led lights up alone and two leds won't turn on together.

## Components
- Arduino UNO
- three leds (preferably red, yellow and green)
- three resistors
- breadboard
- jumper wires

You can find images and a .mp4 video of the project in this folder.

## Code
This code uses pin 7 for green, pin 6 for yellow and pin 5 for red, but you can change the pins if you wish by modifying the variables on the start of the code.