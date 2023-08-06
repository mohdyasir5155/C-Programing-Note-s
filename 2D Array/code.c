#include<stdio.h>
int main()
{
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    matrix [0][0] = 9;

    printf("%d", matrix[0][0]); //Now output is 9 instead of 1 

    return 0;
}

//By Mohd Yasir Sheikh😉