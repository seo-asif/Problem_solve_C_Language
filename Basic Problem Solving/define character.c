#include<stdio.h>


int main(){

char input;
printf("Please give character: ");
scanf("%c",&input);


if ((input>='a' && input<='z')|| (input>='A' && input<='Z')){
    printf("%c is a Alphabet",input);
}else if (input>='0' && input<='9'){
    printf("%c is a Digit",input);
}else{
printf("%c is a character",input);}
}
