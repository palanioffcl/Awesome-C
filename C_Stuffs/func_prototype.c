#include <stdio.h>

void noret_noarg() {
    printf("Hey This is from no return and no argument");
}

int ret_noarg(){
    return 1;
}

void noret_arg(int a) {
   printf("The incoming argument you passed is %d",a);
}

int ret_arg(int a) {
  if(a < 0) {
    return abs(a);
}
  
void main() {
  int o = 1;
  noret_noarg();
  ret_noarg();
  int res = noret_arg(o);
  printf("The value of o is %d",o);
  int res= ret_arg(o);
  printf("The value of o is %d",o);
}
