

#include<stdio.h>

int main(){

    int a=0;
    printf("Give How many input you want: ");
    scanf("%d", &a);
int arr[a];
    int i;
  printf("Input %d elements in the array :\n",a);
    for(i=0; i<a; i++)
    {
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    for(i=0; i<a; i++)
    {
        printf("%d  ", arr[i]);
    }

}
