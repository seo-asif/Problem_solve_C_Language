
#include<stdio.h>


int main(){

int a =0;
printf("Give the first number:");
scanf("%d",&a);
int b=0;
printf("Give the second number:");
scanf("%d",&b);
int choice=0;
printf("Give the choice of your operation between 1 to 4:");
scanf("%d",&choice);

int add=a+b;
int sub= a-b;
int div =a/b;
int mul= a*b;
int quo= a%b;


if (choice==1){
     printf("\nAddition: The result is %d",add);
    return 0;
}else if (choice==2){
     printf("\nSubstraction: The result is %d",sub);
    return 0;
}else if (choice==3){
     printf("\nMultiplication: The result is %d",mul);
    return 0;
}else if (choice==4 && b!=0){
     int choice2=0;
     printf("Give choice of your operation between 1 to 2:");
    scanf("%d",&choice2);
    if(choice2==1){
        printf("\nDivision: The quotient is %d",div);
    }if(choice2==2){
        printf("\nDivision: The quotient is %d",quo);
    }else{
        printf("\nPlease give proper choice");
    }
}else if (choice==4 && b==0){
     printf("Please Don\'t use zero when choosing option 4");
    return 0;
}
else{
printf("\nPlease give proper choice");}
}
