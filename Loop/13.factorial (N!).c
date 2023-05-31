
#include<stdio.h>

//Factorial
int main()
{
    int a=0;

    printf("please give input value ?: ");
    scanf("%d",&a);
 int factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= i;
        printf("%d ",factorial);
    }

        printf("\nThe factorial of given number is %d ",factorial);


 if (a< 0) {
        printf("Please give positive number.\n");
        return 0;
    }


}
