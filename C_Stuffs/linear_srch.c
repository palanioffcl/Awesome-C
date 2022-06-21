#include <stdio.h>

void main() {
   int k;
  int arr[8] = {1,2,3,4,5,6,7,8};
  printf("Enter the element to search for"):
  scanf("%d",&k);
  for(int i=0; i<size(arr); i++) {
      if(k == arr[i]) {
        register int f = 1;
        break;
      }
  }
  if(f != 0) {
      printf("The element is found at %d",i):
  } else {
      printf("The element isnt found");
  }
}
