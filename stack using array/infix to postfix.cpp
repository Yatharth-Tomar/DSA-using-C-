//***************************         PROGRAM TO CONVERT INFIX EQUATION INTO  POSTFIX EQUATION     ****************************************************************//

#include<stdio.h> //including standard input output library to use printf() and scanf() functions.
#include<stdlib.h>//for using memory allocating function like malloc().
#include<string.h>//for using string related functions.

struct stack       //defininig structure named stack to create stack  
{
	int size;     //to store size of stack.
	char *S;      //to create array inside heap memory.
	int top;      //point towards top element in stack.
};

void push();       //to insert value inside the created stack one by one.
int pop();         //to pop or remove the last element inside the stack onr by one.

void push(struct stack *st,char c)                             //to insert value inside the created stack one by one.
{
	if(st->top==st->size-1)                                     //checking if stack is full or not.
	printf("Stack oveflow!!");
	else
	{
		st->top++;                                            //incrementing value of top pointer by 1.
		st->S[st->top]=c;                                    //storing value of num inside stack.
	}
}

char pop(struct stack *st)                                   //to pop or remove the last element inside the stack onr by one.
{
	if(st->top==-1)                                          //to check if the stack is empty or not
	printf("Stack Underflow!!");
	else
	{
		char x = st->S[st->top];
		st->top--;                                           //decereasing value of top pointer, doing so will remove the top most element inside stack                
		return x;
	}
}

int isOperand(char c)                                        //function to check if the element inside the string is operand or not
{
	if(c=='+'||c=='-'||c=='*'||c=='/')                       //checking condition of operand
	return 0;
	else
	return 1;
}

int pre(char c)                                            //function to check the precedence of the operator recieved as parameter
{
	if(c=='+'||c=='-')                                       //Precedence of + and - = 1           
	return 1;                                                //hence returning 1
	else if(c=='*'||c=='/')                                  //Precedence of * and / = 2  
	return 2;                                               //hence returning 1
	
	return 0;
}

int isEmpty(struct stack *st)
{
	if(st->top==-1)
	{
		return 1;
	}
	else
	return 0;
}

void convert(char *infix,struct stack *st)                 //function to convert infix equation to postfix equation
{
	int len = strlen(infix); 
	
	char *postfix = (char *)malloc(strlen(infix)+1);       //using malloc()  function to allocate memore and create array inside heap memory 
	int i=0,j=0;
	
	while(infix[i]!='\0')                                  //string always ends with null character
	{
		if(isOperand(infix[i]))                            //calling  function isOperand() and passing infix equation as parameter 
		postfix[j++]=infix[i++];                           //if condition is true than copying value and incrementing both i and j
		else
		{
			if(pre(infix[i]) > pre(st->S[st->top]))       //if precedence of stack top operator is less than that of infix 
			{
				push(st,infix[i++]);                      //pushing that operator inside stack and incrementing i
			}
			else
			{
				postfix[j++]=pop(st);                    //if not than popping element and storing in postfix equation
			}
		}
	}
	
	while(!isEmpty(st))                                 //using while till stack become empty
	{
		postfix[j++]=pop(st);                          //storing rest of values in postfix equation
	}
	postfix[j]='\0';                                   //initializing last value inside string to be null character

	for(i=0;i<len;i++)
	{
		printf("%c",postfix[i]);                        //printing postfix equation using or loop
	}

}
int main()
{
	struct stack st;
	st.top=-1;
	char *infix = "a+b*c-d/e";                                 //infix equation
	st.size=(strlen(infix));    
	printf("Infix equation is ");
	for(int i=0;i<st.size;i++)
	{
		printf("%c",infix[i]);                        //printing postfix equation using or loop
	} 
	printf("\nPostfix equation is ") ;                             
	st.S = (char *)malloc(strlen(infix));                      //using malloc()  function to allocate memore and create array inside heap memory

	convert(infix,&st);                                        //calling convert function, passing infix equation and stack as parameter
	
	
}
