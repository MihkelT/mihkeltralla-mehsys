int led1 = 9;
int led2 = 10;
int led3 = 11;


void setup() {
  
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop(){
  int sensorValue = analogRead(A0);
 
  if (sensorValue < 341) {
  digitalWrite(led1, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
    
  }
  if (sensorValue > 341 && sensorValue < 682) {
    digitalWrite(led2, HIGH);
  }
  else{
    digitalWrite(led2, LOW);
  }
  if(sensorValue > 682) {
    digitalWrite(led3, HIGH);
  }
  else{
    digitalWrite(led3, LOW);
  }
}
