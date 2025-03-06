const int PWMB = 10; //speed control pin on the motor driver for the left motor
const int BIN2 = 9;  //control pin 2 on the motor driver for the left motor
const int BIN1 = 8;  //control pin 1 on the motor driver for the left motor



void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
