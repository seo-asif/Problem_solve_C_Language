
#include<stdio.h>


int main()
{
    int a=0;

    printf("please give how many consecutive number/'s sum you want ?: ");
    scanf("%d",&a);
    int i;
    int first=0;
    int sum=0;
    for(i=1; i<=a; i++)
    {
        first=i*i;
        int second=i+1;
        sum+=first*second;


    }
    printf("\nThe sum is %d ",sum);
}
