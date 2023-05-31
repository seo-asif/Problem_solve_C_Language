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
        printf("Give the input %d: ",value);
        scanf(" %d",&array[i]);
        value++;
    }

    int desiredInput = 0;
    printf("Please give The search input :");
    scanf("%d",&desiredInput);

    int arrayLength=0;

    printf("Found index Position ");
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        if(desiredInput==array[i] && flag == 0){
            printf("%d", i);
            flag = 1;
        }
        else if(desiredInput==array[i])
        {
            arrayLength++;
            // myArray[i]=desiredInput;
            printf(", %d",i);
        }


    }


    //printf("%d ",arrayLength);
    printf("\n");
    system("pause");
    main();

}



