int button = 12;
int bottomLeft = 9;
int middleLeft = 6;
int upperLeft = 3;
int bottomRight = 11;
int middleRight = 10;
int upperRight = 5;

int state = 0;
long randNumber; 

void setup(){
  pinMode(bottomLeft, OUTPUT);
  pinMode(middleLeft, OUTPUT);
  pinMode(upperLeft, OUTPUT);
  pinMode(bottomRight, OUTPUT);
  pinMode(middleRight, OUTPUT);
  pinMode(upperRight, OUTPUT);
  
  pinMode(button, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

 void loop(){
  if (digitalRead(button) == HIGH && state == 0){
    state = 1;
    randNumber = random(1, 7);
    delay(100);
    Serial.println(randNumber);

   for(int i = 0; i<=10; i++){
    int n = i*15;
    one();
    delay(n);
    clearAll();
    two();
    delay(n);
    clearAll();
    three();
    delay(n);
    clearAll();
    four();
    delay(n);
    clearAll();
    five();
    delay(n);
    clearAll();
    six();
    delay(n);
    clearAll();
   }
    if (randNumber == 6){
      six();
    }
    if (randNumber == 5){
      five();
    }
    if (randNumber == 4){
      four();
    }
    if (randNumber == 3){
      three();
    }
    if (randNumber == 2){
      two();
    }
    if (randNumber == 1){
      one();
    }
    delay(5000);
    clearAll();
   state = 0;
  }
}

 void six()
{
  digitalWrite(bottomLeft, HIGH);
  digitalWrite(middleLeft, HIGH);
  digitalWrite(upperLeft, HIGH);
  digitalWrite(bottomRight, HIGH);
  digitalWrite(middleRight, HIGH);
  digitalWrite(upperRight, HIGH);
}

void five()
{
  digitalWrite(upperLeft, HIGH);
  digitalWrite(bottomLeft, HIGH);
  digitalWrite(middleLeft, HIGH);
  digitalWrite(upperRight, HIGH);
  digitalWrite(bottomRight, HIGH);
}

void four()
{
  digitalWrite(upperLeft, HIGH);
  digitalWrite(bottomLeft, HIGH);
  digitalWrite(upperRight, HIGH);
  digitalWrite(bottomRight, HIGH);
}

void three()
{
  digitalWrite(upperLeft, HIGH);
  digitalWrite(middleLeft, HIGH);
  digitalWrite(bottomRight, HIGH);
}

void two()
{
  digitalWrite(bottomRight, HIGH);
  digitalWrite(upperLeft, HIGH);
}

void one(){
  digitalWrite(middleRight, HIGH);
}

void clearAll(){
  digitalWrite(bottomLeft, LOW);
  digitalWrite(middleLeft, LOW);
  digitalWrite(upperLeft, LOW);
  digitalWrite(bottomRight, LOW);
  digitalWrite(middleRight, LOW);
  digitalWrite(upperRight, LOW);
}
