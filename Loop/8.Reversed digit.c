#include<stdio.h>

int main()
{

    int input=0, inverse=0, result,i=0;

    printf("Player1 please give secret number: ");
    scanf("%d",&input);


    for(i=input; i!=0; )
    {

        int reminder=i%10;

        i/=10;

        printf("%d",reminder);


    }
}
