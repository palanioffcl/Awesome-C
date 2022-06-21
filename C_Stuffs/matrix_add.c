#include <stdio.h>

void main() {
    int arr_a[3][3],arr_b[3][3],arr_c[3][3];
    
  printf("Enter the Element of A Array");
    for(int i=0; i<3; i++) {
      for(int i=0; i<3; i++) {
            scanf("%d",&arr_a[i][j]);
      }
    }
  printf("Enter the Element of B Array");
    for(int i=0; i<3; i++) {
      for(int i=0; i<3; i++) {
            scanf("%d",&arr_b[i][j]);
      }
    }
    for(int i=0; i<3; i++) {
      for(int i=0; i<3; i++) {
           arr_c[i][j] = (arr_a[i][j] + arr_b[i][j]);
      }
    }
  
    for(int i=0; i<3; i++) {
      for(int i=0; i<3; i++) {
           printf("%d",arr_c[i][j]);
      }
    }
  
}
