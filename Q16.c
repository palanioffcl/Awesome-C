// tree program da

#include "stdio.h"

void main() {

   for(int k=0; k<3; k++) {

   for(int i=0; i<4; i++)  {

   for (int j=0; j<3-i; j++) {

             printf(" "); }

         for(int j=1; j<=2*i-1; j++) {

          printf("*"); }

         printf("\n");  }}

   for (int k = 0; k<2; k++) {

        printf("  *\n"); }

        printf("*****");

}
