#include<stdio.h>

int main(){

int firstNumber=0,secondNumber=0;

int sum=0;

printf("please give first number: ");
scanf("%d",&firstNumber);
printf("please give second number: ");
scanf("%d",&secondNumber);


if(firstNumber>secondNumber){
        int i=firstNumber;
    for(;i>secondNumber;i--){
      int j=i*i;

    printf("%d ",j);

    }

}else if (firstNumber<secondNumber){

        int i=firstNumber;
    for(;i<secondNumber;i++){
      int j=i*i;

    printf("%d ",j);

    }

}

printf("Reached");
}
