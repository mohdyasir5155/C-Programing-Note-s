#include<stdio.h>
void increment()
{
    static int x = 0;
    x++;
    printf("x = %d" , x);
}
int main()
{
    increment();
}