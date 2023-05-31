#include<stdio.h>

//9. Write a program in C to display a pattern like a right angle triangle using an asterisk.
//
//The pattern like :
//
//*
//**
//***
//****

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
            printf(" *");
        }
        printf("\n");
    }



    printf("\n");


}
