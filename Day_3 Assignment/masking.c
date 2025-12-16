#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t reg = 0xABCD;
    uint8_t lower4;
    uint8_t upper4_lower_byte;
    
    lower4 = reg & 0x000F;

    upper4_lower_byte = (reg & 0x00F0) >> 4;

    printf("Lower 4 bits: 0x%X\n", lower4);
    printf("Upper 4 bits of lower byte: 0x%X\n", upper4_lower_byte);

    return 0;
}
