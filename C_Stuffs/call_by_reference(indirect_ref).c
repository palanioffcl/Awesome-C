#include <stdio.h>
#include <../Random_C_Stuffs/swap.h>

/*  Swapping without using temp variable (which is included in ../Random_C_Stuffs/swap.h)
  void swap(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *b = *a + *b;
}

*/


void main() {
    int a = 2;
    int b = 3;
    printf("The values before swapping %d %d",a,b);
    swap(&a,&b);
    printf("The values after swapping %d %d",a,b);
}
