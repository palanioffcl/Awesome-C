#include <stdio.h>
#include <../swap.h>


void main() {
    printf("Enter the value of X");
    scanf("%d",&x);
    printf("Enter the value of Y");
    scanf("%d",&y);
    swap(&x, &y);
    printf("The value of X  = %d and Y = %d ",x,y);
}
