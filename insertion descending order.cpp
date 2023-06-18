#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,a[20],n,temp;
	printf("enter n");
	scanf("%d",&n);
	
	printf("enter array elememts");
	    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=1;i<n;i++)
	{
		j=i;
		while(a[j]>a[j-1]&&j>0)
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("the sorted array element");
	for(i=0;i<n;i++)
    
    printf("%d\t",a[i]);
}
