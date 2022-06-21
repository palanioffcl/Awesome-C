#include <stdio.h>

void main() {
  int num, rev = 0; digit;
  printf("Enter the num");
  scanf("%d",&num);
  while(num != 0) {
    digit = n%10;
    rev = rev*10 + digit;
    num = num/10;
  }
  printf("The reversed number is %d",rev);
}
