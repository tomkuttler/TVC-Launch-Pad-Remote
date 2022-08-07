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
  // put your main code here, to run repeatedly:

}
