
#include<stdio.h>

//5. Write a program in C to display the cube of the number up to an integer.
//Test Data :
//Input number of terms : 5
//Expected Output :
//Number is : 1 and cube of the 1 is :1
//Number is : 2 and cube of the 2 is :8
//Number is : 3 and cube of the 3 is :27
//Number is : 4 and cube of the 4 is :64
//Number is : 5 and cube of the 5 is :125


int main()
{
    int input = 0;
    printf("Test Data :");
    scanf("%d",&input);
    int cube = 0;
    printf("Input number of terms: %d",input);
    printf("\n\nExpected output:");
    for (int i = 1; i <= input; i++)
    {
        cube = i*i*i;
        for(int j = 1; j <= i; j++)
        {
            cube = j*j*j;
        }
        printf("\nThe number is: %d  and cube of %d is : %d",i,i,cube);
    }


}


