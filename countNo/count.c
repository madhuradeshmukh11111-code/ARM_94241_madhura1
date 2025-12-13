#include <stdio.h>
int countSetBits_Shift(unsigned int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) { 
            count++;
        }
        num >>= 1; 
    }
    return count;
}
int main() {
    unsigned int number = 13; 
   printf("Number of set bits in %u: %d\n", number, countSetBits_Shift(number));
   return 0;
 }
