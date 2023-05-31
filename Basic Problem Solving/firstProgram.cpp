#include<stdio.h>

int main(){

//    int a = 0, b = 0;
////    printf("Input number a:");
////    scanf("%d", &a);
////    printf("Input number b:");
////    scanf("%d", &b);
//    scanf("%d%d", &a, &b);
//    int c = a + b;
//
//    printf("%d + %d = %d", a, b, c);

    int n = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n / 2 == 0){
        printf("The number is Even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
