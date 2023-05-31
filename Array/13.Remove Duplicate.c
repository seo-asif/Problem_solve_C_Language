#include <stdio.h>
int main()
{
    int array[100], n,ctr=0;
    int i, j, k;
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);

       for(i=0;i<n;i++)
            {
                 printf("Input %d elements of the array : ",i+1);

	      scanf("%d",&array[i]);
	    }
    printf("\nThe unique elements found in the array are: ");
    for(i=0; i<n; i++)
    {
       int  flag=0;
        for(j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(array[i]==array[j])
              {
                 flag++;
               }
             }
        }
       if(flag==0)
        {
          printf("%d ",array[i]);
        }
    }
       printf("\n\n");
}

