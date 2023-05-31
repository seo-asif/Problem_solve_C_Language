#include<stdio.h>

int main (){

int player1=0;
int chance=3;

printf("Player1 Give your Secret Number:");
scanf("%d",&player1);

int guessnumber=0;
printf("Player2 give your guess number %d out of 3:",chance);
scanf("%d",&guessnumber);


if (guessnumber == player1){
    printf("\nRight! Your answer is correct");
    return 0;
}else{
    chance--;
    printf("Player2 give your guess number %d out of 3:",chance);
    scanf("%d",&guessnumber);
    if(guessnumber == player1){
    printf("\nRight! Your answer is correct");
    return 0;
}else{
chance--;
    printf("Player2 give your guess number %d out of 3:",chance);
    scanf("%d",&guessnumber);
    if(guessnumber == player1){
    printf("\nRight! Your answer is correct");
    return 0;


}else{
 printf("\You loose the game");
    return 0;

}

}
}
}
