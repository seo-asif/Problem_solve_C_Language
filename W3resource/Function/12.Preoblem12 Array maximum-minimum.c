#include<stdio.h>

int max(int [],int);
int min(int [],int);

int main()
{

    int arr[10]= {0};
    int n;
    printf("Please give the array length: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {

        printf("Element %d of %d :",i+1,n);
        scanf("%d",&arr[i]);
    }

    int maximum=max(arr,n);

    printf("The max element is %d",maximum);

    int minimum=min(arr,n);

    printf("\nThe min element is %d",minimum);
}


int max (int arr1[],int n)
{
    int i;
    int maxi=arr1[0];

    for( i=0; i<n; i++)
    {

        if(maxi<arr1[i])
        {
            maxi=arr1[i];
        }
    }


    return maxi;
}


int min (int arr1[],int n)
{
    int i;
    int mini=arr1[0];

    for( i=0; i<n; i++)
    {

        if(mini>arr1[i])
        {
            mini=arr1[i];
        }
    }


    return mini;
}
