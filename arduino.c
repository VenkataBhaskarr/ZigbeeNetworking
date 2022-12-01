#include <SoftwareSerial.h>
#include <dht.h>


#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;

 SoftwareSerial mySerial (2,3); // 4 --> Tx 5--> Rx

 void setup() {

    Serial.begin(9600);
    delay(1500);
    mySerial.begin(9600);

}

 void loop() {

     delay(1000);
     DHT.read11(dht_apin);
    // int myvalue=analogRead(A0); 
    // myvalue= myvalue*0.48828125;
     Serial.println (DHT.temperature);


     /*int ch= 0x3FB + myvalue;


     byte checksum = ch;


     checksum = 0xFF - checksum;
byte data[] = {0x7E, 0x00, 0x0F, 0x10, 0x01, 0x00, 0x13, 0xA2, 0x00, 0x41, 0x8F, 0x8F, 0x32, 0xFF, 0xFE, 0x00, 0x00, myvalue,checksum};*/


mySerial.println(DHT.temperature);
delay (3500);
}
