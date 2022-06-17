#include <stdio.h>

main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b>c)
		printf("A is Largest");
	else if(b>a>c)
		printf("B is Largest"):
	else if(c>a>b)
		printf("C is Largest");
}
