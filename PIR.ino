int calibrationtime=30;
long unsigned int lowin;
long unsigned int pause=5000;
boolean locklow=true;
boolean takelowtime;
int pirpin=8;
int ledpin=13;
void setup() {
  Serial.begin(9600);
  pinMode(pirpin,INPUT);
  pinMode(ledpin,OUTPUT);
  digitalWrite(pirpin,LOW);
  Serial.print("calibrating....");
  for(int i=0;i<calibrationtime;i++){
    Serial.print(".");
    delay(1000);
  }
  Serial.println("done");
  Serial.println("Sensor Active");

}

void loop() {
  if(digitalRead(pirpin)==HIGH){
    digitalWrite(ledpin,HIGH);
    if(locklow){
      locklow=false;
      Serial.println("---");
      Serial.print("motion detected at ");
      Serial.print(millis()/1000);
      Serial.println("sec");
      delay(50);
    }
    takelowtime=true;
  }
  if(digitalRead(pirpin)==LOW){
    if(takelowtime){
      lowin=millis();
      takelowtime=false;
    }
    if(!locklow && (millis()-lowin)>pause){
      locklow=true;
      digitalWrite(ledpin,LOW);

      Serial.print("motion ended at");
      Serial.print((millis()-pause)/1000);
      Serial.println("sec");
      delay(50);
      
    }
  }
}
