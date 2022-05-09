#include "stdio.h" 
main() {
  int i;
  int fact=1; 
  int n;
  scanf("%d",&n);
  while(i<=n) {
    fact=fact*i;
    i += 1;
    }
  printf("Factorial is %d",fact);
  }
