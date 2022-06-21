#include <stdio.h>

void main() {
    int a,b;
    printf("Enter the value of A");
    scanf("%d",&a);
    printf("Enter the value of B");
    scanf("%d",&b);
    printf("Enter your choice\n 1.Addition\n2. Subtraction\n3. Multiplication \n4. Divison\n");
    
  switch(number){    
    case 1:    
      printf("The addition is %d",a+b);    
    break;    
    case 2:    
      printf("The Subtraction is %d",a-b);    
    break;    
    case 3:    
      printf("The Multiplication is %d",a*b);    
    break;    
    case 3:    
      printf("The Divison is %d",a/b);    
    break;    
    default:    
      printf("Invalid Option");    
  }    
} 
          
