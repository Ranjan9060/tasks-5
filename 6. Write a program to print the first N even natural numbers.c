#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter a Number :");

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("%d ",i*2);
    }
      
      return 0;
      
}