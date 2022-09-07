#include<stdio.h>
#include<stdlib.h>

struct Dlist
{
	struct Dlist *prev;
	int value;
	struct Dlist *next;
};
struct Dlist *head;
void create(struct Dlist *p)
{
	struct Dlist  *q;
	int size,value;
	printf("Enter size: ");
	scanf("%d",&size);
	
	printf("Enter the value of first node : ");
	scanf("%d",&value);
	q=(struct Dlist*)malloc(sizeof(struct Dlist));
	q->value = value;
	q->prev=NULL;
	q->next=NULL;
	
	head =q;
	p=q;
	
	for(int i=1;i<size;i++)
	{
		printf("Enter the value of next node : ");
		scanf("%d",&value);
		q=(struct Dlist*)malloc(sizeof(struct Dlist));
		q->value = value;
		q->prev= p;
		q->next=NULL;
		
		p->next=q;
		p=p->next;                            
	}	
}

void display(struct Dlist *p)
{
	printf("\nCreated Double linked list is : ");
	while(p!=NULL)
	{
		printf("%d ",p->value);
		p=p->next;
	}
}

void insert(struct Dlist *p)
{
	int value,pos;
	printf("\nEnter value to be inserted: ");
	scanf("%d",&value);
	printf("Enter position: ");
	scanf("%d",&pos);
	struct Dlist  *q;
	q=(struct Dlist*)malloc(sizeof(struct Dlist));
	if(pos==0)
	{
	
		q->value=value;
		p->prev=q;
		q->next=p;
		q->prev=NULL;
		head = q;	
	}
	else
	{
		for(int i=1;i<pos;i++)
		{
	     	p=p->next;
		}
		q->value=value;
     	q->next=p->next;
     	q->prev=p;
     	if(p->next)
     	p->next->prev=q;
     	p->next=q;
	}
	printf("Element inserted!! ");
	display(head);
}
int main()
{
	create(head);
	display(head);
	insert(head);
	delete(head);
}
