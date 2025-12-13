#include <stdio.h>
#include <stdlib.h>

void printf_binary(void *vp, int size);

int main(int argc, char *argv[])
{
    char ch;

    if (argc == 2) {
        ch = (char)atoi(argv[1]);   
    } else {
        printf("Enter a number: ");
        scanf("%hhd", &ch);     
    }
    printf("Binary : ");

    printf_binary(&ch, sizeof(ch));

    return 0;
}

void printf_binary(void *vp, int size)
{
    unsigned char *ptr = (unsigned char *)vp;
    int i;

    for (i = size - 1; i >= 0; i--)
    {
        unsigned char mask = 0x80;

        while (mask)
        {
            if (ptr[i] & mask)
                printf("1");
            else
                printf("0");

            mask >>= 1;
        }
        printf(" ");
    }
    printf("\n");
}
