int state=1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,INPUT_PULLUP);

pinMode(3,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  delay(150);
  if(digitalRead(2)==0) {
    state=state+1;
  }
  else {
  }
  if (state==4) {
      state=state-3;
    }
  Serial.println(state);

  if(state==1){
    Serial.println("Off");
  digitalWrite(3,LOW);
  }
  
  if(state==2){
    Serial.println("low power");
    analogWrite(3,100);
  }
   if(state==3){
    Serial.println("low power");
    analogWrite(3,255);
   }
}

