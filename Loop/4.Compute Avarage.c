
#include<stdio.h>

int main(){

int a=0,i=0,b=0,c=0;

int sum=0;

printf("please give how many number you want to avarage: ");
scanf("%d",&a);
 c=a;

for(i=0;i<a;i++){

    printf("please enter value %d: ",c);
scanf("%d",&b);
sum+=b;
c--;

}
float avarage=(float)sum/a;
printf("\n The average is %.2f : ",avarage);
}
