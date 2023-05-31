#include<stdio.h>




int isPrime(int number)
{
    if(number<1)
    {
        return 0;
    }


    for(int i=2; i*i<=number; i++)
    {
        if(number%i==0)
        {
            return 0;
        }
    }
    return 1;
}



int main (){

    int a;
    printf("Please give the number: ");
    scanf("%d",&a);



if (isPrime(a)){

    printf("%d is a prime number",a);
}   else {
    printf("%d is not a prime number",a);

}

}
