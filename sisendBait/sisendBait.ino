int led1 = 9;
int led2 = 10;
int led3 = 11;
int sisendBait;

void setup() {
 Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);

}

void loop() {
  if(Serial.available() >0){
    sisendBait = Serial.read();
    if(sisendBait == 'H') {
    digitalWrite(led1, HIGH);
  }
  if(sisendBait == 'L') {
    digitalWrite(led1, LOW);
  } 
     if(sisendBait == 'M') {
    digitalWrite(led2, HIGH);
  }
  if(sisendBait == 'L') {
    digitalWrite(led2, LOW);
  }
     if(sisendBait == 'T') {
    digitalWrite(led3, HIGH);
  }
  if(sisendBait == 'L') {
    digitalWrite(led3, LOW);
  }
}
}
