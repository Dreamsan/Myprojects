#include <stdio.h>
#include <stdlib.h>
int menu () //This function displays the menu of the available items
{
//prints the menu on the main screen of the cmd
      printf("\n1- Apple");
    printf("\t\t$1.00\n");
    printf("2- Banana");
    printf("\t\t$1.50\n");
    printf("3- Orange");
    printf("\t\t$2.00\n");
    printf("4- Salad");
    printf("\t\t$3.00\n");
    printf("5. Quit\n");
    return menu;
}
void FoodSelected(int selection) //This function display the items selected this function also allows you to select an item to purchase
{

    switch( selection )
    {
    case 1:
        printf("You have selected Apple");
         printf("\t\t$1.00\n");break;

    case 2:
        printf("You have selected Banana");
         printf("\t\t$1.50\n");break;

    case 3:
        printf("You have selected Orange");
         printf("\t\t$2.00\n");break;

    case 4:
        printf("You have selected Salad");
         printf("\t\t$3.00\n");break;

    case 5: ;break;
    }

}
double ItemCost(int selection) //This function returns the price of the selected item
{
    double y;
    switch( selection ) //saves the money
    {
    case 1 :
        y= 1.00;
        return y;
    case 2 :
        y=1.50;
        return y;
    case 3 :
        y=2.00;
        return y;
    case 4 :
        y=3.00;
        return y;
    }
}
double totalprice(double price,int quantity) //This function calculates the total price of the selected item (price * quantity)
{
    double total;
    total=price * quantity;
    return total;
}
double EnteredMoney(double money, double sum) //This function returns the change
{
    double Change;
    Change=money-sum;
    return Change;
}
int main() //shows the main screen on CMD
{
    FILE *receipt  ; // Define FILE with name
    receipt  = fopen( "Receipt.txt", "w" ) ; // open file, make it w to allow the user to do changes
    fprintf(receipt ,"The receipt info of the selected item is :\n -----------------------------------------------------------------------------------");
    fprintf(receipt ,"\n\nItem      Price          Quantity         Total        Paid money      Change\n");
    fprintf(receipt ," -----------------------------------------------------------------------------------\n\n");
    int Item,Quantity;
    float Sum=0.0,Change;
    float Money;
    printf("Welcome to HTU's Vending machine\n");
    for (int count; 1; count)
    {
        printf("MENU:\n");
        menu();



        printf("\nPlease enter your selection: ");
        scanf("%d",&Item);
        if(Item>5)
        {
            printf("\nWrong selection!\n\n");
        }
        if(Item<5)
        {
            FoodSelected(Item);
            if(Item==1)
            {
                fprintf(receipt ,"Apple"); fprintf(receipt,"\t$1.00");
            }
            else if(Item==2)
            {
                fprintf(receipt ,"Banana"); fprintf(receipt,"\t$1.50");
            }
            else if(Item==3)
            {
                fprintf(receipt ,"Orange"); fprintf(receipt,"\t$2.00");
            }
            else if(Item==4)
            {
                fprintf(receipt ,"Salad"); fprintf(receipt,"\t$3.00");
            }
            ItemCost(Item);
            printf("\n\nHow many items you need\n");
            scanf("%d",&Quantity);
            fprintf(receipt ,"          %d",Quantity);
            Sum=(Sum)+(totalprice(ItemCost(Item),Quantity));
            fprintf(receipt ,"                       $%.2f \n\n",totalprice(ItemCost(Item),Quantity));
            printf("------------------------\n");
        }
        if(Sum<=0&&Item==5)
        {
            printf("Thank you for using the vending machine!");
            exit(9);

        }
        if (Sum>0&&Item==5)
        {
            fprintf(receipt ," ------------------------------------------------------------------------------------");
            printf("Please enter your money\n");
            scanf("%f",&Money);
            Change=EnteredMoney(Money,Sum);
            fprintf(receipt ,"\n\n\n\n                                                  $%.2f ",Money);
            fprintf(receipt ,"             $%.2f",Change);
            printf("\n Thank you for your payment,please check the receipt in the main folder.");
            receipt= fclose;
            exit(0);
        }
         }
     return 0;
}
