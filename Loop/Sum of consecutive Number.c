#include<stdio.h>


int main(){
int a=0;

printf("please give how many consecutive number you want to SUM?: ");
scanf("%d",&a);

int i;
int d =0;
for(i=0;i<=a;i++){

    d+=i;
    printf("%d ",d);
}

printf("\n The sum is %d",d);



}

