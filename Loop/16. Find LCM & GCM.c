#include<stdio.h>


int main()
{
    int input1=0,input2=0,gcm=0,lcm;

    printf("please give First input ?: ");
    scanf("%d",&input1);

    printf("please give Second input ?: ");
    scanf("%d",&input2);


    for(int i=1; i<=input1 && i<=input2; i++)
    {

        if(input1%i==0&&input2%i==0)
        {
            gcm=i;

        }


        lcm=(input1*input2)/gcm;
    }

    printf("\n The greatest common divisor is %d: ",gcm);
    printf("\n The Least common multiple is %d: ",lcm);
    printf("\n\n");

}
