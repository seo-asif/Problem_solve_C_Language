#include<stdio.h>

void even (int number);

int main(){

    int a;
    printf("Please give the 1st number: ");
    scanf("%d",&a);

    even(a);
    return 0;

    }


void even (int number)
{
    if(number%2==0){
    printf("The number is even");
    }
    else{
    printf("The number is odd");}

}
