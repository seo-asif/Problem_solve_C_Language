#include<stdio.h>


int main()
{
    int input=0;
    printf("please give value of X ?: ");
    scanf("%d",&input);
    int sum=0;
    int term=0;

    for(int i=1;i<=input;i++){

        term =term*10 + i;
        sum =sum+term;

        printf("%d ",term);
         //printf("\n%d ",sum);

    }

    printf("\n\nTotal Sum %d ",sum);

}
