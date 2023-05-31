#include<stdio.h>


//9. Write a program in C to find the maximum and minimum elements in an array.
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 45
//element - 1 : 25
//element - 2 : 21
//Expected Output :
//Maximum element is : 45
//Minimum element is : 21


int main()
{
    int arr[10] = {0};
    int n = 0,i,j;
    printf("\nPlease give the length of array :");
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{   printf("Element %d of array :",i+1);
		scanf("%d",&arr[i]);
	}


	int maxim=arr[0];
	int min=arr[0];
    //Maximum Element
	for(i=1;i<n;i++){

        if(maxim<arr[i]){
            maxim=arr[i];
        }
	}

	printf("\nMaximum element is : %d",maxim);
//Minimum Element
	for(i=1;i<n;i++){

        if(min>arr[i]){
            min=arr[i];
        }
	}

	printf("\nMinimum element is : %d",min);
}
