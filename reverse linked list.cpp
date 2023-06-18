#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int stk[20], top=-1;

struct node
{
	int data;
	struct node *next;
}
*head=NULL,*p,*t,*newnode;

void push(int ele) 
{
	stk[++top]=ele;
}


void display_reverse()
{
	int i;
	for(p=head;p!=NULL;p=p->next)	
		push(p->data);
	printf("\nReverse the linked list\n");
	for(i=top;i>=0;i--)
		printf("%d -> ",stk[i]);
}

void Display()
{
	if(head==NULL)
	  printf("linked list is empty");
	else
	    for(p=head;p!=NULL;p=p->next)
	       printf("%d->",p->data);
}


void create()
{
	int i,n,ele;
	printf("enter the list count");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&ele);
		
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}


int main()
{
	int cho;
	
	do{
		printf("\nMain Menu\n");
		printf("\n1.create");
		printf("\n2.Display");
		printf("\n3.Reverse Display");
		printf("\n4.END");
		
		printf("\n\n Enter your choice :");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:create(); break;
			case 2:Display(); break;
			case 3:display_reverse(); break;	
			case 4:exit(0); break;	
			default:printf("Enter the choice between 1 to 3");		
		}
	}while(cho>=1 && cho<=3);
	return 0;
}
