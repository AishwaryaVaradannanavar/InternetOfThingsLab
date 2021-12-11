 #include <SoftwareSerial.h>
SoftwareSerial cell(2,3);

void setup() {
 cell.begin(9600);
 delay(500);
 Serial.begin(9600);

}

void loop() {

  int val=analogRead(A0);
  Serial.println(val);
  delay(1000);

  if (val<50)
  {
     Serial.println("CALLING..........");
     cell.println("ATD+919739903844;");
     
     delay(5000);
    cell.println("ATH");
     delay(5000);
  Serial.println("CALLING..........1111");
    cell.println("ATD+919739903844;");
    delay(10000);
    cell.println("ATH"); 
    
   }
   
 

}
