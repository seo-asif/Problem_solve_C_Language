#include<stdio.h>


int main(){
int year =0;
printf("Please give year: ");
scanf("%d",&year);



if(year%4==0 && year%100!=0|| year%400==0){

printf("%d \t This is a leap year",year);

} else{
printf("%d \t This is not leap year",year);}
}
