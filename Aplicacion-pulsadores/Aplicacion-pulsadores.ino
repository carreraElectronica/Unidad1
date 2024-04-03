void setup() {
  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(24, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int p1 = digitalRead(22);
  int p2 = digitalRead(23);
  int p3 = digitalRead(24);

  if (p1 == 0) {
    Serial.println("Sea pulsado P1");
  }
  if (p2 == 0) {
    Serial.println("Sea pulsado P2");
  }
  if (p3 == 0) {
    Serial.println("Sea pulsado P1");
  }
  delay(200);
}
