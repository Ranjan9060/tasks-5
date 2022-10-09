#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a Number :");

    scanf("%d",&num);

    while(num!=0)
    {

        printf("%d ",num*2-1);

        num--;

    }

    return 0;
}