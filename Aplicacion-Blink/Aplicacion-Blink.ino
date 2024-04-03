void setup() {
  pinMode (22,OUTPUT);
  pinMode (23,OUTPUT);
  pinMode (24,OUTPUT);
  pinMode (25,OUTPUT);
}
void loop() {
  digitalWrite(22,HIGH);
  digitalWrite(23,HIGH);
  digitalWrite(24,HIGH);
  digitalWrite(25,HIGH);
  delay(1000);
  digitalWrite(22,LOW);
  digitalWrite(23,LOW);
  digitalWrite(24,LOW);
  digitalWrite(25,LOW);
  delay(1000);
} 
