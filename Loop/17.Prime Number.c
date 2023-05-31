
#include<stdio.h>


int main()
{
   int input=0;
    printf("please give value of X ?: ");
    scanf("%d",&input);
    for(int i=2;i<input;i++){

            if(input%i==0 ){


                printf("\n not prime");
                return 0;
            }



    }

    printf("\n prime");
}
