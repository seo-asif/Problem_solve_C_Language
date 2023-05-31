
#include<stdio.h>


int main()
{
    int input=0,i=0;
    printf("please give input ?: ");
    scanf("%d",&input);
    int term =0;
    int sum=0;


    for(i=input; i!=0;)
    {
        int reminder=0;

        reminder=i%10;
        i/=10;

        term=term*10+reminder;

    }


    if( term==input){

       printf("\n   Congratulation You give plaindrome number %d",term);
    }else{
    printf("\n try again  %d",term);
    }
}




