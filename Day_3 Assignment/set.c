#include <stdio.h>

#define BV(n) (1U << (n))

void print_bin(void *VP, int size)
{
    unsigned char *p = (unsigned char *)VP;

    for (int i = size - 1; i >= 0; i--)
    {
        unsigned char mask = 0x80;

        while (mask)
        {
            if (p[i] & mask)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            mask >>= 1;
        }
        printf(" ");
    }
    printf("\n");
}

int main(void)
{
    unsigned char reg = 0x2A;

    printf("Initial value:\n");
    print_bin(&reg, sizeof(reg));

    reg |= BV(4);
    printf("After setting bit 4:\n");
    print_bin(&reg, sizeof(reg));

    reg &= ~BV(1);
    printf("After clearing bit 1:\n");
    print_bin(&reg, sizeof(reg));

    reg ^= BV(5);
    printf("After toggling bit 5:\n");
    print_bin(&reg, sizeof(reg));

    return 0;
}
