#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0xAA;   // 1010 1010

    printf("Register before modification: 0x%02X\n", reg);

    /* 1. Read bits from bit 2 to bit 4 */
    uint8_t field = (reg >> 2) & 0x07;   // 0x07 = 0000 0111
    printf("Read bits (2 to 4): 0b%03u (%u)\n", field, field);

    /* 2. Write value 0b011 into bits 2 to bit 4 */
    reg &= ~(0x07 << 2);      // Clear bits 2–4
    reg |=  (0x03 << 2);      // Set bits 2–4 to 011

    printf("Register after modification:  0x%02X\n", reg);

    return 0;
}
