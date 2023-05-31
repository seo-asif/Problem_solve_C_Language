#include<stdio.h>

int main(){

int a=0;

printf("please give how many number you want: ");
scanf("%d",&a);

int i;
int b;
for(i=1;i<=a;i++){
    int binary;
    for(b=0;b<=i;b++){
       binary=b%2;

    }

printf("%d, ", binary);

}

return 0;
}



