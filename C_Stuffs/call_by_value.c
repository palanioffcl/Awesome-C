#include <stdio.h>

void call_by_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void main() { 
  a = 2;
  b = 3;
  printf("The value before swapping %d %d",a,b);
  call_by_value_swap(a,b);
  printf("The value before swapping %d %d",a,b);
}
