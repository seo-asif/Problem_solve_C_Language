#include<stdio.h>

int main()
{
    int array[10] = {0};

    int n = 0;
    printf("Please give the length of array :");
    scanf("%d",&n);
    int value = 1;

    for(int i=0; i<n; i++)
    {
        printf("Give the input %d: ",value);
        scanf(" %d",&array[i]);
        value++;
    }

    printf("\nThe expected array is: ");
    for(int i=0; i<n; i++)
    {
        if(array[i]%3==0)
        {

            printf("-1 ");
        }else{

         printf("%d ",array[i]);
        }




    }

}
