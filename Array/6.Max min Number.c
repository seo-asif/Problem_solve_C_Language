#include<stdio.h>

int main()
{
    int array[10] = {0};

    int n = 0;
    printf("Please give the length of array :");
    scanf("%d",&n);
    int value = 0;

    for(int i=0; i<n; i++)
    {
        printf("Give the value %d: ",value);
        scanf("%d",&array[i]);
        value++;
    }
    int indexMaxNumber=0,indexMinNumber=0;

    int max=array[0];
    int min=array[0];


    printf("\nThe result: ");
    for(int i=0; i<n; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            indexMaxNumber=i;

        }

    }
    for(int i=0; i<n; i++)
    {
        if(array[i]<min)
        {
            min=array[i];
            indexMinNumber=i;

        }

    }
    printf("\n");
    printf("Maximum input value: %d, index: %d",max,indexMaxNumber);
    printf("\nMinimum input value: %d, index: %d",min,indexMinNumber);
    printf("\n");
    system("pause");
    main();
}


//    if(i<min){
//
//    min+=i;
//    indexMinNumber=array[i];
//
//    printf("Min: %d   index: %d",min,indexMinNumber);
//
////
////    }
//
//    }
//
//
//  // printf ("%d",array);
//
//
//}


