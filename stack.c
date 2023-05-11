#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void push()
{
	if(top==SIZE-1)
	{
		printf("Stack was full\n");
	}
	else
	{
		int value;
		printf("Enter an value:\n");
		scanf("%d",&value);
		top++;
		stack[top]=value;
		printf("Element was pushed successfully\n");
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack was empty\n");
	}
	else
	{
		top--;
		printf("Element was pop successfully\n");
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack was empty\n");
	}
	else
	{
		printf("Top element of the stack is %d\n",stack[top]);
	}
};
void Display()
{
	for(int i=0;i<SIZE;i++)
	{
		printf("%d ",stack[i]);
	}
}

int main()
{
	while(1)
	{
	int option;
	printf("\n1) push 2) pop 3) peek 4) Display 5) Exit\n");
	scanf("%d",&option);
		if(option == 1)
		{
			printf("You choose push operation\n");
			push();
		}
		else if(option == 2)
		{
			printf("You choose pop operation\n");
			pop();
		}
		else if(option == 3)
		{
			printf("You choose peek operation\n");
			peek();
		}
		else if(option == 4)
		{
			printf("You choose display operation\n");
			Display();
		}
		else
		{
			break;
		}
	}
	return 0;
}
