void setup() {
  DDRA=255;
  PORTA=0;
}
void loop() {
  PORTA=129;
  delay(200);
  PORTA=66;
  delay(200);
  PORTA=36;
  delay(200);

  PORTA=24;
  delay(200);
  PORTA=24;
  delay(200);
  PORTA=36;
  delay(200);
  PORTA=66;
  delay(200);
  PORTA=129;
  delay(200);
}
