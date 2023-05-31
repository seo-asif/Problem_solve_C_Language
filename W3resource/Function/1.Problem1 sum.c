#include<stdio.h>


int sum(int ,int );


int main (){


int total=sum(5,6);
int total2=sum(11,6);
printf("\nThe total is %d",total);
printf("\nThe total is %d",total2);
return 0;

}


int sum(int a,int b){

int s=a+b;
return s;


}
