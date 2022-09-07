#include<stdio.h>
#include<stdlib.h>
struct linklist
{
	int data;
	struct linklist *nextad;
}*first,*second,*third;

void traversal(struct linklist *ptr)
{
	while(ptr!=NULL)
	{
		printf("element is %d\n",ptr->data);
    	ptr=ptr->nextad;
	}
	
}
int main()
{
	first=(struct linklist *)malloc(sizeof(struct linklist));
	second=(struct linklist *)malloc(sizeof(struct linklist));
	third=(struct linklist *)malloc(sizeof(struct linklist));
	
	first->data=7;
	first->nextad=second;
	
	second->data=14;
	second->nextad=third;
	
	third->data=21;
	third->nextad=NULL;
	
	traversal(first);
	

}
