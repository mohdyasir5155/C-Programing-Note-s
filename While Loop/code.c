#include<stdio.h>
int main()
{
    int p,  n, count;
    float r, Si ;
    count = 1;
    while(count <= 3)
    {
        printf("Enter the value of n , p , &r");
        scanf("%d %d %f", &p, &n, &r);

        Si = p * n * r / 100;
        printf("Simple interest = Rs: %f", Si);
        count = count + 1; 
        
    }
    return 0;
}