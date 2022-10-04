/*
 * Remote Controll Code
 * 
 * This is the source code for a remote control for a model rocket launch pad.
 * It uses an Arduino Nano Every microcontroller, an HC-12 radio module, and two buttons.
 * 
 * This version 1.0 was used for the first test flight of the rocket on Sep 03 2022.
 * 
 * @version 1.0
 * @author Tom Kuttler
 * @GitHub https://github.com/tomkuttler/TVC-Launch-Pad-Remote
 */

void setup() {
  // Begin serial communication to HC-12
  Serial1.begin(9600);

  // Configure pin 3 as input and enable internal pull-up resistor
  pinMode(3, INPUT_PULLUP);

  // Configure pin 4 as input and enable internal pull-up resistor
  pinMode(4, INPUT_PULLUP);

  // LED on the Arduino Board
  pinMode(13, OUTPUT);
}

void loop() {
  // Save the button value of button 1 to a variable, 1 = not pressed, 0 = pressed
  int button1Val = digitalRead(3);

  // Save the button value of button 2 to a variable, 1 = not pressed, 0 = pressed
  int button2Val = digitalRead(4);

  // Button 1 is the start countdown button
  if(button1Val == HIGH) {  // If Button 1 is not pressed
    digitalWrite(13, LOW);  // Turn off LED
  }
  else {                    // Else Button 1 is pressed
    digitalWrite(13, HIGH); // Turn on LED

    Serial1.print("1");     // HC-12 sends "1"

    delay(1000);
  }

  // Button 2 is the abort button
  if(button2Val == HIGH) {  // If Button 2 is not pressed
    digitalWrite(13, LOW);  // Turn off LED
  }
  else {                    // Else Button 2 is pressed
    digitalWrite(13, HIGH); // Turn on LED

    Serial1.print("2");     // HC-12 sends "2"

    delay(1000);
  }

  delay(20);
}
