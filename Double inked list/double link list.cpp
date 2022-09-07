/********************************************************PROGRAM FOR CREATING AND DISPLAYING DYNAMIC DOUBLY LINKED LIST**********************************************************************/

#include<stdio.h>  //for using printf and scanf functions
#include<stdlib.h>//for using malloc function


//structure for creating link list 
struct Dlist
{
	struct Dlist *prev;                   //for storing address of previous node
	int value;                           //value of linked list item
	struct Dlist *next;                  //for storing address of next node
};

struct Dlist *head;                      //pointer denoting first node of doubly linked list declared as a global variable 


//structure type function to create dynamic doubly linked list
void create(struct Dlist *p)
{
	struct Dlist  *q;                                  /*declaring structure type pointers for differnet uses for eg. p->for travesing connecting and traverse through whole doubly linked list nodes.
	                                                                                                                 q->for creating individual doubly  linked list node*/
	int size,value;                                                                                                        
	printf("Enter size: ");
	scanf("%d",&size);                                //reading size or number of nodes inside doubly linked list
	
	printf("Enter the value of first node : ");
	scanf("%d",&value);                                //reading node value
	q=(struct Dlist*)malloc(sizeof(struct Dlist));     //using malloc function to allocate memory inside heap memory
	q->value = value;                                  //initializing node item value
	q->prev=NULL;                                      //initializing both previous and next address to be null since its the first node created.
	q->next=NULL;
	
	head =q;                                            //making head element by initializing its value to be equal o that of q
	p=q;                                                //putting p = head to use it later for creating more nodes
	
	for(int i=1;i<size;i++)
	{
		printf("Enter the value of next node : ");
		scanf("%d",&value);
		q=(struct Dlist*)malloc(sizeof(struct Dlist));
		q->value = value;
		q->prev= p;                                     //putting previous pointer value of new node to equal to that of q 
		q->next=NULL;
		
		p->next=q;                                       //connecting new created node to previous one using p pointer
		p=p->next;                                        //moving p pointer to its next address
	}	
}


//function for displaying all elements of created linked lists
void display(struct Dlist *p)
{
	printf("\nCreated Double linked list is : ");
	while(p!=NULL)                                         //executing loop while p pointer is not null 
	{
		printf("%d ",p->value);                             //printing value of node
		p=p->next;                                         //moving p pointer to its next address
	}
}

//main function
int main()
{
	create(head);                                         //calling create function for creating dynaic doubly linked list
	display(head);                                        //calling display function to display all elements of created doubly linked list
}
