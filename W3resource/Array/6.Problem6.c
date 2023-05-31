
#include<stdio.h>

//6. Write a program in C to print all unique elements in an array.
//Test Data :
//Print all unique elements of an array:
//------------------------------------------
//Input the number of elements to be stored in the array: 4
//Input 4 elements in the array :
//element - 0 : 3
//element - 1 : 2
//element - 2 : 2
//element - 3 : 5
//Expected Output :
//The unique elements found in the array are:
//3 5

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
   printf("\nThe unique elements found in the array are: ");

for( int i=0;i<n;i++){
         int result=0;

    for(int j=i+1;j<n;j++){
        if(i!=j){

            if(array[i]==array[j]){
                result++;
            }
        }

}

if (result==0){
    printf("%d ",array[i]);
}

}

}

