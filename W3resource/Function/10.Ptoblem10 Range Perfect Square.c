#include<stdio.h>


int checkPerfect(int);
void perfectNumber(int,int);



int main()
{

    int lowest;
    int highest;

    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d",&lowest);
    printf("\nInput Highest search limit of perfect numbers : ");
    scanf("%d",&highest);

    perfectNumber(lowest,highest);

    return 0;
}

int checkPerfect(int n1)
{
    int sum=0;

    for (int i=1; i<n1; i++)
    {
        if(n1%i==0){
        sum+=i;
        }
    }
    printf("\n%d",sum);

    if(sum==n1)
    {
        return 1;
    }
    else
    {
        return 0;

    }

}


    void perfectNumber(int low,int high)
    {
        int c = checkPerfect(low);
        printf("%d",c);
        while(low<=high)
        {
            if(checkPerfect(low)){
            printf("%d ",low);
            }
            low++;
        }

    }
