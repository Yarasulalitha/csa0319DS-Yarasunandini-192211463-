#include<stdio.h>
#include<stdlib.h>
#define size 5

int QUE[size],front=-1,rear=-1;

void enque()
{
	int ele;
	printf("enter the elememts");
	scanf("%d",&ele);
	
	if (rear==size-1)
	   printf("Queue is full");
	else
	{
		if (front==-1&&rear==-1)
		{
			front=0;
			rear=0;
		}
		else
		    rear=rear+1;
	    QUE[rear]=ele;
	}

}	
void deque()
{
	int ele;
	if(front==-1&&rear==-1)
	   printf("Queue is empty");
	else
	{
		ele=QUE[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		   front=front+1;
		   printf("deque element=%d",ele);
	}
}
void Display()
{
	int i;
	if (front==-1&&rear==-1)
	   printf(" queue is empty");
	else
	for(i=front;i<=rear;i++)
	   printf("%d\t",QUE[i]);
}

int main()
{
	int cho;
	
	do{
		printf("\nMain Menu\n");
		printf("\n1.enque");
		printf("\n2.deque");
		printf("\n3.Display");
		printf("\n4.END");
		
		printf("\n\n Enter your choice :");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:enque(); break;
			case 2:deque(); break;
			case 3:Display(); break;
			case 4:exit(0); break;	
			default:printf("Enter the choice between 1 to 4");		
		}
	}while(cho>=1 && cho<=4);
	return 0;
}
