
#include<stdio.h>

//4. Write a program in C to copy the elements of one array into another array.
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 15
//element - 1 : 10
//element - 2 : 12
//Expected Output :
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12

int main()
{
    int array[10] = {0};
    int secondArray[20]= {0};

    int n = 0;
    printf("Test Data");
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);

    int value = 1;

    for(int i=0; i<n; i++)
    {

        printf("Element - %d: ",value);
        scanf("%d",&array[i]);
        value++;

    }
    printf("\nExpected Output: ");
    printf("\nThe elements stored in the first array are : ");

    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
         secondArray[i]=array[i];
    }
    printf("\nThe elements copied into the second array are : ");
    for(int i=0; i<n; i++)
    {

        printf("%d ", secondArray[i]);

    }
}

