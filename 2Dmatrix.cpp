#include<stdio.h>
int main()
{
	int i,j,k,n,m,l,A[5][5],B[5][5],C[6][6];
	printf("enter the rows and coloums");
	scanf("%d%d%d",&n,&m,&l);
	
	printf("enter matrix A");
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	      scanf("%d",&A[i][j]);
	printf("Enter matrix B");
	for(j=0;j<m;j++)
	    for(k=0;k<l;k++)
	       scanf("%d",B[j][k]);
	       
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		{
			C[i][k]=0;
			for(j=0;j<m;j++)
			{
				C[i][k]=C[i][k]+(A[i][j]*B[j][k]);
				
		 }
		}
	}
	printf("the C matrix in \t\n");
			 for(i=0;i<n;i++)
				{
					for(k=0;k<l;k++)
					{
						printf("%d\t",C[i][k]);
					}
					printf("\n");
				}
           
	
}
