int myVoltPin = A2;
int readVal;
float V2;
int redPin = 9;
int yellowPin = 10;
int whitePin = 11;
int delayT=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(myVoltPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
   pinMode(whitePin,OUTPUT);
}

void loop() {
  // put your main codede here, to run repeatedly:
  readVal = analogRead(myVoltPin);
  V2 = (5./1023.)*readVal;
  Serial.print("Potentialmeter Voltage is: ");
  Serial.println(V2);
  if(V2<5.0 && V2>4.0){
    digitalWrite(redPin,HIGH);
    digitalWrite(whitePin,LOW);
  }
  if(V2<4.0 && V2>3.00){
    digitalWrite(yellowPin,HIGH);
    digitalWrite(redPin,LOW);
        digitalWrite(whitePin,LOW);
  }
  if(V2<1.0 || V2<2.00){
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,LOW);
    digitalWrite(whitePin,HIGH);
  }
  delay(delayT);
}
