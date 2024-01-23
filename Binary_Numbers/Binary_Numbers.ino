int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int del= 1000;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 delay(del);
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 delay(del);
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 delay(del);
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 delay(del);
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 delay(del);
  digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 delay(del);
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 delay(del);
  digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 delay(del);
  digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,HIGH);
 delay(del);
}
