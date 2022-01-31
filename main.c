#include <stdio.h>
#include <stdlib.h>
void horizontal(int i){
    for (int x=0;x<i;x++){
        printf(" *");
    }
}
void Vertical(int i){

    for (int x=0;x<i;x++){
        printf("*\n");
    }

}
void Triangle(int r){
   int i, o;
   for (i = 1; i <= r; ++i) {
      for (o= 1;o<= i; ++o) {
         printf("* ");
      }
      printf("\n");
   }
}

void Rectangle(int r){


int i, o;

    for(i = 0; i < r; i++)
    {
        for(o = 0; o < r; o++)
	{
           printf("* ");
        }
        printf("\n");
    }

}


int main()
{
    printf("Please Enter the Number of the stars you want to make shapes with:\n");
    int x;
    scanf("%x",&x);
    printf("The horizontal Line :");
    horizontal(x);
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    printf("\n The Vertical Line :\n");
    Vertical(x);
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    printf("\n The Triangle :\n");;
    Triangle(x);
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    printf("The Rectangle :\n");
    Rectangle(x);
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    printf("\tThanks for using my program and Have a Good day!");
    printf("\n\t\tCredits: Seif Ibrahim");
    printf("\n\t\tProf: Jalal Kiswani and Eng: Hana Alrasheed\n\n\n ");

    return 0;
}
