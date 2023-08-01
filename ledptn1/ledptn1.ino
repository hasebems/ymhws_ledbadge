/* ========================================
 *
 *  for LED WS
 *    description: Main Loop
 *    for ATtiny202
 *
 *  Copyright(c)2023- Masahiko Hasebe at Kigakudoh
 *  This software is released under the MIT License, see LICENSE.txt
 *
 * ========================================
 */
#define LED1          2   //  PA1
#define LED2          3   //  PA2
#define LED3          4   //  PA3
#define LED4          0   //  PA6
/*----------------------------------------------------------------------------*/
//     Variables
/*----------------------------------------------------------------------------*/
uint16_t  global_counter;

/*----------------------------------------------------------------------------*/
//      Program
/*----------------------------------------------------------------------------*/
void setup() {
  // put your setup code here, to run once:
  //PORTA.DIR = 0x4e;
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  //PORTA.OUT |= 0x4e;
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);

  global_counter = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  //PORTA.OUT |= 0x4e;
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  delay(500);
  
  //PORTA.OUT &= 0xb1;
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  delay(500);
  global_counter += 1;
}
