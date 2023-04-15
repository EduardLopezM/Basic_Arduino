const int pinLed = 8;    // defineix el pin en el qual es connecta el LED
const int polsador = 9;  // defineix el pin en el qual es connecta el botó

bool ledEstat = LOW;  // variable per emmagatzemar l'estat actual del LED

void setup() {
  pinMode(pinLed, OUTPUT);   // estableix el pin del LED com a sortida
  pinMode(polsador, INPUT);  // estableix el pin del botó com a entrada amb pull-up
}

void loop() {
  int polsadorEstat = digitalRead(polsador);  // llegeix l'estat del botó
  if (polsadorEstat == HIGH) {                // si el botó està polsat (LOW)
    delay(300);                               // espera una mica per evitar lectures falses del botó degut a rebots
    ledEstat = !ledEstat;                     // canvia l'estat del LED
    digitalWrite(pinLed, ledEstat);           // estableix l'estat del LED al nou valor
  }
}
