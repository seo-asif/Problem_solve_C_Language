#include<stdio.h>


int main(){

int a =0;
printf("Enter a number:");
scanf("%d",&a);

int temp=a;

while (temp>1){
    if(temp%2!=0){
       printf("%d is not power of 2",a);
        return 0;
    }else{
    temp/=2;
    }
}


printf("%d is power of 2",a);
return 0;
}



