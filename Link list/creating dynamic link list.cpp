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

struct link *head;                 //pointer denoting first node of linked list declared as a global variable 



//structure type function to create dynamic linked list
struct link * create(int nodes)   
{
	struct link *p,*q;                                      /*declaring structure type pointers for differnet uses for eg. p->for travesing connecting and traverse through whole linked list nodes.
	                                                                                                                      q->for creating individual linked list node*/
	int item;
	printf("Enter value of first element: ");
	scanf("%d",&item);                                      //taking value of linked list item      
	q = (struct link*)malloc(sizeof(struct link));         //using malloc function to allocate memory inside heap memory
	q->data=item;                                          //initializing q->data value to be of item
	q->nextad=NULL;                                        //and putting address to be null
	
    head=q;                                                //making head element by initializing its value to be equal o that of q
    p=head;                                                 //putting p = head to use it later for creating more nodes
    
    for(int i=1;i<nodes;i++)
    {
    	printf("Enter next value: ");
    	scanf("%d",&item);
    	q = (struct link*)malloc(sizeof(struct link)); 
    	q->data=item;
    	q->nextad = NULL;
    	
    	p->nextad = q;                                     //connecting new created node to previous one using p pointer
    	p=p->nextad;                                       //moving p pointer to its next address
    }
}

//function for displaying all elements of created linked lists
void display(struct link *p)
{
	printf("\nCreated linked list is : \n");
	while(p!=NULL)                                           //executing loop while p pointer is not null 
	{
		printf("%d ",p->data);                                //printing value of node
		p=p->nextad;                                          //moving pointer p to next address
	}
}

//main function 
int main()
{
	int nodes;                                                 //number of nodes to be created inside linked list 
	printf("Enter number of nodes: ");
	scanf("%d",&nodes);                                        //reading value
	create(nodes);                                  
	display(head);                                              //calling display function to display all elemnets of linked lists
}
