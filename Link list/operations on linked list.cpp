/********************************************************PROGRAM FOR CREATING AND DISPLAYING DYNAMIC LINKED LIST**********************************************************************/

#include<stdio.h>  //for using printf and scanf functions
#include<stdlib.h> //for using malloc function
#include<stdbool.h> //for using boolean type variables

 //structure for creating link list 
struct link        
{
	int data;                    //value of linked list item
	struct link *nextad;         //to store the address of next linked list node
};

struct link *head;                //First item of linked list declared as a global variable 


//structure type function to create dynamic linked list
struct link * create(int nodes)   
{
	struct link *p,*q;             /*declaring structure type pointers for differnet uses for eg. p->for travesing connecting and traverse through whole linked list nodes.
	                                                                                              q->for creating individual linked list node*/
	int item;
	printf("Enter value of first element: ");
	scanf("%d",&item);
	q = (struct link*)malloc(sizeof(struct link));         //
	q->data=item;
	q->nextad=NULL;
	
    head=q;
    p=head;
    
    for(int i=1;i<nodes;i++)
    {
    	printf("Enter next value: ");
    	scanf("%d",&item);
    	q = (struct link*)malloc(sizeof(struct link));
    	q->data=item;
    	q->nextad = NULL;
    	
    	p->nextad = q;
    	p=p->nextad;
	}
	
	return head;

	
}

void display(struct link *p)
{
	printf("\nCreated linked list is : \n");
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->nextad;
	}
}

int count(struct link *p)
{
	int sum = 0;
	while(p!=NULL)
	{
		sum ++;
		p=p->nextad;
	}
	return sum;
}

int sumO(struct link *p)
{
	int sum = 0;
	while(p!=NULL)
	{
		sum = sum + p->data;
		p=p->nextad;
	}
	return sum;
}

struct link * search(struct link *p)
{
	int key;
	printf("\nEnter value to be found : ");
	scanf("%d",&key);
	while(p!=NULL)
	{
		if(key==p->data)
		{
			return p;
		}
		else
		p=p->nextad;
		
	}
	return NULL;
}

void insert(struct link *p)
{
	int num,pos;
	printf("\nEnter Value to be inserted: ");
	scanf("%d",&num);
	printf("Enter position: ");
	scanf("%d",&pos);
	if(pos == 0)
	{
		struct link *l;
		l=(struct link *)malloc(sizeof(struct link));
		l->data  = num;
		l->nextad = head;
		head = l;
	}
	else
	{
		struct link *l;
		
		for(int i=1;i<pos;i++)
		{
			p=p->nextad; 
		}
			l=(struct link *)malloc(sizeof(struct link));
		    l->data  = num;
		    l->nextad=p->nextad;
		    p->nextad=l;
	}
	display(head);
}

void del(struct link *p)
{
	int pos;
	printf("\nEnter position: ");
	scanf("%d",&pos);
	
	if(pos == 1)
	{
		head = head->nextad;
		free(p);
	}
	else
	{
		struct link *q=NULL;
		for(int i = 1;i<pos&&p;i++)
		{
			q=p;
			p=p->nextad;
		}
		if(p)
		{
			q->nextad=p->nextad;
			free(p);
		}
		
	}
	display(head);
}
bool sort(struct link *p)
{
	int x = -32768;
	while(p!=NULL)
	{
		if(x>p->data)
		return  false;
		x=p->data;
		p=p->nextad;
	}
	return true;
}

void duplicate(struct link *p)
{
	struct link *q;
	q=p->nextad;
	
	while(q!=NULL)
	{
		if(p->data==q->data)
		{
			p->nextad=q->nextad;
			free(q);
			q=p->nextad;
		}
		else
		{
			p=q;
			q=q->nextad;
		}
	}
	display(head);
	
}
int main()
{
	int nodes;
	printf("Enter number of nodes: ");
	scanf("%d",&nodes);
	head = create(nodes);
	
	display(head);
	int num = count(head);
	int sum =sumO(head) ;
	printf("\nNumber of nodes in created linked list is : %d",num);
	printf("\nSum of nodes in created linked list is : %d",sum);
	struct link *l = search(head);
	printf("\nValue %d found at address %d",l->data,l);
	insert(head);
	del(head);
	if(sort(head))
	{
		printf("\nSorted");
	}
	else
	{
		printf("\nNot sorted");
	}
	duplicate(head);
}
