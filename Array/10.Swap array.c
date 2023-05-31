

#include<stdio.h>


int main()
{
    int array[10] = {0};
    int secondArray[20]= {0};
    int intersectArray[10]={};

    int n = 0;
    printf("Test Data");
    printf("\narray length in Array A :");
    scanf("%d",&n);

    int valuen = 1;

    for(int i=0; i<n; i++)
    {

        printf("Element - %d of A: ",valuen);
        scanf("%d",&array[i]);
        valuen++;

    }

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


    printf("\nArrayA : ");
    for(int i=0; i<n; i++)
    {

        printf("%d ", array[i]);

    }

    printf("\nArray B : ");

    for(int i=0; i<np; i++)
    {
        printf("%d ", secondArray[i]);

    }

    int intersectlength=0;

    for(int i=1;i<=n;i++){
//

        for(int j=1;j<=np;j++){


            if(array[j]==secondArray[i]){


                intersectArray[j]=array[j];
                printf("p");
                intersectlength++;
            }
        }
    }

  //   printf("%d ",intersectlength);

    printf("\nThe intersect result : ");

    for(int k=0;k<intersectArray;k++){

        printf("%d ",intersectArray[k]);


    }
}

