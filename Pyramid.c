#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,e;
    printf("Enter the number of the rows you want to draw the pyramid with :");
    scanf("%d",&a);

    for(b=1;b<=a;b++){

        for(c=1;c<=(a-b);c++)
            printf(" ");

        for(e=1;e <=(2*b-1);e++)
            printf("*");
    printf("\n");




    }


    return 0;
}
