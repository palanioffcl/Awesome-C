#include <stdio.h>

void main() {
        int n;
        printf("how many elements you need to enter");
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++) {
                scanf("%d",&arr[i]);
        }

        for(int i=0; i<n; i++) {
                if(arr[i]/2 == 0) {
                        printf("The element is %d is even\n",arr[i]);
                } else {
                        printf("The element is %d is odd\n",arr[i]);
        }
}
}
