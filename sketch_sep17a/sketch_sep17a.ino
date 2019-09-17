int pushButton = 2;
int led = 9;
int buttonState=0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  
}


void loop() {
 
  int buttonState = digitalRead(pushButton);
  
  Serial.println(buttonState);
  delay(1);        
  lylitus();
}

void lylitus() {
  int buttonState=digitalRead(pushButton);
 if (buttonState == 1) {
  digitalWrite(led, HIGH); 
 }
else (buttonState == 0);{ 
  digitalWrite(led, LOW);
}
}
