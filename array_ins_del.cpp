#include<stdio.h>
#include<stdlib.h>
int a[10], i,n=6;

void Input_Array()

{
	printf("enter array elememts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
}

void Insert_ele()
{
	int pos,element;
	printf("enter the pos and element");
	scanf("%d%d",&pos,&element);
	for(i=n;i>pos;i--)
	{
	    a[i]=a[i-1];
	}
	a[pos]=element;
}

void Delete_ele()
{
	int pos;
	printf("enter the pos");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
	  a[i]=a[i+1];
    }
}

void Display()
{
	printf("output is:\n");
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
}

int main()
{
	int cho;
	
	do{
		printf("\nMain Menu\n");
		printf("\n1.Input the Array");
		printf("\n2.Insert an element");
		printf("\n3.Delete an element");
		printf("\n4.Display the Array");
		printf("\n5.END");
		
		printf("\n\n Enter your choice :");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:Input_Array(); break;
			case 2:Insert_ele(); break;
			case 3:Delete_ele(); break;
			case 4:Display(); break;
			case 5:exit(0); break;	
			default:printf("Enter the choice between 1 to 5");		
		}
	}while(cho>=1 && cho<=5);
}
