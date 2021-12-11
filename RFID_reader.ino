#include<SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);
int count = 0; // count = 0
char input[12]; // character array of size 12
boolean flag = 0; // flag =0
void setup()
{
Serial.begin(9600); // begin serial port with baud rate 9600bps
mySerial.begin(9600);
}
void loop()
{
if(mySerial.available())
{
count = 0;
while(mySerial.available() && count < 12) // Read 12 characters and store them in
input array
{
input[count] =mySerial.read();
count++;
delay(5);
}
Serial.print(input); // Print RFID tag number
}
}
