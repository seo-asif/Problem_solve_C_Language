
#include<stdio.h>

//6. Write a program in C to display the multiplication table for a given integer.
//Test Data :
//Input the number (Table to be calculated) : 15
//Expected Output :
//15 X 1 = 15
//...
//...
//15 X 10 = 150


int main()
{
    int input = 0;
    printf("Test Data :");
    scanf("%d",&input);


   for (int i = 1; i <= 10; i ++){

    int result = input * i;

 printf("\n%d X %d = %d",input,i,result);
    }


   }

