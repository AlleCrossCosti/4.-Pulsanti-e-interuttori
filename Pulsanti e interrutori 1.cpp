// Pin del pulsante
const byte PIN_PULSANTE = 2;
// Pin del LED
const byte PIN_LED = 13;
// Variabile di stato del pulsante
byte statoPulsante = 0;

void setup () { 
    pinMode (PIN_LED, OUTPUT) ;  // LED in OUTPUT
    pinMode (PIN_PULSANTE, INPUT) ; // pulsante in INPUT

 }

 void loop () { 
     // Leggo il pulsante e memorizzo lo stato
     statoPulsante = digitalRead (PIN_PULSANTE);

     // se il pin del pulsante è HIGH (premuto)...
     if (statoPulsante == HIGH) { 
         // Accendo il LED
         digitalWrtite (PIN_LED, HIGH) ;

  }

  // Altrimenti...
  else {
      // Spengo il LED
      digitalWrite (PIN_LED, LOW) ;

 }

 delay (10) ;

 }            