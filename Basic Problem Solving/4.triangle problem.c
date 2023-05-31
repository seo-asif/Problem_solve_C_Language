#include<stdio.h>

int main(){


int a=0;
int b=0;
int c=0;
printf("Enter First triangle angle:");
scanf("%d",&a);
printf("Enter Second triangle angle:");
scanf("%d",&b);
printf("Enter Third triangle angle:");
scanf("%d",&c);

int triangle = a+b+c;

printf("\n\n%d",triangle);
if(triangle==180 && a>0 && b>0 &&c>0){
    printf("\tThis is a valid triangle");
    return 0;
}else{
printf("\tThis is not a valid triangle");
return 0;}

}
