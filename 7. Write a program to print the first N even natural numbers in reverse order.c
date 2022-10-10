#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter a NUmber :");

    scanf("%d",&num);

    while(num!=0)
    {
        printf("%d ",num*2);

        num--;
    }
    
    return 0;

}