
#include<stdio.h>

//2. Write a program in C to read n number of values in an array and display them in reverse order.
//Test Data :
//Input the number of elements to store in the array :3
//Input 3 number of elements in the array :
//element - 0 : 2
//element - 1 : 5
//element - 2 : 7
//Expected Output :
//The values store into the array are :
//2 5 7
//The values store into the array in reverse are :
//7 5 2


int main()
{
    int array[10] = {0};

    int n = 0;
    printf("Test Data");
    printf("\nInput the number of elements to store in the array :");
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

    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", array[i]);
    }

}

