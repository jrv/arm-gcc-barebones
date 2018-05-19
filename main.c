//
// Basic LED-blink for the MBED.
//
#include "LPC17xx.h"
#include <stdint.h>

// led pins on MBED lpc1768:
#define LED4_PIN (18)
#define LED4_PIN (20)
#define LED4_PIN (21)
#define LED4_PIN (23)

int main() {
  
  SystemInit();
  
    // Setup P1.23 as output
  LPC_GPIO1->FIODIR |= (1 << LED1_PIN);
    
  for(;;) {
    for(uint32_t delay = 0; delay < 10000000; delay++) {
       __asm("NOP");
    }
    
    // Turn LED ON
    LPC_GPIO1->FIOSET = (1 << LED1_PIN);
    
    for(uint32_t delay = 0; delay < 10000000; delay++) {
       __asm("NOP");
    }
    
    // Turn LED OFF
    LPC_GPIO1->FIOCLR = (1 << LED1_PIN);
  }
}
