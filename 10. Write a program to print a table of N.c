#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter first table Number:");

    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        printf("%d\n",num*i);
    }

    return 0;

}