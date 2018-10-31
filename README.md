Hand Gesture Controlled Bot
===============

# Overview
The hand gesture controlled bot is a bot which receives it commands by giving pitch and roll to hand. This is helpful for people on wheelchair who can't even move their fingers or hands.

# Aim
To design a hand gesture control bot which moves as we change our hand gesture.

# Components
Arduino, IMU Sensor(MPU6050), Motor Driver Module (L293D), BO Motor, Jumpers, Chassis, Battery, Breadboard, Wheels.

# Applications: 
1. These bots are very useful in many applications like remote surveillance, military etc.
2. Hand gesture controlled robot can be used by physically challenged in wheelchairs.
3. Hand gesture controlled industrial grade robotic arms can be developed.

# Circuit Diagram
![gesturebot_bb 1](https://user-images.githubusercontent.com/40535193/47768192-f419c900-dcfc-11e8-91c6-df5689163fbf.jpg)

# Working of Circuit
1. Calibration of IMU sensor using Library functions provided by Open Source Developers working on IMU sensors.
2. Code was written for calculation of angles using Gyroscope sensor.
3. Thresholding was done for the movement of the bot
4. Connection were made robust using perfboard according to circuit diagram
5. Code for movement of bot using differential drive mechanism was written
6. H-bridge was used for Bi-directional movement of bot 

# Challenges Faced

1. Calibration of IMU Sensor
2. Lesser accuracy of IMU sensors
3. Master slave configuration of bluetooth module
4. Poor connections
5. No proper soldering
6. Gimbal locking
7. Shorting grounds of all devices

![MPU6050 Processing](http://www.jarzebski.pl/media/zoom/publish/2014/10/mpu6050-processing-2.png "MPU6050 Processing")


# Video Link
https://drive.google.com/file/d/1FxKM1XTJ2eXsQflOGg-hfRZL7C6VR18y/view?usp=sharing

# References
http://www.ti.com/product/L293D
https://en.wikipedia.org/wiki/Inertial_measurement_unit
https://www.arduino.cc/en/Main/Tutorials
https://howtomechatronics.com/tutorials/arduino/how-to-configure-pair-two-hc-05-bluetooth-module-master-slave-commands/
https://en.wikipedia.org/wiki/Aircraft_principal_axes
https://en.wikipedia.org/wiki/Euler_angles

# Team Members
1. Rohit Lal
2. Rishesh Agarwal
