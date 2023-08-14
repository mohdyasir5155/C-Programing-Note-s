#include<stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    
    /*
    arr[0] = 10
    arr[1] = 20
    arr[2] = 30
    arr[3] = 40
    arr[4] = 50
    */
    
    for(i=0; i<5; i++){
        printf("The value of arr[%d] is %d\n", i, arr[i]);
        }
    
    return 0;
}