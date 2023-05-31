#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
//    for (i = 1; i <= n; i++) {
//        if(i<n){
//            if (i % 2 == 0) {
//            printf("1, ");
//        } else if(i%2!=0){
//            printf("0, ");
//        }}
//        else{
//        if (i % 2 == 0) {
//            printf("1 ");
//        } else if(i%2!=0){
//            printf("0 ");
//        }
//        }
//
//    }

    for(i = 0; i < n; i++){
        if(i == n - 1){
            printf("%d", i % 2);
        }
        else{
            printf("%d, ", i % 2);
        }
    }
    return 0;
}
