#include<stdio.h>


//  8. Write a program in C to count the frequency of each element of an array.
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 25
//element - 1 : 12
//element - 2 : 43
//Expected Output :
//The frequency of all elements of an array :
//25 occurs 1 times
//12 occurs 1 times
//43 occurs 1 times


int main()
{
    int arr[10] = {0};
    int max=arr[0];
    int n = 0;
    printf("\nPlease give the length of array :");
    scanf("%d",&n);


	int i;
	for(i=0;i<n;i++)
	{   printf("Element %d of array :",i+1);
		scanf("%d",&arr[i]);
	}
    //Find max index length
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}

	int b[max+i];

	//make every index 0
	for(i=0;i<=max;i++)
    {
         b[i]=0;
    }
    //add frequency into new array
	for(i=0;i<n;i++)
	{
			b[arr[i]]++;
	}

	//printing Frequency
	for(i=0;i<=max;i++)
	{
		if(b[i]>0){
            printf("\n%d occurs %d times",i,b[i]);
		}
	}

}



//https://www.youtube.com/watch?v=6n73ZjmmdRE&ab_channel=AXIOMS

