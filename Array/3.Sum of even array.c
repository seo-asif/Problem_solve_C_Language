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

    for(int i=0; i<n; i++)
    {
        if( array[i]%2==0)
        {
            printf("\n %d ", array[i]);
            sum+=array[i];
        }
    }

    printf("\n\n The sum is : ");
    printf ("%d",sum);

    printf("\n");
    system("pause");
    main();


}

