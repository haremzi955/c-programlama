#include<stdio.h> 

void selectionsort(int A[],int size)
{
	int i,j;
	int min_index;
	
	for(i=0;i<size;i++)
	{
		min_index = i;
		for(j=i;j<size;j++)
		{
			if(A[j]<A[min_index])
			{
				min_index = j; 
			}
		}
		int temp = A[i];
		A[i] = A[min_index];
		A[min_index] = temp; 
	}
}
int main()
{
	
}
