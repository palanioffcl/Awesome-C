#include <stdio.h>

int fact(int n) {
        if(n == 1){
         return 1;
        }else{
         return n*fact(n-1);
  }
}

void main() {
        int n;
        printf("Enter the number");
        scanf("%d",&n);
        printf("The Factorial is %d",fact(n));
}
