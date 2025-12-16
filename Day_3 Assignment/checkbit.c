#include <stdio.h>
#include <stdint.h>

#define BV(n) (1U << (n))

int main(void)
{
    uint8_t status = 0x80;  

    if (status & BV(3))
    {
        printf("bit 3 is SET\n");
    }
    else
    {
        printf("bit 3 is clear\n");
    }

    return 0;
}
