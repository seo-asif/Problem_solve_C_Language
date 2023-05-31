#include<stdio.h>

int main(){

int a=0;
int b=0;
char d;
printf("give first number: ");
scanf("%d",&a);
printf("give second number: ");
scanf("%d",&b);

printf("which operation you want to perform: ");
scanf(" %c",&d);


int add=a+b;
int sub= a-b;
float div =a/b;
int mul= a*b;

if(d=='+'){
    printf("\nAddition: The result is %d",add);
    return 0;
}else if(d=='-'){
    printf("\nSubstraction: The result is %d",sub);
      return 0;
}else if(d=='*'){
    printf("\nMultiplication: The result is %d",mul);
      return 0;
}else if(d=='/' && b!=0){
    printf("\nDivision: The result is %f",div);
      return 0;}
else if (d=='/'&& b==0){
    printf("\n Please don/'t use zero as second number in disivion operation");
      return 0;
}
else {
    printf("\nPlease Give +,-,/ and * operator");
      return 0;
}


}
