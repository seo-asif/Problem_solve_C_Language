
#include<stdio.h>

//3. Write a program in C to find the sum of all elements of the array.
//Test Data :
Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 2
//element - 1 : 5
//element - 2 : 8
//Expected Output :
//Sum of all elements stored in the array is : 15


int main()
{
    int array[10] = {0};

    int n = 0;
    printf("Test Data");
    printf("\nInput the number of elements to store in the array :");
    scanf("%d",&n);
    int value = 1;
    int sum=0;

    for(int i=0; i<n; i++)
    {

        printf("Element - %d: ",value);
        scanf("%d",&array[i]);
        value++;

    }

    for(int i=0; i<=n; i++)
    {
        sum+=array[i];
    }
    printf("\nExpected Output: ");
    printf("\nSum of all elements stored in the array is : %d",sum);
}


