int led = 9;
// the setup routine runs once when you press reset:

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  int voltage = sensorValue * (5.0 / 1023.0)*1000;
  // print out the value you read:
  Serial.println(voltage);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(voltage);                     // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(voltage);
}
