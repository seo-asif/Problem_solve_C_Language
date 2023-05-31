
#include<stdio.h>

//3. Write a program in C to display n terms of natural numbers and their sum.
//Test Data : 7
//Expected Output :
//The first 7 natural number is :
//1 2 3 4 5 6 7
//The Sum of Natural Number upto 7 terms : 28

int main()
{

    int input = 0;
    printf("Test Data :");
    scanf("%d",&input);

    int sum = 0;
    printf("The first %d natural number is : ",input);

    for(int i = 1; i <= input; i++)
    {
        printf("%d ",i);
        sum+ = i;

    }

    printf("\nThe sum of Natural number upto %d terms: %d ",input,sum);
}
