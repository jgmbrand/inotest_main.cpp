#include <arduino.h>

#define main() setup()

#define LEDPIN_PINMODE             DDRB  |=  (1<<5);    //pinMode (13, OUTPUT);//
#define LEDPIN_TOGGLE              PINB  |=  (1<<5);    //(PortB.5)change LEDPIN state (digital PIN 13)
#define LEDPIN_OFF                 PORTB &= ~(1<<5);
#define LEDPIN_ON                  PORTB |=  (1<<5);

void main(){
  LEDPIN_PINMODE
  LEDPIN_ON
  delay(1000);
  LEDPIN_OFF
  delay(1000);
  while(1){
    LEDPIN_TOGGLE
    delay(500);
  }
}
