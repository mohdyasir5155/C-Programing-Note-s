#include <stdio.h>
int a;
int b;
int main()
{
extern int a , b; 
printf("%d",a , b);
}
