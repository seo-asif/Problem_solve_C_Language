
#include<stdio.h>



int main()
{
    int array[10] = {0};

    int n = 0;

    printf("\nInput the number of elements to store in the array :");
    scanf("%d",&n);

    int value = 1;

     for(int i=0; i<n; i++)
    {

        printf("Element - %d: ",value);
        scanf("%d",&array[i]);
        value++;

    }

 printf("\nExpected Output: ");
   printf("\nThe unique elements found in the array are: ");

for( int i=0;i<n;i++){
         int result=0;

    for(int j=i+1;j<n;j++){
        if(i!=j){

            if(array[i]==array[j]){
                result++;
            }
        }

}

if (result==0){
    printf("%d ",array[i]);
}

}

}


