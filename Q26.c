#include <stdio.h>
void main() {
  int n, rev = 0, remain;
  printf("Number to reverse");
  scanf("%d",&n);
  
while(n!=0) {
  remain = n%10;
  rev = rev*10+remain;
  n = n/10;
}
  printf("Reversed %d",rev);
}
