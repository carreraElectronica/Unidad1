void setup() {
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int switchState1 = digitalRead(22);
  int switchState2 = digitalRead(23);
  int switchState3 = digitalRead(24);
  int switchState4 = digitalRead(25);
  if (switchState1 == 1) {
    Serial.println("Esta activo el Primer Switch");
  }
  if (switchState2 == 1) {
    Serial.println("Esta activo el Segundo Switch");
  }
  if (switchState3 == 1) {
    Serial.println("Esta activo el Tercer Switch");
  }
  if (switchState4 == 1) {
    Serial.println("Esta activo el Cuarto Switch");
  }
  delay(500);
} 
