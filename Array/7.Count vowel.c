#include<stdio.h>

int main()
{
    int array[10] = {0};

    int n = 0;
    printf("Please give the length of array :");
    scanf("%d",&n);
    int value = 0;

    for(int i=0; i<n; i++)
    {
        printf("Give the input %d: ",value);
        scanf(" %c",&array[i]);
        value++;
    }

  int sum=0;
    for(int i=0; i<=n; i++)
    {
        if(array[i]=='a'||array[i]=='A'||array[i]=='e'||array[i]=='E'||array[i]=='i'||array[i]=='I'||array[i]=='o'||array[i]=='O'||array[i]=='u'||array[i]=='U')
        {

        sum++;
        printf("p");
        }
    }

    printf("%d ",sum);
    printf("\n");
    system("pause");
    main();

}


