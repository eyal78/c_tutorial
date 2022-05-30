
#include <stdio.h>

//Function without parameters that does not return a value.
void f1()
{
    printf("Good morning!\n");
}
//function without parameters that returns a value
int f2()
{
    int x=3;
    int y=4;
    return x+y;
}
// function that accepts parameters and returns a value.
int f3(char names[],int age)
{
    printf("hello %s, you are %d years old.\n",names,age);
    return age/2;
}
int main()
{
    int sum;
    int half_age;
    f1();
    sum=f2();
    printf("%d\n",sum);
    half_age=f3("eyal",44);
    
}
