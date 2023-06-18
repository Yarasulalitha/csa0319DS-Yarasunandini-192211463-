#include<stdio.h>
int main()
{
   	int i,n,A[50],key,flag=0,first,last,mid;
	printf("enter the element n");
	scanf("%d",&n);
	printf("element the array element");
	for(i=0;i<n;i++)
	  scanf("%d",&A[i]);
	  
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(A[mid]==key)
		{
			flag=1;
			break;
		}
		else if(A[mid]<key)
		     first=mid+1;
	    else if(A[mid]>key)
	        last=mid-1;
	}
  if (flag==1)
      printf("The key is found");
    else
      printf("The key is not found");
}
