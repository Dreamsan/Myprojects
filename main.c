#include <stdio.h>

int main()
{
    int a,s;
    printf("Please enter your destination\n");
    printf("1-First Floor\n");
     printf("2-Second Floor\n");
       printf("3-Third Floor\n");
    scanf("%d",&a);
    switch(a){
    case 1: printf("you're heading towards the First floor");break;
    case 2:if(a=2){
        printf("Which section would you like to choose?\n");
        printf("1-Section One\n");
        printf("2-Section Two\n");
        scanf("%d",&s);
        switch(s){
        case 1:printf("you're heading towards the Second floor Section 1");break;
        case 2:printf("you're heading towards the Second floor Section 2");break;
        default: printf("Wrong selection");break;
        }

    }

    break;
    case 3: printf("you're heading towards the Third floor");break;
    default: printf("Wrong section");break;

    }


    return 0;
}
