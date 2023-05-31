#include<stdio.h>


int main()
{
    int input1=0,input2=0,n=0,r=0;

    printf("please give First input ?: ");
    scanf("%d",&input1);

    printf("please give Second input ?: ");
    scanf("%d",&input2);

int nfactorial=1;
int rfactorial=1;
int nrfactorial=1;
int result=0;

    for(int i=1; i<=input1; i++)
    {
        nfactorial*=i;
//     printf("\n %d",nfactorial);

    }
    if(input1>=input2){


        for(int j=1; j<=input2; j++)
    {
        rfactorial*=j;

       // printf("\n %d",rfactorial);
    }

       for(int k=1; k<=input1-input2; k++)
    {
        rfactorial*=k;

       // printf("\n %d",nrfactorial);
    }


    }else ("\nPlease Try again");



    result = (nfactorial)/(rfactorial*nrfactorial);
      printf("\n %d",result);

}
