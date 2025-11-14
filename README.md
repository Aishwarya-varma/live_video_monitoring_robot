# live_video_monitoring_robot
A Bluetooth-controlled robot with onboard camera support designed for real-time remote surveillance.
A live video surveillance and monitoring robot designed using Arduino Uno, L298N motor driver, Bluetooth module, ESP32 CAM MODULE and a rechargeable battery system.  
This robot can move in all directions while transmitting real-time video feed, making it useful for security, inspection, and remote monitoring applications.


Project Overview

This project is a mobile robot capable of:

- Wireless remote control using Bluetooth  
- Real-time live video streaming (ESP32-CAM / USB camera depending on setup)  
- Forward, backward, left, and right movement  
- Battery-powered operation for portability  
- Monitoring remote areas where humans cannot easily reach  

The robot is built on a 4-wheel drive chassis with a mounted camera.


Components Used

- Arduino Uno – Main controller  
- L298N Motor Driver – Controls the DC motors  
- DC Geared Motors + Wheels – Movement  
- Lithium-Ion Battery Pack – Power supply  
- Bluetooth Module (HC-05) – Wireless control  
- ESP32-CAM / WiFi Camera Module– Live video streaming  
- Robot Chassis – Mechanical base  
- Jumper Wires
- Switch & Connectors

Hardware Connections

Arduino → L298N Motor Driver
- IN1 → D7  
- IN2 → D6  
- IN3 → D5  
- IN4 → D4  
- ENA → 5V  
- ENB → 5V  
- 12V input from battery  

Bluetooth Module (HC-05)
- VCC → 5V  
- GND → GND  
- TX → RX  
- RX → TX  

Power Supply
- 5 × 18650 Li-ion Batteries  
- Connected to L298N + Arduino 5V regulator  
