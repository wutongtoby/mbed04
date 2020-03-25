#include "mbed.h"

#include "TextLCD.h"


DigitalOut led(LED_RED);

TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{

      int x = 30;

      lcd.printf("107061220\n");

      do {

            led = !led;             // toggle led

            lcd.locate(0,1);

            lcd.printf("%2d",x);    //conuter display

            wait(1);

      }while(x--);

}