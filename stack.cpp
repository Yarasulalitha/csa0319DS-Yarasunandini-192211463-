#include<stdio.h>
#include<stdlib.h>
#define max 5

int STK[max],top=-1;

void push()
{
	int ele;
	printf("enter the elememts");
	scanf("%d",&ele);
	
	if(top==max-1)
	printf("stack is full");
	else
	{
		top=top+1;
		STK[top]=ele;
	}	
}


void pop()
{
	int ele;
		
    if(top==-1)
    printf("stack is empty");
    else
    {
    	ele=STK[top];
    	top=top-1;
	}
	printf("the element %d",ele);
}

void peak()
{
	
	if(top==-1)
	printf("stack is empty");
	else
	printf("top of the stack=%d ",STK[top]);
}

void Display()
{
   int i;
   if(top == -1)
   		printf("stack is empty");
   else
   {
     for(i=top;i>=0;i--)
   		printf("%d\n",STK[i]);
   	}
}

int main()
{
	int cho;
	
	do{
		printf("\nMain Menu\n");
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.peak");
		printf("\n4.Display");
		printf("\n5.END");
		
		printf("\n\n Enter your choice :");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:push(); break;
			case 2:pop(); break;
			case 3:peak(); break;
			case 4:Display(); break;
			case 5:exit(0); break;	
			default:printf("Enter the choice between 1 to 5");		
		}
	}while(cho>=1 && cho<=5);
	return 0;
}
