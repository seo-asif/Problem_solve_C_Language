
#include<stdio.h>

//7. Write a program in C to display the multiplier table vertically from 1 to n.
//Test Data :
//Input upto the table number starting from 1 : 8
//Expected Output :
//Multiplication table from 1 to 8
//1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8


int main()
{
    int input1 = 0;
    printf("Input Test Data starting from: ");
    scanf("%d",&input1);

    int input2 = 0;
    printf("Input Test Data to: ");
    scanf("%d",&input2);

    if(input1>input2)
    {
        printf("try again");
    }

    for(int i = 1; i <= 10 && input2>input1; i++)
    {


        for( int j = 1; j <= input2; j++)
        {
            int result2 = i*j;
            printf("%dX%d=%d\t",j,i,result2);

        }
        printf("\n");
    }




}
