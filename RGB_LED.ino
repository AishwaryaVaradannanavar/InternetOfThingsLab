int red=9;
int green=10;
int blue=11;
void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  
}

void loop() {

long int redv=random(0,255);
long int greenv=random(0,255);
long int bluev=random(0,255);
analogWrite(red,redv);

analogWrite(blue,bluev);

analogWrite(green,greenv);
delay(100);
analogWrite(red,0);

analogWrite(blue,0);

analogWrite(green,0);

  delay(100);
}
