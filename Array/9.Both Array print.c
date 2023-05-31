#include<stdio.h>


int main(){

int array[10]={0};

int n = 0;
    printf("Please give the length of array :");
    scanf("%d",&n);

    int value=0;
 for(int i=0; i<n; i++)
    {
        printf("Give the input %d: ",value);
        scanf(" %d",&array[i]);
        value++;
    }

    printf("Array A: ");
for(int i=0;i<n;i++){


   int a=array[i];

     printf("%d ",a);
}

printf("\nArray B: ");

for(int i=n-1;i>=0;i--){


    int b=array[i];

     printf("%d ",b);
}

printf("\n");
 system("pause");
 main();




}
