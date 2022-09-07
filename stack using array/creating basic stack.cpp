/*                           Program to create stack using ADT and then perform push,pop and empty operations on it                                      */

#include<stdio.h>//including standard input output library to use printf() and scanf() functions.
#include<stdlib.h>//for using memory allocating function like malloc().
#include<stdbool.h>//for using bool datatype.
#include<conio.h>//for using getch() and system("cls").

bool continueLoop = true;//declaring and initializing bool type global variable and initializing it's value to be true.
struct stack//defininig structure named stack to create stack 
{
	int size;//to store size of stack.
	int *s;//to create array inside heap memory.
	int top;//point towards top element in stack.

};

void push();//to insert value inside the created stack one by one.
int pop();//to pop or remove the last element inside the stack onr by one.
bool isEmpty();//to check if the stack is empty or not.
void display();//to display all elements inside stack.

void push(struct stack *st)//to insert value inside the created stack one by one.
{
	int num;//to store the value of element to be entered into stack.
	
	if(st->top==st->size-1)//checking if stack is full or not.
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter value to be enter inside stack: ");
	    scanf("%d",&num);//reading value
		st->top++;//incrementing value of top pointer by 1.
		st->s[st->top]=num;//storing value of num inside stack.
	}
	
}

int pop(struct stack *st)//to pop or remove the last element inside the stack onr by one.
{
    int x=-1;
    if(st->top==-1)//checking if the stack is empty or not
    {
    	printf("Stack underflow\n");
	}
	else
	{
		x=st->s[st->top];//storing value of top or last element of stack inside x before deleting 
		st->top--;//decereasing value of top pointer, doing so will remove the top most element inside stack
	}
	return x;//returning the value of deleted element to main program
}

bool isEmpty(struct stack *st)//to check if the stack is empty or not.
{
	if(st->top==-1)//checking if element is empty or not
	{
		return true;//returning true if yes
	}
	else
	{
		return false;//false if no
	}
}
void display(struct stack *st)//to display all elements inside stack
{
    int i;
	if(st->top==-1)//checking if the stack is empty or not
	printf("Stack is empty\n");
	else
	{
		for(i=st->top;i>=0;i--)//using for loop to traverse through whole array
		printf("%d\n",st->s[i]);///printing individual elements of stack
	
	}
	getch();//to hold the result


}
int main()
{
	struct stack st;//declaring structure variable
	printf("Enter the size of stack: ");
	scanf("%d",&st.size);//reding size of stack to be created
	st.s=(int*)malloc(st.size*sizeof(int));//using malloc()  function to allocate memore and create array inside heap memory
	st.top=-1;//initializing value of top pointer to be -1(means its empty)
	

	int choice;
	while(continueLoop)//using while loop to create main menu
	{
		
	//to clear the previous loop screen 
		printf("\n\t\t\t \tOPERATIONS ON STACK\n\n");
		printf("[1]  PUSH (adds an element to the collection)\n");
		printf("[2]  POP (removes the most recently added element that was not yet removed)\n");
		printf("[3]  isEmpty (checks if the stack is empty or not)\n");
		printf("[4]  Display Stack (to display all elements of stack)\n");
		printf("[5]  exit\n\n");
		printf("Enter your choice: ");
	    scanf("%d",&choice);//reading the user choice
	
	switch(choice)//using the user choice inside switch case
	{
		case 1: {//if user choice =1
			push(&st);//passing address of structure variable as parameter
				break;
			
		}
		
		case 2: {//if user choice =2
		
		int popElement = pop(&st);//passing address of structure variable as parameter
	            printf("%d is removed from stack.",popElement);
	            break;}
	            
	    case 3: {//if user choice =3
	
		if(isEmpty(&st)==true)//passing address of structure variable as parameter
				{
	           		printf("Given stack is empty");
				}
				else
				{
					printf("Given stack is not empty");
				}    
				getchar();
				break;} 
				
		default: {//if choice is inva
		printf("Invalid choice");
			break;
		}		  
		
		case 5:{//if user choice =5
			continueLoop=false;//to stop the loop initialize the value of global variable to false.
			break;
		}
		
		case 4:{//if user choice =4
		display(&st);//passing address of structure variable as parameter
			break;
		}

	}
}
	
	
	
	
	
	
}
