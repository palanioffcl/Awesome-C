#include <stdio.h>

struct info{
        int roll;
        char name[13];
};

void main() {
        struct info i1;
        i1.roll = 1;
        i1.name[13] = "Dennis Ritche";
        printf("Rollno   : %d\n",i1.roll);
        printf("C Author : %s\n",i1.name);
}
