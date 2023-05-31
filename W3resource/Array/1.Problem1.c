
#include<stdio.h>

//1. Write a program in C to store elements in an array and print them.
//Test Data :
//Input 10 elements in the array :
//element - 0 : 1
//element - 1 : 1
//element - 2 : 2
//.......
//Expected Output :
//Elements in array are: 1 1 2 3 4 5 6 7 8 9

int main()
{
    int array[10] = {0};

    int n = 0;
    printf("Test Data");
    printf("\nPlease give the length of array :");
    scanf("%d",&n);
    int value = 1;

    for(int i=0; i<n; i++)
    {

        printf("Element - %d: ",value);
        scanf("%d",&array[i]);
        value++;

    }
     printf("\nExpected Output: ");
    printf("\nElements in array are: ");

    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }

}
