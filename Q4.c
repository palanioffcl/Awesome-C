#include<stdio.h>

int main()

{

int i,j,n;

printf("enter the number of rows:");

scanf("%d",&n);

printf("*\n");

for (i=1;i<=n;i++)

{

printf("%d",j);

}

for (j=i-1;j>=1;j--)

{

printf("%d",j);

}

printf("*");

printf("\n");

}

for (i=n-1;i>=1;i--)

{

printf("*");

for (j=1;j<=i;j++)

{

printf("%d",j);

}

for (j=i-1;j>=1;j--)

{

printf("%d",j);

}

printf("*");

printf("\n");

}

printf("*");

return 0;

}
