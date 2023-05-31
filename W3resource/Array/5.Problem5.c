
#include<stdio.h>

//5. Write a program in C to count the total number of duplicate elements in an array.
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 5
//element - 1 : 1
//element - 2 : 1
//Expected Output :
//Total number of duplicate elements found in the array is : 1

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
    int result=0;

 printf("\nExpected Output: ");
for( int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){


        if(array[j]==array[i]){

            result++;
            break;
        }
    }


}

    printf("Total number of duplicate elements found in the array: %d\n", result);
}
