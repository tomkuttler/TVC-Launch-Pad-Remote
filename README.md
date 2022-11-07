<div align="center">

# TVC-Launch-Pad-Remote

<a href="https://www.arduino.cc">
    <img alt="arduino" src="https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white" /></a>
<a href="https://www.iso.org/standard/74528.html">
    <img alt="C" src="https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
<a href="https://isocpp.org">
    <img alt="C++" src="https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white" /></a>
<br>
<br>

This project is a remote control for a model rocket launch pad. It uses an Arduino Nano Every microcontroller, an HC-12 radio module, and two buttons. The remote control allows you to start a countdown for launching the rocket by pressing button 1. If you need to abort the countdown for any reason, you can press button 2. The remote control is powered by a power bank that is directly connected to the Arduino. This remote control project is designed to work with the [Model Rocket Launch Pad](https://github.com/tomkuttler/TVC-Launch-Pad-Code).

</div>

<details>
<summary>Table of Contents</summary>

- [Installation](#installation)
- [Usage](#usage)
- [Wiring Diagram](#wiring-diagram)
- [Contributing](#contributing)
- [License](#license)
</details>

## Installation

To use this software, you will need an Arduino Nano Every (or similar Arduino) and the Arduino IDE. Follow these steps to install the software:

1. Clone the repository to your local machine.
2. Open the `Remote_Controll.ino` file in the Arduino IDE.
3. Upload the code to your Arduino.

## Usage

1. Connect the HC-12 radio module and the buttons to the Arduino like its shown in the wiring diagram.
2. Connect the power bank to the Arduino Nano Every.
3. Turn on the launch pad and wait for it to complete the startup process.
4. Press button 1 to start the countdown.
5. Press button 2 to abort the countdown.

## Wiring Diagram

![Wiring Diagram](https://github.com/tomkuttler/TVC-Launch-Pad-Remote/blob/main/Wiring%20Diagram.png)

## Contributing

If you would like to contribute to this project, please follow these steps:

1. Fork the repository to your own account.
2. Create a new branch with your changes.
3. Submit a pull request with your changes.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). You are free to use, modify, and distribute this software for both personal and commercial purposes as long as you give attribution to the original author. For more information about the license, please see the `LICENSE` file.
