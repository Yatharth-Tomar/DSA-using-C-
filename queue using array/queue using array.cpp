/*                           Program to create queue using ADT and then perform push,pop,empty and full operations on it                                      */

#include<stdio.h>//including standard input output library to use printf() and scanf() functions.
#include<stdlib.h>//for using memory allocating function like malloc().
#include<stdbool.h>//for using bool datatype.
#include<conio.h>//for using getch() and system("cls").

bool cont = true;//declaring and initializing bool type global variable and initializing it's value to be true.

struct queue//defininig structure named queue to create stack
{
	int size;//to store size of queue.
	int front;//to point towards the point before the beginning of queue
	int rear;//to points towards the last element of queue
	int *Q;//to create array inside heap memory.
	
};

void create();//to create an empty queue 
void push();//to insert element
int pop();//to remove the elemnt that was first entered
void isEmpty(); //to check if queue is empty or not 
void  isFull();//to check if queue is full or not
void display();//to display all elemnts inside queue


void create(struct queue *q)//recieveing the address the structure variable as parameter to be stored inside declared structure pointer variable
{
	printf("  Enter the size: ");
	scanf("%d",&q->size);//reading th size of queue
	q->Q=(int*)malloc(q->size*sizeof(int));//using malloc()  function to allocate memore and create array inside heap memory
	q->front=q->rear=-1;//initializing the value of front and rear pointer to -1 signifying that queue is empty
}

void push(struct queue *q)//recieveing the address the structure variable as parameter to be stored inside declared structure pointer variable
{
	if(q->rear==q->size-1)//checking if the queue is full or not
	{
		printf("\n  Queue is full\n");
	}
	else
	{
	int num;
	printf("\n  Enter the value to be enetered: ");
	scanf("%d",&num);//reading value of elemnt to be entered inside queue
	q->rear++;//incrementing value of rear pointer
	q->Q[q->rear]=num;//initializing the value of first element inside queue                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    }
	
}

int pop(struct queue *q )//recieveing the address the structure variable as parameter to be stored inside declared structure pointer variable
{
	int  x=-1;
	if(q->rear==-1)//checking if the queue is empty or not
	{
		printf("\n  Queue is already empty\n");
	}
	else
	{
		q->front++;//incrementing the value of front pointer
		x=q->Q[q->front];//storing the value of removed element inside the x
		q->size++;//incrementing size
	}
	return x;//returnint=g the deleted  element to main program
}

void isEmpty(struct queue q)//recieveing the structure variable as parameter to be stored inside declared structure variable
{
	
	if(q.front==q.rear)//checking if the queue is enpty or not
	{
		printf("\n  Queue is empty\n");
	}
	else
	{
		printf("\n  Queue is not empty\n");
	}
	getch();// to hold the result
	
}

void  isFull(struct queue q)//recieveing the structure variable as parameter to be stored inside declared structure variable
{
	if(q.rear==q.size-1&&q.front==-1||q.rear-q.front==q.size)//checking if the queue is full or not
	{
		printf("\nQueue is full");
	}
	else
	{
		printf("\nQueue is not full");
	}
	getch();
}

void display(struct queue q)//recieveing the structure variable as parameter to be stored inside declared structure variable
{
  int i;
  for(i=q.front+1;i<=q.rear;i++)//travesing through whole queue using for loop
  {
  	printf(" %d ",q.Q[i]);//printing elements
  }
  getch();//to hold the result on the screen
}
int main()
{
	struct queue q;//declaring structure variable
	create(&q);//passing address of structure variable as parameter
	while(cont)//using while loop to create main menu
	{
	system("cls");//to clear the previous loop screen 
	int choice;
	
	printf("\n\t\t Queue using Array\n\n");
	printf("  [1] Push\n");
	printf("  [2] Pop\n");
	printf("  [3] Empty\n");
	printf("  [4] Display\n");
	printf("  [5] Full\n");
	printf("  [6] exit\n");
	printf("  Enter you choice: ");
	scanf("%d",&choice);//reading the user choice
	
	switch(choice)//using the user choice inside switch case
	{
		case 1:{//if user choice =1
		push(&q);//passing address of structure variable as parameter
			break;
		}
		case 2:{//if user choice =2
		pop(&q);//passing address of structure variable as parameter
			break;
		}
		case 3:{//if user choice =3
		isEmpty(q);//passing structure variable as parameter
			break;
		}
		case 6:{//if user choice =6
		cont  = false;
			break;
		}
		case 4:{//if user choice =4
		display(q);//passing structure variable as parameter
			break;
		}
		case 5:{//if user choice =5
		isFull(q);//passing structure variable as parameter
			break;
		}
		default:{//if choice is invalid
		printf("Invalid choice");
			break;
		}
	}
   }
}
