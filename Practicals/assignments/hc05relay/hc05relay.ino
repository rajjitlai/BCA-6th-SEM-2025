char incomingData;
int relayPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
}

void loop() {
  if (Serial.available()) {
    incomingData = Serial.read();
    
    if (incomingData == '1') {
      digitalWrite(relayPin, HIGH); 
      Serial.println("Bulb ON");
    }
    else if (incomingData == '0') {
      digitalWrite(relayPin, LOW);
      Serial.println("Bulb OFF");
    }
  }
}
