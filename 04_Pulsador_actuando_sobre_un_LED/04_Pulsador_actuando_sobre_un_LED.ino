const int pinLed = 8;
const int polsador = 9;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(polsador, INPUT);
}

void loop() {
  if (digitalRead(polsador) == HIGH) {
    delay(100);
    digitalWrite(pinLed, HIGH);
  } else {
    digitalWrite(pinLed, LOW);
  }
}
