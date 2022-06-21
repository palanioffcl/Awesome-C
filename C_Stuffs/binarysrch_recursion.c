#include <stdio.h>
#include <../Random_Stuff/swap.h>

int rbs(int arr[], int l, int r, int k) {
int mid = (l+r)/2;
if(k == a[mid]) {
return mid;
} else if(k < a[mid]) {
return rbs(arr[], l, mid-1, k)
} else {
return rbs(arr[], mid+1, r, k)
}
}

main() {
int n,k;
printf("Enter the number of elements");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++) {
printf("\n Enter the element no %d ",i);
scanf("%d",&arr[i]); }
printf("Enter the number to search for");
scanf("%d",&k);
int l = arr[0];
int r = arr[n];
int o = rbs(arr[],l,r,k);
if(o != 0) {
printf("The element is found at %d",o);
} else {
printf("The element doesn't exists");
}
}
