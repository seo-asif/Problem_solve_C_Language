
#include<stdio.h>

//Fibonacci Number
int main()
{
    int a=0;

    printf("please give input value ?: ");
    scanf("%d",&a);
    int i;
    int first=0;
    int second=1;
    for(i=0; i<a; i++)
    {
        int next=first+second;
        first=second;
        second=next;
        printf("%d ", first);

    }

}

