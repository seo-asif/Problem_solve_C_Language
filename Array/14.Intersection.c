

#include<stdio.h>


int main()
{
    int array[10] = {0};
    int secondArray[20]= {0};
    int intersectArray[10]={0};

    int n = 0;
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
    //Intersect
    int intersectlength=0;
    int k = 0;
    for(int i=0;i<n;i++){
//

        for(int j=0;j<np;j++){


            if(secondArray[j]==array[i]){


                intersectArray[k]=array[i];
                k++;
                intersectlength++
            }
        }
    }

    printf("\n The intersect Array length : %d ",intersectlength);

  printf("\nThe intersect result : ");

   for(int k=0;k<intersectlength;k++){


      printf("%d ",intersectArray[k]);

   }
}

