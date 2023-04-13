const int pinVerd = 12;           // Es declara la constant "pinVerd" amb el número de pin 12
const int pinGroc = 11;           // Es declara la constant "pinGroc" amb el número de pin 11
const int pinVermell = 10;        // Es declara la constant "pinVermell" amb el número de pin 10
int demora = 4000;                // Es declara la variable "demora" amb un valor de 4000 (temps en mil·lisegons)

void setup() {
  pinMode (pinVerd, OUTPUT);      // Configura el pin "pinVerd" com a sortida
  pinMode (pinGroc, OUTPUT);      // Configura el pin "pinGroc" com a sortida
  pinMode (pinVermell, OUTPUT);   // Configura el pin "pinVermell" com a sortida
  digitalWrite(pinVerd, LOW);     // Estableix el pin "pinVerd" en LOW (apagat)
  digitalWrite(pinGroc, LOW);     // Estableix el pin "pinGroc" en LOW (apagat)
  digitalWrite(pinVermell, LOW);  // Estableix el pin "pinVermell" en LOW (apagat)
}

void loop() {
  digitalWrite(pinVerd,HIGH);           // Encén el pin "pinVerd"
  delay(demora);                        // Espera "demora" mil·lisegons
  digitalWrite(pinVerd,LOW);            // Apaga el pin "pinVerd"
  
  // Repetició 5 vegades
    digitalWrite(pinGroc,HIGH);         // Encén el pin "pinGroc"
    delay(500);                         // Espera 500 mil·lisegons
    digitalWrite(pinGroc,LOW);          // Apaga el pin "pinGroc"
    delay(500);                         // Espera 500 mil·lisegons
    digitalWrite(pinGroc,HIGH);         
    delay(500);                         
    digitalWrite(pinGroc,LOW);          
    delay(500);
    digitalWrite(pinGroc,HIGH);         
    delay(500);                         
    digitalWrite(pinGroc,LOW);          
    delay(500);
    digitalWrite(pinGroc,HIGH);         
    delay(500);                         
    digitalWrite(pinGroc,LOW);          
    delay(500);
    digitalWrite(pinGroc,HIGH);         
    delay(500);                         
    digitalWrite(pinGroc,LOW);          
    delay(500);                           

  digitalWrite(pinVermell,HIGH);        // Encén el pin "pinVermell"
  delay(demora);                        // Espera "demora" mil·lisegons
  digitalWrite(pinVermell,LOW);         // Apaga el pin "pinVermell"
}

