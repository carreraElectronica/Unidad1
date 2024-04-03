void setup() {
  pinMode(22,OUTPUT); // definimos el pin 22 como salida
  pinMode(23,OUTPUT); // definimos el pin 23 como salida
  pinMode(24,OUTPUT); // definimos el pin 24 como salida
}
void loop() {
 digitalWrite(22, HIGH); //
 digitalWrite(23, LOW);
 digitalWrite(24, LOW);
 delay(5000);
 digitalWrite(23, HIGH);
 digitalWrite(22, LOW);
 digitalWrite(24, LOW);
 delay(5000);
 digitalWrite(24, HIGH);
 digitalWrite(23, LOW);
 digitalWrite(22, LOW);
 delay(5000);
}  