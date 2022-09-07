#include<stdio.h>
#include<stdlib.h>
struct llist
{
	int value;
	struct llist *next;
};
struct llist *head;

void create(struct llist *p)
{
	struct llist *q;
	int value,size ;
	printf("Enter size of link list to be created : ");
	scanf("%d",&size);
	
	printf("Enter value of first node: ");
	scanf("%d",&value);
	
	q=(struct llist *)malloc(sizeof(struct llist));
	q->value = value;
	q->next=NULL;
	
	head = q;
	p=q;
	
	for(int i =1 ; i<size;i++)
	{
		
	printf("Enter value of next node: ");
	scanf("%d",&value);
	
	q=(struct llist *)malloc(sizeof(struct llist));
	q->value = value;
	q->next=NULL;
	
	p->next=q;
	p=p->next;
	
	}
	p->next = head; 
}

void display(struct llist *p)
{
	printf("\nCreated linked list is : ");
	do
	{
		printf("%d ",p->value);
		p=p->next;
	}while(p!=head);
	
}

void insert(struct llist *p)
{
	int value,pos;
	printf("\nEnter value:");
	scanf("%d",&value);
	printf("Enter position : ");
	scanf("%d",&pos);
		struct llist *q;
		q=(struct llist*)malloc(sizeof(struct llist));
		q->value = value;
	if(pos ==0)
	{
	
		q->next=head;
		while(p->next!=head)
		{
			p=p->next;
		}
		p->next=q;
		head = q;
	
	    
	}
else
   {
   	for(int i =1;i<pos;i++)
   	{
   		p=p->next;
	}
	q->next = p->next;
	p->next = q;
   	
   }
   printf("Element inserted!! ");
	    display(head);
}
int main()
{
	create(head);
	display(head);
	
	insert(head);
	
}
