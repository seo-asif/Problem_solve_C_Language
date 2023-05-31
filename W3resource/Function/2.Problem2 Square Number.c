#include<stdio.h>


int square(int);

int main(){
    int n=0;
    printf("Please give the number: ");
    scanf("%d",&n);

int squareResult= square(n);
printf("\n The square value is :%d",squareResult);
return 0;
}


int square(int n){

//int sq=n*n;
//return sq;
return n*n;

}
