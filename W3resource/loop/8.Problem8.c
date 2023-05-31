
#include<stdio.h>

//8. Write a C program to display the n terms of odd natural numbers and their sum.
//Test Data
//Input number of terms : 10
//Expected Output :
//The odd numbers are :1 3 5 7 9 11 13 15 17 19
//


int main()
{
    int input = 0;
    printf("Input Test Data : ");
    scanf("%d",&input);
    int sum = 0;
    printf("\n\nInput number of terms : %d ",input);
    printf("\nExpected Output ");
    for( int i = 1; i <= nput; i++)
    {

        int number = 2*i-1;
        sum += number;

        printf("%d ",number);

    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d",input,sum);
    printf("\n\n");
}
