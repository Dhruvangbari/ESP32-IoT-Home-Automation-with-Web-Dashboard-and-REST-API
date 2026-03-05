
# ESP32 IoT Home Automation with Web Dashboard 🚀

An advanced IoT project using **ESP32 + WiFi + Web Server** that allows you to control devices from a browser dashboard.

## Features
- WiFi-based device control
- Real-time web dashboard
- Control LEDs / Relays remotely
- REST API endpoints
- Expandable for sensors and automation
- Clean project structure for GitHub

## Tech Stack
- ESP32
- Arduino Framework
- HTML / CSS / JavaScript Dashboard
- REST API

## Hardware Required
- ESP32
- Relay Module or LED
- Jumper Wires
- Breadboard

## Pin Configuration

| Device | ESP32 Pin |
|------|------|
| Relay / LED | GPIO 26 |

## Project Structure

esp32-iot-home-automation
│
├── esp32_code
│   └── esp32_home_automation.ino
│
├── web_dashboard
│   ├── index.html
│   └── script.js
│
├── requirements.txt
└── README.md

## API Endpoints

Turn ON device

http://ESP32_IP/on

Turn OFF device

http://ESP32_IP/off

## How to Run

1. Install Arduino IDE
2. Install ESP32 board
3. Upload `esp32_home_automation.ino`
4. Connect to the IP shown in Serial Monitor
5. Open the dashboard

## Future Improvements

- MQTT integration
- Mobile app control
- Sensor monitoring
- AI automation rules

## License
MIT
