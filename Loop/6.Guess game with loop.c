
#include<stdio.h>

int main(){

int PlayerOne=0,guessNumber=0,chance=3,c=3;

printf("Player1 please give secret number: ");
scanf("%d",&PlayerOne);
   printf("Player2 guess the number %d out of 3: ",chance);
   scanf("%d",&guessNumber);

int i;
for(i=chance;i>0;i--){
     c--;
    if (guessNumber==PlayerOne){
        printf("Yess...You win the game");
        return 0;
    } else{
        if (c>0){

                printf("Player2 guess the number %d out of 3: ",c);
    scanf("%d",&guessNumber);

        }else{
        printf("You lost");
        }


    }


}


}
