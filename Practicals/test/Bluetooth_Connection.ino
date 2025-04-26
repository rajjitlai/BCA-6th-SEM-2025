#include <SoftwareSerial.h>

#define BT_RX_PIN 10
#define BT_TX_PIN 11
#define LED_PIN    13
#define BAUD     9600

SoftwareSerial bt(BT_RX_PIN, BT_TX_PIN);

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(BAUD);
  bt.begin(BAUD);
  Serial.println(F("Ready. Type in phone app to see it here."));
}

void loop() {
  // 1) Phone → Arduino → PC
  if (bt.available()) {
    char c = bt.read();
    Serial.print(c);           // show on USB-Serial monitor
    digitalWrite(LED_PIN, HIGH);
    delay(50);
    digitalWrite(LED_PIN, LOW);
  }

  // 2) PC → Arduino → Phone
  if (Serial.available()) {
    char c = Serial.read();
    bt.write(c);
  }
}
