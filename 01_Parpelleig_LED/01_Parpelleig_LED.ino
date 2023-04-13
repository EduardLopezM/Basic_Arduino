// Declarem una constant "pinLed" i li assignem el valor 12, que indica que el LED està connectat a la sortida digital 12 de l'Arduino.
const int pinLed = 12;

void setup() {
  pinMode(pinLed, OUTPUT);  // Configurem la sortida digital "pinLed" com a sortida.
}
void loop() {
  digitalWrite(pinLed, HIGH);   // Establim el nivell lògic de la sortida digital "pinLed" a HIGH (nivell alt), encenent el LED.
  delay(500);                   // Esperem 500 mil·lisegons.
  digitalWrite(pinLed, LOW);    // Establim el nivell lògic de la sortida digital "pinLed" a LOW (nivell baix), apagant el LED.
  delay(500);                   // Esperem 500 mil·lisegons abans de repetir el bucle.
}
