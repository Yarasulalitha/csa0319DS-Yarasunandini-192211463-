 #include<stdio.h>
int main()
{
	int i,j,A[50],temp,n;
	printf("enter the element n");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("sorted array of n");
	for(i=0;i<n;i++)
	printf("%d\n",A[i]);
	return 0;
}
