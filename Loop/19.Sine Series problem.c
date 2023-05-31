#include<stdio.h>


int main()
{
    int input=1,divider=1,term=0, j = 1;
    printf("please give value of X ?: ");
    scanf("%d",&input);
    printf("How many terms you want ?: ");
    scanf("%d",&term);

    double result = 0;
    for(int i=0;i<=term;i++, j += 2){

        double factResult = 1;
        double sqResult = 1;
        for ( int k=1;k<=j;k++){
         factResult = factResult * k;
        }
        for ( int k=1;k<=j;k++){
         sqResult = sqResult * input;
        }
        double divResult = sqResult / factResult;

        if(i % 2 == 0){
            result += divResult;
        }
        else{
            result -= divResult;
        }

    }
    printf("\n%lf", result);



}

