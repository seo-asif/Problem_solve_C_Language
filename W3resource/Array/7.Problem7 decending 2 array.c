#include<stdio.h>


int main()
{

    int array[10] = {0};
    int secondArray[20]= {0};
    int mergedArray[10]= {0};

    int n = 0;
    printf("\nArray length in Array A :");
    scanf("%d",&n);


    //First Array Input
    for(int i=0; i<n; i++)
    {

        printf("Element - %d of A: ",i+1);
        scanf("%d",&array[i]);

    }

    //Second Array Input
    int np = 0;
    printf("\n2nd Test Data");
    printf("\nArray length in Array B :");
    scanf("%d",&np);

    for(int i=0; i<np; i++)
    {
        printf("Element - %d of B: ",i+1);
        scanf("%d",&secondArray[i]);

    }

    //Size of array

    int nt=n+np;


    //Insert in Array A and B in Third Array

    int t=0;
    for(int i=0; i<n; i++)
    {


        mergedArray[t]=array[i];
        t++;
    }

    for(int j=0; j<np; j++)
    {


        mergedArray[t]=secondArray[j];
        t++;
    }

    for (int i=0; i<nt; i++)
    {     int temp=0;
        for(int j=0; j<nt-1; j++)
        {

            if(mergedArray[j]<=mergedArray[j+1])

            {   temp=mergedArray[j+1];
                mergedArray[j+1]=mergedArray[j];
                mergedArray[j]=temp;

            }
        }

    }

// Merged Array C

    for(int i=0; i<nt; i++)
    {
        printf("%d ",mergedArray[i]);
    }



}
