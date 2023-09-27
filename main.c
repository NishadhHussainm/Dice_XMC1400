#include <DAVE.h>
#include <stdlib.h>


void delay(uint32_t usec) {

    uint32_t start = SYSTIMER_GetTime();
    while (SYSTIMER_GetTime() - start < usec);
}

int main(void) {
    DAVE_Init();

    while (1) {

        uint8_t result = (rand() % 6) + 1;
        DIGITAL_IO_SetOutputHigh(&LED1);
        DIGITAL_IO_SetOutputHigh(&LED2);
        DIGITAL_IO_SetOutputHigh(&LED3);
        DIGITAL_IO_SetOutputHigh(&LED4);
        switch (result) {
            case 1:
                DIGITAL_IO_SetOutputLow(&LED1);
                break;
            case 2:
                DIGITAL_IO_SetOutputLow(&LED2);
                break;
            case 3:
                DIGITAL_IO_SetOutputLow(&LED3);
                break;
            case 4:
                DIGITAL_IO_SetOutputLow(&LED4);
                break;

            default:
                break;
        }


       delay(1000000);
    }
}
