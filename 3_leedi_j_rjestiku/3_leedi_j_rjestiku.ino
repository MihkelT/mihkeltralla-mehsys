int led1 = 9;
int led2 = 10;
int led3 = 11;
int brightness = 0;  
int fadeAmount = 5;

void setup() {
  
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
  int jada1[] = {led1, led2, led3};
  for (int i = 0; i<=2; i++){
  int ledPin = jada1[i];
 fade();
  
}
}
int fade() {
 for(int i=0; i<255; i++){
    analogWrite(led1, i);
    delay(10);
  }
  for(int i=255; i>0; i--){
    analogWrite(led1, i);
    delay(10);  }
    for(int i=0; i<255; i++){
    analogWrite(led2, i);
    delay(10);
  }
  for(int i=255; i>0; i--){
    analogWrite(led2, i);
    delay(10);  }
    for(int i=0; i<255; i++){
    analogWrite(led3, i);
    delay(10);
  }
  for(int i=255; i>0; i--){
    analogWrite(led3, i);
    delay(10);  }
}
