# TTP LED sign
A simple LED sign made for the apartment for me and my friends, indicating if the living room is occupied.

### Introduction
The idea was, that me and the 5 other guys I live with wanted a way to tell if the living room was occupied, so that we didn't disturb anyone that wouldn't want to be disturbed. So I made a simple LED sign that is mounted over the door, plugged into the wall, and with cables running througt the door to the switch module on the inside of the door.

### Setup and explanation
The sign is a bunch of standard red LEDs mounted on a breadboard (I made this before I learned to solder, and never bothered to redo it). It gets power from a 12VDC adapter in the wall. On the other side, there is a switch module that contains an ESP32, and a 5V buck converter for it, along with 2 switches. The first turns the ESP on, witch in turn powers the transistor inside the sign so the LEDs light up. The second switch makes it so the ESP starts blinking the LED sign on and of by controlling the voltage to the transistor. This is made to indicate 2 levels of the living room being occupied. Normal (LEDs powered on) and extra strict (LEDs blinking).

The sign needs to be 3D printed. A standard breadbord made a snug fit when I ripped off one of the power rails. The transistor needs to be a Logic Level MOSFET with a V_th of around 1-2V. I used the IRLZ34N. See the circuit diagram for the whole circuit. The provided code also needs to be flashed to the ESP32.

### Why TTP?
Its a secret I can't tell you
