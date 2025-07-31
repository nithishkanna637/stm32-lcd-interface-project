# stm32-lcd-interface-project
This project demonstrates how to interface a 16x2 LCD with an STM32 microcontroller using STM32CubeIDE. It displays static text on the LCD by configuring GPIOs in 4-bit mode.         
# STM32 LCD and LED Control Project

This project demonstrates how to interface an STM32F401RE microcontroller with:
- A 20x4 character LCD
- Three LEDs (Red, Green, Blue)

It uses STM32 HAL and custom LCD 4-bit mode library.

## 🔧 Features
- LCD initialized and prints “LCD Test”
- Blinking Red, Green, and Blue LEDs
- Delay functions to show timing control

## 💻 Hardware
- STM32F401RE (Nucleo board or Proteus model)
- LM016L / LM044 LCDs (16x2 or 20x4)
- LEDs with current-limiting resistors
- Potentiometer for LCD contrast

## 📁 Files
- `main.c` – main application logic
- `lcd.c`, `lcd.h` – LCD driver
- `schematic.png` – circuit diagram from Proteus

## 📷 Schematic
![Schematic](schematic.png)

## 🛠 Tools
- STM32CubeIDE
- Proteus 8 or later for simulation
- STM32 HAL drivers

## 🔄 Simulation
You can simulate the project using QEMU (with difficulty) or directly inside Proteus using this schematic.

---

### 3. ✅ **Create a GitHub Repository**

1. Go to [https://github.com](https://github.com)
2. Log in to your account
3. Click the green **“New”** button (top-left of your Repositories page)
4. Fill in:
   - **Repository name:** `STM32_LCD_LED_Project`
   - Description: _"LCD and LED control using STM32F401RE and Proteus schematic"_
   - **Set to Public** (unless private is needed)
   - Initialize with a README → **DO NOT CHECK THIS** (you already made one)
5. Click **“Create repository”**

---

### 4. ✅ **Upload Files Using Git (Terminal Method)**

If you have Git installed, do this in your terminal:

```bash
cd path/to/STM32_LCD_LED_Project
git init
git remote add origin https://github.com/yourusername/STM32_LCD_LED_Project.git
git add .
git commit -m "Initial commit: STM32 LCD and LED project"
git push -u origin master
