// Q30 sqrt program
#include <math.h>
#include <stdio.h>
 
int main() {
   double number, squareRoot;
 
   printf("Enter a number: ");
   scanf("%lf", &number);
 
     squareRoot = sqrt(number);
 
   printf("Square root of  =  %.2lf", number, squareRoot);
 
   return 0;
}