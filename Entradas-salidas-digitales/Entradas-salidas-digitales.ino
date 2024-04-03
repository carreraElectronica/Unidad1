void setup() {
  DDRA = 255;
  PORTA = 0;
  pinMode(30, INPUT_PULLUP);
  pinMode(31, INPUT_PULLUP);
  pinMode(32, INPUT_PULLUP);
  pinMode(33, INPUT_PULLUP);
  pinMode(34, INPUT_PULLUP);
  pinMode(35, INPUT_PULLUP);
}
void loop() {
  int s1 = digitalRead(30);
  int s2 = digitalRead(31);
  int s3 = digitalRead(32);
  int s4 = digitalRead(33);
  int p1 = digitalRead(34);
  int p2 = digitalRead(35);
  if (s1 == 0) {
    if (s2 == 0) {
      PORTA = 129;
      delay(200);
      PORTA = 66;
      delay(200);
      PORTA = 36;
      delay(200);
      PORTA = 24;
      delay(200);
    }
    else {
      PORTA = 0;
    }
    if (s3 == 0) {
      PORTA = 24;
      delay(200);
      PORTA = 36;
      delay(200);
      PORTA = 66;
      delay(200);
      PORTA = 129;
      delay(200);
    }
    else {
      PORTA = 0;
    }
    if (s4 == 0) {
      PORTA = 1;
      delay(200);
      PORTA = 2;
      delay(200);
      PORTA = 4;
      delay(200);
      PORTA = 8;
      delay(200);
      PORTA = 16;
      delay(200);
      PORTA = 32;
      delay(200);
      PORTA = 64;
      delay(200);
      PORTA = 128;
      delay(200);
    } else {
      PORTA = 0;
    }
    if (p1 == 0) {
      PORTA = 0;
      delay(200);
      PORTA = 255;
      delay(200);
    }
    if (p2 == 0) {
      PORTA = 15;
      delay(200);
      PORTA = 240;
      delay(200);
    }
  } else {
    PORTA = 0;
  }
}