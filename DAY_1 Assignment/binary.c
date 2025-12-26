#include <stdio.h>
void printf_binary(void*vp,int size);
int main()
{
    char ch=10;
    printf_binary(&ch,sizeof(ch));
    return 0;
}
void printf_binary(void *vp, int size)
{
 int i;
    for(i = size - 1; i >= 0; i--)
{
    unsigned char  mask=0x80;
    while(mask)
    {
        if( *((char *)vp + i) & mask )
                printf("1");
            else
                printf("0");
            mask>>=1;       
    }
    printf(" ");
}
}
