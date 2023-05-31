#include<stdio.h>

int main()
{
    int array[10] = {0};
    int n = 0;
    printf("Please give the length of array :");
    scanf("%d",&n);
    int value=n;

    int sum =0;
    for(int i=0; i<n; i++)
    {
        printf("Give the value %d: ",value);
        scanf("%d",&array[i]);
        value--;

    }

    for(int i=0; i<=n; i=i+2)
    {
        sum+=array[i];

        printf("\nThe  : %d",sum);
    }

    printf("\nThe sum of even indexed integer is  is : %d",sum);
}
