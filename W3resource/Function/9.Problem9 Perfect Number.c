#include<stdio.h>

int armstrong(int );
int perfect(int );

int main (){
    int n;
    printf("Please give the number: ");
    scanf("%d",&n);


    if (armstrong(n)){
        printf("\n The number %d is armstrong",n);
    }else{
        printf("\n The number %d is not armstrong",n);}

    if (perfect(n)){
        printf("\n The number %d is perfect",n);
    }else{
        printf("\n The number %d is not perfect",n);}

    return 0;
}

int armstrong(int n1){

    int sum=0;
    int num=n1;
    int reminder;

    while(num!=0){
        reminder=num%10;
        sum+=reminder*reminder*reminder;
        num=num/10;
    }
    return (n1==sum);

}


int perfect(int n1){
  int  sum = 0;
   int num = n1;
    for(int i=1; i<num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    return (n1 == sum);


}
