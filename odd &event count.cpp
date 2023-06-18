#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int A[45],i,n,oc,ec;
	oc=0;
	ec=0;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter the array element");
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		if(A[i]%2==0)
			ec++;
		else
			oc++;
	}  
	printf("\n\n the even count=%d\n",ec);
	printf("\n\n the odd count=%d\n",oc);
	  
}
