#include<stdio.h>



int fact(int num);

int main (){

 int a;
    printf("Please give the series length: ");
    scanf("%d",&a);

    int sum=0;

    for(int i=1;i<=a;i++){
        sum+=fact(i)/i;
    }
    printf("The sum of the series is :%d",sum);
}

int fact(int num){
int f=1;
for(int i=1;i<=num;i++){

    f*=i;
}

return f;

}
