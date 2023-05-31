
#include<stdio.h>

//4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
//Test Data :
//Input the 10 numbers :
//Number-1 :2
//...
//Number-10 :2
//Expected Output :
//The sum of 10 no is : 55
//The Average is : 5.500000

int main()
{

    int inputs = 0;
    printf("Test Data :");
    scanf("%d",&inputs);
    int sum = 0;

    for(int i = 1; i <= inputs; i++)
    {

        sum += i;
    }
    float avarage=(float)sum/inputs;

    printf("The toal sum of %d no is %d",inputs,sum);

    printf("\nThe Avarage is %.2f",avarage);

}

