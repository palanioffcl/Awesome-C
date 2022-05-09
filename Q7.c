#include <studio.h>
main() {
int i,n;
int t1=0, t2 = 1;
int nextterm = t2+t1; 
printf("enter the number of terms");
scanf("%d",&n);
for (i=0; i<=n; ++i) {
printf("%d",nextterm);
t1=t2;
t2 = nextterm;
nextterm = t1+t2;
}}
