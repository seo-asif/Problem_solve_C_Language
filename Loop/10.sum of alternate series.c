
#include<stdio.h>


int main(){
int a=0;

printf("please give how many consecutive number/'s sum you want ?: ");
scanf("%d",&a);
int i;
int result=0;
for(i=1;i<=a;i++){

    if(i%2!=0){

        result+=i;
    }else{
    result+=-i;
    }
}
printf("\nThe sum is %d ",result);
}
