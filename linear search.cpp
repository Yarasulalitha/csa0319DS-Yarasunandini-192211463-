#include<stdio.h>
int main()
{
	i,n,A[50],key,flag=0;
	printf("enter the vslue of n");
	scanf("%d",&n);
	printf("enter array of element");
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	printf("enter the element of search");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(A[i]==key)
		{
		   flag=1
		   break;
		   
		}
	}
	
}
