#include<stdio.h>

int main(){
     int array[10] = {0};

    int n = 0;
    printf("Please give the length of array :");
    scanf("%d",&n);
    int value = n;

    for(int i=0;i<n;i++){

        printf("Give the value %d: ",value);
        scanf("%d",&array[i]);
        value--;

    }
    printf("\nThe array is : ");
 for(int i=n-1; i>=0; i--)
    {
        printf("%d ", array[i]);
    }


  // printf ("%d",array);


}
