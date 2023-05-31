#include<stdio.h>

int  main()
{
    int n=0;

    int  array[10]= {0};
    int value=1;


    printf("Enter the length of Array: ") ;
    scanf("%d",&n) ;


    for(int i=0; i<n; i++)
    {
        printf("Enter the elements %d of %d :",value,n) ;
        scanf("%d",&array[i]) ;
        value++;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(array[i]>array[j])
            {
                int   temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("Elements sorted in ascending order are\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",array[i]) ;
    }
}
