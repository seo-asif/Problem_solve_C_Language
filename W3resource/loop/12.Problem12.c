#include<stdio.h>

//12. Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.
//
//The pattern like :
//
//   1
//   2 3
//   4 5 6
//   7 8 9 10



int main()
{
    int input = 0;
    printf("Input Pattern Value : ");
    scanf("%d",&input);
    printf("\n");
    int a=1;

 for(int i = 1; i <= input; i++)
    {


        for(int j = 1; j <= i; j++)
        {
            printf(" %d",a++);
        }
        printf("\n");
    }



    printf("\n");





}

