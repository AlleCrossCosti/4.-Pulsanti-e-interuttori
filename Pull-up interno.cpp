// Pin del pulsante e del LED
const byte PIN_PULSANTE = 2;
const byte PIN_LED = 13;
// Variabile di stato del pulsante
byte statoPulsante;

void setup () {
    pinMode (PIN_LED, OUTPUT) ; // LED in OUTPUT
    // pulsante in INPUT con PULLUP interno
    pinmode (PIN_PULSANTE, INPUT_PULLUP) ;

 }

 void loop () {
     //leggo il pulsante e memorizzo lo stato
     statoPulsante = digitalRead (PIN_PULSANTE) ;

     // se il pin del pulsante è lOW (premuto)...
     if (statoPulsante == LOW)  {
         // accendo il LED
         digitalWrite (PIN_LED, HIGH) ;

  }
  // altrimenti...
  else {
      // Spengo il LED
      digitalWrite (PIN_LED, LOW) ;

   }
   delay (10) ;             

   }