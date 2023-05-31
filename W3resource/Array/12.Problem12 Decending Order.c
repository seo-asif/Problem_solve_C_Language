#include<stdio.h>


//10. Write a program in C to separate odd and even integers into separate arrays.
//Test Data :
//Input the number of elements to be stored in the array :5
//Input 5 elements in the array :
//element - 0 : 25
//element - 1 : 47
//element - 2 : 42
//element - 3 : 56
//element - 4 : 32
//Expected Output :
//The Even elements are :
//42 56 32
//The Odd elements are :
//25 47


int main()
{
    int arr[10] = {0};

    int n = 0,i,j;

    printf("\nPlease give the length of array :");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Element %d of array :",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        int temp=0;
        for(j=i+1;j<n;j++){

            if(arr[i]<=arr[j]){


                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }

    printf("\n Even ");

    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }


}


