#include<stdio.h>


int main(){

int a =0;
printf("Please give a number: ");
scanf("%d",&a);



int temp=a;


if(temp==0){
    printf("\n%d zero is not valid input",a);
}else if(temp<0){
    printf("\n%d Negative input is not valid input",a);
}else if(temp>0){
    int d=temp;
    // printf("\n%d It is valid input",a);

while ( d>1 ){
    if(d%2!=0){
       printf("\n%d it is not power of 2",a);
        return 0;
    }else{
    d/=2;
    }
}
printf("\n%d yess...it is power of 2",a);

}



}

