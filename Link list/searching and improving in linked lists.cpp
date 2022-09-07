#include<stdio.h>
#include<stdlib.h>

struct llist
{
	int data;
	struct llist *nextad;
};

void display(struct llist *head)
{
	struct llist *p;
	p=head;
	while(p!=NULL)
	{
		printf("Element is: %d\n",p->data);
		p=p->nextad;
	}
}

struct llist *creation(int n)
{
	struct llist *q,*head,*p;
	int item,i;
	printf("Enter value of first node: ");
	scanf("%d",&item);
	q=(struct llist *)malloc(sizeof(struct llist));
	q->data=item;
	q->nextad=NULL;
	
	head=q;
	p=head;
	
	for(i=1;i<n;i++)
	{
		printf("Enter value of first node: ");
		scanf("%d",&item);
		q=(struct llist *)malloc(sizeof(struct llist));
		q->data=item;
		q->nextad=NULL;
		
		p->nextad=q;
		p=p->nextad;
	
	}
	
	return head;
   
	
}

int sum(struct llist *head)
{
	struct llist *p;
	p=head;
	int sum=0;
	while(p!=NULL)
	{
		sum = sum + p->data;
		p=p->nextad;
	}
	return sum;
}

int counting(struct llist *head)
{
	struct llist *p=head;
	int count=0;
	while(p!=0)
	{
		count++;
		p=p->nextad;
	}
	return count;
	
}

struct llist *search(int key,struct llist *head)
{
	struct llist *p=head;
	struct llist *q=NULL;
	while(p!=NULL)
	{
		if(key==p->data)
		{
			q->nextad=p->nextad;
			p->nextad=head;
			head = p;
			return p;
		}
		q=p;
		p=p->nextad;
	}
	return NULL;
}
int main()
{
	int i,n,key,item;
	
	printf("Enter number of nodes: ");
	scanf("%d",&n);
	
	struct llist *head = creation(n);
	
	display(head);
	printf("\nNumber of element in link list is : %d",counting(head));
	printf("\nSum of elements in linked list : %d",sum(head));
	printf("\nEnter number to be found: ");
	scanf("%d",&key);
	printf("\nLocation is : %d",search(key,head));
	
}
