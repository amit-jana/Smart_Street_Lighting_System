int ir1 = 2;
int ir2 = 3;
int ir3 = 4;
int ir4 = 5;
int ir5 = 6;

int led1 = 7;
int led2 = 8;
int led3 = 9;
int led4 = 10;
int led5 = 11;
int led6 = 12;
int led7 = 13;

int Streetlight = A1;

const int RLed = A0;
int RedLed = LOW;

unsigned long previousMillis = 0;
const long interval = 1000;

int proxy1 = 0;
int proxy2 = 0;
int proxy3 = 0;
int proxy4 = 0;
int proxy5 = 0;

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

  pinMode(Streetlight, OUTPUT);
  pinMode(RLed, OUTPUT);
}


void loop() {
  proxy1 = digitalRead(ir1);
  proxy2 = digitalRead(ir2);
  proxy3 = digitalRead(ir3);
  proxy4 = digitalRead(ir4);
  proxy5 = digitalRead(ir5);

if(proxy1==HIGH) {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
}

else {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

if(proxy2==HIGH) {
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
}

else {
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
}

if(proxy3==HIGH) {
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
}

else {
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
}

if(proxy4==HIGH) {
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
}

else {
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
}

if(proxy5==HIGH) {
  digitalWrite(led7,HIGH);
}

else {
  digitalWrite(led7,LOW);
}

unsigned long currentMillis = millis();

    if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (RedLed == LOW) {
      RedLed = HIGH;
    } 
    else {
      RedLed = LOW;
    }

    //LED with the ledState of the variable:
    digitalWrite(RLed, RedLed);
    }
    
    digitalWrite(Streetlight, HIGH);
}
