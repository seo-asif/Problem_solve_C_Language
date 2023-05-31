#include<stdio.h>


//15. Write a program in C to delete an element at a desired position from an array.
//Test Data :
//Input the size of array : 5
//Input 5 elements in the array in ascending order:
//element - 0 : 1
//element - 1 : 2
//element - 2 : 3
//element - 3 : 4
//element - 4 : 5
//Input the position where to delete: 3
//Expected Output :
//The new list is : 1 2 4 5


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

    if(pos>=n+1){
        printf("\nDeletion not possible .\nPlease give position number from 0 to %d\n",pos);
    }else{
    for(i=pos-1;i<n-1;i++){

        arr[i]=arr[i+1];

    }

    printf("\nThe final array after deletion is :");

    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    }

}

