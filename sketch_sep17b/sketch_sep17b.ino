
int led_pin = 9;
void setup() {
  
  pinMode(led_pin, OUTPUT);
}
void loop() {
  
  fade();
}

void fade() {
 for(int i=0; i<255; i++){
    analogWrite(led_pin, i);
    delay(10);
  }
  for(int i=255; i>0; i--){
    analogWrite(led_pin, i);
    delay(10);  }
}
