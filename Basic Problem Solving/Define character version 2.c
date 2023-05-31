#include<stdio.h>


int main(){

char input;
printf("Please give character: ");
scanf("%c",&input);


if ((input>=65 && input<=90)|| (input>=97 && input<=122)){
    printf("%c is a Alphabet",input);
}else if (input>=48 && input<=57){
    printf("%c is a Digit",input);
}else{
printf("%c is a character",input);}
}
