#include<stdio.h>

int main(){

int a=0;
int b=0;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);

if(a==b){
    printf("%d is equal to %d",a,b);
}

if(a>b){
printf("%d is greater than %d",a,b);
} if(a<b){
printf("%d is less than %d",a,b);
}
}
