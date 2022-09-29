#include <stdio.h>
#include<stdbool.h>

int main()
{
    int i=0, number;
    int count=10000;
    int ans=0;
    printf("Enter your number:");
    scanf("%d",&number);
    printf("your number is %d\n",number);
    while(number>10)
    {
        if((number/count)==(number%10))
        {
            ans=1;
        }
        else
        {
            ans=0;
            break;
        }
        number=number%count;
        number=number%10;
        count=count/100;
    }
    printf( "The value is %d palindrom",ans);
}
