#include <stdio.h>
main() {
int i,j, rowas;
scanf("%d",&rows);
for (i=0; i< rows; ++i) {
for (j=1; j<=i; ++j) {
printf("* ");
}
printf("\n");
}
}
