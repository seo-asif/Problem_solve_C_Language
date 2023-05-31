

#include<stdio.h>


int main()
{
    int array[10] = {0};
    int secondArray[20]= {0};
    int unionArray[10]= {0};

    int n = 0,j;
    printf("Test Data");
    printf("\narray length in Array A :");
    scanf("%d",&n);


    //First Array Input
    int valuen = 1;
    for(int i=0; i<n; i++)
    {

        printf("Element - %d of A: ",valuen);
        scanf("%d",&array[i]);
        valuen++;

    }

    //Second Array Input
    int np = 0;
    printf("\n2nd Test Data");
    printf("\nArray length in Array B :");
    scanf("%d",&np);
    int valuep = 1;
    for(int i=0; i<np; i++)
    {

        printf("Element - %d of B: ",valuep);
        scanf("%d",&secondArray[i]);
        valuep++;

    }


    printf("\nExpected Output: ");

    //Print First Array
    printf("\nArrayA : ");
    for(int i=0; i<n; i++)
    {

        printf("%d ", array[i]);

    }


    //Print Second Array
    printf("\nArray B : ");

    for(int i=0; i<np; i++)
    {
        printf("%d ", secondArray[i]);

    }
    //Union

    //Copy A set element in union set
    int k = 0;
    for(int i=0; i<n; i++)
    {

        unionArray[i]=array[i];
        k++;

    }
    printf("\n Copied A set %d: ",k);

    // Union Set
    int flag=0;
    for(int i=0; i<k; i++)
    {

        for( j=0; j<np; j++)
        {
            flag=1;

            if(secondArray[j]==unionArray[i])
            {

                flag=0;

            }


        }
        if(flag==1)
        {
            unionArray[k]=secondArray[j];
            k++;

        }

    }


    printf("\n Union Second Count: %d",k);
    printf("\n ");

    for(int i=0; i<k; i++)
    {


        printf("%d ",unionArray[i]);
    }








}
