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

#include <stdio.h>
int main()
{
    char name[12];
    int i=0;
    int grade,sum=0;
    float average;
    printf("Please enter the student's name:");
    scanf("%s",name);
    while(i<5)
    {
        printf("please enter the %d grade:",i+1);
        scanf("%d",&grade);
        sum=sum+grade;
        i++;
    }
    average=sum/5;
    printf("The name of student is %s and average is %f.",name,average);
}
