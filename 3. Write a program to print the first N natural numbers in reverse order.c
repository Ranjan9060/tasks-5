#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter a Number :");

    scanf("%d",&num);
    
   for(i=1;i<=num;i++)
   {

    printf("%d ",num+1-i);

   }

    return 0;

}