#include<stdio.h>

//10. Write a C program to display a pattern like a right angle triangle with a number.
//
//The pattern like :
//
//1
//12
//123
//1234



int main()
{
    int input = 0;
    printf("Input Pattern Value : ");
    scanf("%d",&input);
    printf("\n");

 for(int i = 1; i <= input; i++)
    {


        for(int j = 1; j <= i; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }



    printf("\n");





}
