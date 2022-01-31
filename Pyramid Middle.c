#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,x,y,z;
    printf("Enter the number of the rows:\n");

    scanf("%d",&num);

    for(x=1;x<=num;x++){
      for(y=1;y<=(num-x);y++)
            printf(" ");
      for(z=1;z <=(2*x-1);z++)
            printf("*");
            printf("\n");




    }


    return 0;
}
