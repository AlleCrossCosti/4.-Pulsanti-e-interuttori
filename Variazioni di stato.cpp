// Pin del pulsante
const byte PIN-PULSANTE = 2;
// Pin del LED
const byte PIN-LED = 13;
// Variabile di stato del pulsante
byte statoPulsante;
byte statoPulsantePrecedente;

void setup () {
    pinMode (PIN_LED, OUTPUT);    // LED in OUTPUT
    // pulsante in INPUT
    pinMode (PIN_PULSANTE, INPUT);
    // leggo il pulsante e memorizzo lo stato iniziale
    statoPulsantePrecedente = digitalRead (PIN_PULSANTE);

 }

 void loop () {
     //leggo il pulsante e memorizzo lo stato
     statoPulsante = digitalRead (PIN_PULSANTE) ;
     // se il pin è HIGH (pulsante premuto)
     // ma prima non lo era...
     if (statoPulsante == HIGH && statoPulsantePrecedente == LOW) 

  }   
  // inverte lo stato del LED
  digitalWrite (PIN_LED, !digitalRead (PIN_LED) ) ;
  // aggiorno lo stato del pulsante precedente
  // (mi servirà al prossimo ciclo)
  statoPulsantePrecedente = statoPulsante;

  } 
  else
  {
      
  if (statoPulsante == LOW && statoPulsantePrecedente == HIGH) {

      statoPulsantePrecedente = statoPulsante;

   }
 }
 delay (10);
  }
       