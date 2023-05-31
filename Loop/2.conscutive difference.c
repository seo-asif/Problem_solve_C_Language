#include<stdio.h>


int main(){
int a=0,b=0;

printf("please give how many consecutive number you want ?: ");
scanf("%d",&a);
printf("please give how much difference you want ?: ");
scanf("%d",&b);

int i;
int d =0;
for(i=0;i<=a;i++){

    d+=b;
    printf("%d ",d);
}





}


