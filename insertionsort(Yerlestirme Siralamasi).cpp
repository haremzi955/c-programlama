#include<stdio.h> 

void insertionsort(int A[],int size)
{
	int i,j;
	int element;
	for(i=1;i<size;i++)
	{
		element = A[i];
		j = i-1;
		while(j>=0 && A[j]>element)
		{
			A[j+1] = A[j];
			j--; 
		}
		A[j+1] = element;
	}
}
int main()
{
	
}
