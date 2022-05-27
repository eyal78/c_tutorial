#include <stdio.h>

int main()
{
    int i;
    int j=0;
    printf("please enter your number:\n");
    scanf("%d",&i);
    while (j < i) 
    {
     printf("%d\n", j);
     j++;
    }
}
