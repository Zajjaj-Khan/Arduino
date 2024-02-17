int potVal;
int potPin=A0;
int redPin=7;
int del_time=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 potVal = analogRead(potPin);
 Serial.println(potVal);
 delay(del_time);
 while(potVal>1000){
  digitalWrite(redPin,HIGH);
  potVal = analogRead(potVal);
   Serial.println(potVal);
    delay(del_time);
  
 }
digitalWrite(redPin,LOW);
}
