#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
}
*head=NULL,*p,*t,*newnode;

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
void insert_at_begin()
{
	int ele;
	printf("enter the element");
	scanf("%d",&ele);
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	p=head;
	
	newnode->next=p;
	head=newnode;
	p=newnode;
}

void insert_at_end()
{
	int ele;
	printf("enter the element");
	scanf("%d",&ele);
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
	
}
void insert_at_anyposition()
{
	int i,ele,pos;
	printf("enter the element and pos");
	scanf("%d%d",&ele,&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	
	for(i=1,p=head;i<pos;i++,p=p->next)
	{
		t=p;
	}
	t->next=newnode;
	newnode->next=p;
	p=newnode;
	
}

void delete_at_begin()
{
	int ele;
	p=head;
	ele=p->data;
	head=p->next;
	free(p);
	
	printf("deleted element=%d;",ele);
}

void delete_at_end()
{
	int ele;
	for(p=head;p->next!=NULL;p=p->next)
	t=p;
	
	ele=p->data;
	t->next=NULL;
	free(p);
	p=t;
	
	printf("deleted element=%d",ele);
	
}

void delete_at_anyposition()
{
	int ele,pos,i;
	printf("enter the position");
	scanf("%d",&pos);
	
	for(p=head,i=1;i<pos;i++,p=p->next)
	t=p;
	
	ele=p->data;
	t->next=p->next;
	free(p);
	t=p;
	
	printf("deleted element=%d",ele);
	
}

int main()
{
	int cho;
	
	do{
		printf("\nMain Menu\n");
		printf("\n1.create");
		printf("\n2.Display");
	    printf("\n3.insert_at_begin");
	    printf("\n4.insert_at_end");
		printf("\n5.insert_at_anyposition");
		printf("\n6.delete_at_begin");
		printf("\n7.delete_at_end");
		printf("\n8.delete_at_anyposition");
		printf("\n9.END");
		
		
		printf("\n\n Enter your choice :");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:create(); break;
			case 2:Display(); break;
			case 3:insert_at_begin(); break;
			case 4:insert_at_end(); break;
			case 5:insert_at_anyposition(); break;	
			case 6:delete_at_begin(); break;
			case 7:delete_at_end(); break;
			case 8:delete_at_anyposition(); break;
			case 9:exit(0); break;
			default:printf("Enter the choice between 1 to 9");		
		}
	}while(cho>=1 && cho<=9);
	return 0;
}
