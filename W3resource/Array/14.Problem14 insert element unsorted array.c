#include<stdio.h>


//14. Write a program in C to insert values in the array (unsorted list).
//Test Data :
//Input the size of array : 4
//Input 4 elements in the array in ascending order:
//element - 0 : 1
//element - 1 : 8
//element - 2 : 7
//element - 3 : 10
//Input the value to be inserted : 5
//Input the Position, where the value to be inserted :2
//Expected Output :
//The current list of the array :
//1 8 7 10
//After Insert the element the new list is :
//1 5 8 7 10


int main()
{
    int arr[10] = {0};

    int n = 0,i,j;
    int value=0,pos=0;

    printf("\nPlease give the length of array :");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Element %d of array :",i+1);
        scanf("%d",&arr[i]);
    }
     printf("\nPlease give position of the number :");
    scanf("%d",&pos);
    printf("\nPlease give number you want to insert :");
    scanf("%d",&value);


    for(i=n-1;i>pos-1;i--){

        arr[i+1]=arr[i];
        arr[pos-1]=value;
    }

    printf("\nThe final array after number insertion is :");

    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}
