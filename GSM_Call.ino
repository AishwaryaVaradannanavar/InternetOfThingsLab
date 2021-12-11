#include <SoftwareSerial.h>
SoftwareSerial cell(2,3);

void setup() {
 cell.begin(9600);
 delay(500);
 Serial.begin(9600);
 Serial.println("CALLING..........");
    
     cell.println("ATD+919632209363;");
     delay(20000);

}

void loop() {

 
}
