#include<stdio.h>

int largeElement(int [],int);

int main (){
    int arr[10]={0};
    int n;
    printf("Please give the array length: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){

        printf("Element %d of %d :",i+1,n);
        scanf("%d",&arr[i]);
    }

    int maximum=largeElement(arr,n);

    printf("%d",maximum);
}


int largeElement(int arr1[],int n){

int maxim=arr1[0];


for(int i=1;i<=n;i++){

    if(maxim<=arr1[i]){
        maxim=arr1[i];
    }
}

return maxim;
}
