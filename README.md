# 🔥 Fire Detection System using ESP32 + IR Sensor + Blynk

A smart fire detection system built with an ESP32 microcontroller that uses an Infrared (IR) sensor to detect fire. When fire is detected, the system triggers a buzzer alarm and sends an instant notification to the user through the Blynk IoT cloud platform.

## 📌 Features

- 🔍 **Fire Detection** using IR flame sensor
- 🚨 **Buzzer Alert** when fire is detected
- ☁️ **Cloud Notification** via Blynk App
- 📱 **Remote Monitoring** on mobile devices
- 🔌 Low-power & Wi-Fi enabled using ESP32

---

## 🛠️ Hardware Components

| Component        | Quantity |
|------------------|----------|
| ESP32 Dev Board  | 1        |
| IR Flame Sensor  | 1        |
| Buzzer           | 1        |
| Jumper Wires     | As needed |
| Breadboard       | 1        |
| Micro USB Cable  | 1        |
| Internet/Wi-Fi   | Required |


---

📷

![image](https://github.com/user-attachments/assets/0e9ae28c-9ff0-4ece-83da-4bb8ea3d6a40)

---

## 📱 Blynk Setup

1. Download the **Blynk IoT App** from Play Store or App Store.
2. Create a new project with the **ESP32 board**.
3. Add a **Notification widget** to your dashboard.
4. Copy your **Auth Token** from the app.
5. Replace it in the Arduino code.

---

## 🔧 How It Works

1. The IR sensor detects fire or flame in its range.
2. If fire is detected:
   - The buzzer starts ringing.
   - A notification is sent to the Blynk mobile app.
3. User receives an alert and takes appropriate action.

---

## 💻 Software & Libraries

- [Arduino IDE](https://www.arduino.cc/en/software)
- [Blynk Library](https://github.com/blynkkk/blynk-library)
- ESP32 Board Support Package (Install from Board Manager)

---

🧠 Future Improvements
Add temperature or smoke sensor for better accuracy

Enable auto-fire extinguishing system

Integrate with voice assistant or home automation

---

🙋‍♂️ Authors
Ullas and team
Project Year: 2023
