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
//uint16_t  final_count;

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
  //final_count = random(12) + 100;
}

void loop() {
  int val;
  // put your main code here, to run repeatedly:
  //PORTA.OUT |= 0x4e;
  //if (global_counter < final_count){
    val = (global_counter%4)==0?LOW:HIGH;
    digitalWrite(LED1, val);
    val = (global_counter%4)==1?LOW:HIGH;
    digitalWrite(LED2, val);
    val = (global_counter%4)==3?LOW:HIGH;
    digitalWrite(LED3, val);
    val = (global_counter%4)==2?LOW:HIGH;
    digitalWrite(LED4, val);
  //}
  delay(200);
  
  //PORTA.OUT &= 0xb1;
  global_counter += 1;
}
