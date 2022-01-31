#include <stdio.h>
#include <stdlib.h>
int Menu ()
{

    printf("Welcome to the HTU Healthy Vending Machine\n");
    printf("Choose from one of the choices below:\n");
    printf("1- Apple");
    printf("\t\t1.00$\n");
    printf("2- Banana");
    printf("\t\t1.50$\n");
    printf("3- Orange");
    printf("\t\t2.00$\n");
    printf("4- Salad");
    printf("\t\t3.00$\n");
    printf("5-Quit\n");


    return 0;
}
void FoodSelected(int selection)
{

    printf("Please enter your selection :");
    scanf("%d",&selection);
    switch(selection)
    {
    case 1:
        printf("You have selected Apple"); printf("\t\t$1.00");
        break;
    case 2:
        printf("You have selected Banana"); printf("\t\t$1.50");
        break;
    case 3:
        printf("You have selected Orange"); printf("\t\t$2.0");
        break;
    case 4:
        printf("You have selected Salad"); printf("\t\t$3.0");
        break;
    case 5: printf("Thank you for using this program");break;


    }
    }















int main()
{
    int x;
    Menu();
    printf("Please enter your selection:");
    scanf("%d",x);
 FoodSelected(x);




    return 0;
}
