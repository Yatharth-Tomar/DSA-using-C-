#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
struct stack
{
	int top;
	char *str;
	int size;
};

void push(struct stack *s,char c)
{
	if(s->top==s->size-1)
	printf("Stack overflow");
	else
	{
		s->top++;
		s->str[s->top]=c;
	}
}
int pop(struct stack *s,char c)
{
	int x=-1;
	if(s->top==-1)
	printf("Stack underflow");
	else
	{
		x=s->str[s->top];
		s->top--;
	}
	return x;
}
bool isEmpty(struct stack s)
{
	if(s.top==-1)
	return true;
	else
	return false;
}
void display(struct stack *st)
{
    int i;
	if(st->top==-1)
	printf("Stack is empty\n");
	else
	{
		for(i=st->top;i>=0;i--)
		printf("%d\n",st->str[i]);
	
	}
}

int main()
{
	struct stack s;
	char *exp= "(((a+b)*(a-b)))";
	s.size = strlen(exp);
	s.str=(char *)malloc(s.size*sizeof(char));
	s.top=-1;
	int i;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
		{
			push(&s,exp[i]);
		}
		else 
		{
			if(isEmpty(s))
			{
				printf("Not balanced");
				exit(0);
			}
			else if(exp[i]==')')
			{
				pop(&s,exp[i]);
			}
		}
	} 
	if(isEmpty(s)==true)
	printf("Balanced");
	else
	printf("Not Balanced");

	
}
