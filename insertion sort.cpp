#include<stdio.h>
int main()
{
	int i,j,A[50],temp,n;
	printf("enter the element n");
	scanf("%d",&n);
	printf("enter array element");
	for(i=0;i<n;i++)
	   scanf("%d",&A[i]);
	for(i=1;i<n;i++)
	{
		j=i;
		while(A[j]>A[j-1]&&j>0)
		{
			temp=A[j];
			A[j]=A[j-1];
			A[j-1]=temp;
			j--;
		}
	}
	printf("sorted array of n");
	for(i=0;i<n;i++)
	printf("%d\n",A[i]);
	return 0;
}
