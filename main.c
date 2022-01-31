#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,f,c;
    printf("Enter  number to figure the prime numbers:");
    scanf("%d",&a);
    for(b=1; b<=a; b++)
    {
    f=0;
    for(c=1; c<=a; c++)
    {
    if(b%c==0)
    f++;
    }
    if(f==2)
    printf("%d," ,b);
    }

   return 0;
}
