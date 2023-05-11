#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *nxt;
};
struct node*top=NULL;
void push(int value)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=value;
	temp->nxt=NULL;
	if(top==NULL)
	{
		top=temp;
	}
	else
	{
		temp->nxt=top;
		top=temp;
	}
	printf("Value pushed successfully!!\n");
}
void pop()
{
	if(top==NULL)
	{
		printf("Stack was already empty!\n");
	}
	else
	{
		struct node *p=top;
		top=top->nxt;
		p->nxt=NULL;
		free(p);
	}
	printf("element was removed successfully!!\n");
}
void peek()
{
	if(top==NULL)
	{
		printf("Stack was already empty!!\n");
	}
	else
	{
		printf("Topmost Element in the stack is :%d\n",top->data);
	}
}
void display()
{
	if(top==NULL)
	{
		printf("Stack was Empty\n");
	}
	else
	{
		struct node *p=top;
		while(p !=NULL)
		{
			printf("%d-->",p->data);
			p=p->nxt;
		}
	}
}
	
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	peek();
	display();
	pop();
	peek();
	display();
	return 0;
}
