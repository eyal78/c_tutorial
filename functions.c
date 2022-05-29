
#include <stdio.h>

//Function without parameters that does not return a value.
void f1()
{
    printf("Good morning!\n");
}
//fromunction without parameters that returns a value
int f2()
{
    int x=3;
    int y=4;
    return x+y;
}
//
int main()
{
    int sum;
    f1();
    sum=f2();
    printf("%d",sum);
}

