#include <stdio.h>

struct student{
        int rollno;
        char name[25];
        int percent;
}

main(){
        struct student s[4];
        for(int i=0; i<5; i++) {
                scanf("%d",&s[i].rollno);
                scanf("%s",s[i].name);
                scanf("%d",&s[i].percent);
        }

        for(int i=0; i<5; i++) {
                printf("Rollno : %d\n",s[i].rollno);
                printf("Name   : %s\n",s[i].name);
                printf("Marks  : %d \n",s[i].percent);
                printf("----------------\n");
        }
}
