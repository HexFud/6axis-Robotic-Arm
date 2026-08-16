## 6 Axis Robotic Arm

I created this 6 axis robotic arm entirely from scratch starting from the PCB to the 3D modelling and designing.

## What this was made

The PCB can take up to 6 motors (I used 6 NEMA 17) with 6 driver boards that you can directly plug into the PCB. In the PCB case there is a fan that you can plug in into the dedicated socket, this is foundamental to keep the motor drivers cool and keep things as safe as possible. The board runs on 24V connection and includes connections for:

1. 6 limit switches for homing each joint
2. A CAN Bus interface

## How to flash the firmware

My project doesn't have a USB-C or other type of interfaces so to flash the firmware you need a ST-LINK V2 where you need to wire up the correct cable from the usb to the board (J18 connector) and download the free software [STM32CubeProgrammer](https://www.st.com/content/st_com/en/stm32cubeprogrammer.html) and you simply need to upload the firmware.

![Connector pinout](media/PCB_pinout.png)

## Filament reccomendation

Because stepper motors and the drivers generate heat around 50°C-60°C I strongly reccomend to use filaments like PETG, ABS or ASA instead of standard PLA ensuring the plastic won't melt.

## ⚠️⚠️ Safety advice ⚠️⚠️

This project includes experimental software, hardware designs, and assembly documentation are still under development and may contain bugs, errors, or incomplete features. By using, building, or modifying this project, you acknowledge that:

1. You use this project entirely at your own risk
2. You are solely responsible for safe assembly, testing, and operation
3. The autor isn't responsible for any type of damage, injury or loss to people or the machine itself

By proceeding you accept to all risks and agree to these condition
If you don't acknoledge these risks and condition don't use this project 
