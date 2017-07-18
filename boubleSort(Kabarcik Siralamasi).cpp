#include<stdio.h>
#include<conio.h>

void bouble_sort(int A[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp = A[j];
				A[j]= A[j+1];
				A[j+1] = temp;
			}
		}
	}
}
int main()
{
	int dizi[5]={1,8,6,7,3};
	bouble_sort(dizi,5);
	for(int i=0;i<5;i++)
	{
		printf(" %d ",dizi[i]);
	}
	getchar();
	return 0;
}
