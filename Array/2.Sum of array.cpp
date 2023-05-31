#include<bits/stdc++.h>

int main(){

    int A[10] = {0};
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < n; i++){
        sum += A[i];
    }
    printf("%d", sum);
}
