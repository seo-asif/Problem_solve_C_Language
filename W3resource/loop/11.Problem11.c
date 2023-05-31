#include<stdio.h>

//11. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.
//
//The pattern like :
//
// 1
// 22
// 333
// 4444



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
            printf(" %d",i);
        }
        printf("\n");
    }



    printf("\n");





}

