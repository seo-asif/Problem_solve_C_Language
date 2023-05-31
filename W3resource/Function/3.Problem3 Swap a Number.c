#include<stdio.h>


int swap(int *p,int *q){
int temp;
temp=*p;
*p=*q;
*q=temp;
}

int main(){


int a=0,b=0;
    printf("Please give the 1st number: ");
    scanf("%d",&a);
    printf("\nPlease give the 2nd number: ");
    scanf("%d",&b);
    printf("Before swapping: a = %d, b = %d ",a,b);

    swap(&a,&b);
    printf("\nAfter swapping: a = %d, b = %d ",a,b);

}
