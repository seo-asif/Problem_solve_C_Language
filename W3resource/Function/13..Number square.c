#include<stdio.h>



int sqr(int);
int cube(int);
float sqareroot(float);



int main(){

int n=0;
printf("please enter a number : ");
scanf("%d",&n);

printf("The square of the number is %d",sqr(n));
printf("\nThe cube of the number is %d",cube(n));
}



int sqr(int a){

return a*a;
}


int cube(int a){

return a*a*a;
}

}
