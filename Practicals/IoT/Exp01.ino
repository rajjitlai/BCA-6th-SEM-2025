void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  // default
  // digitalWrite(4, HIGH);
  // delay(1);
  // digitalWrite(4, LOW);
  // delay(1);

  // on
  // off
  // on on - delay
  // off
  // on on on  - more delay
  // off

  // digitalWrite(4, HIGH);
  // delay(1000);
  // digitalWrite(4, LOW);
  // delay(1000);

  // digitalWrite(4, HIGH);
  // delay(1000);
  // digitalWrite(4, LOW);
  // delay(3000);

  // digitalWrite(4, HIGH);
  // delay(1000);
  // digitalWrite(4, LOW);
  // delay(5000);

  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(1, LOW);
  delay(1000);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);

  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
}
