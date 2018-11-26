/*#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node 
{
	int data;
	struct node *next;
};


typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE,int);

void InsertLast(PPNODE,int);

void Display(PNODE);

int Count(PNODE);

void InsertMiddle(PPNODE,int);



int main()
{
	PNODE First=NULL;
	
	int iRet=0;

	InsertFirst(&First,101);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);

	Display(First);

	InsertLast(&First,111);
	InsertLast(&First,121);

	Display(First);

	iRet=Count(First);

	printf("No. of Elements in Linked List-%d\n",iRet);

	InsertMiddle(&First,151);

	Display(First);




	return 0;
}

void InsertFirst(PPNODE head,int Value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=Value;
	newn->next=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}

}

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}

void InsertLast(PPNODE head,int Value)
{
	PNODE newn=NULL;
	PNODE temp=*head;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=Value;
	newn->next=NULL;

	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newn;
}

int Count(PNODE head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	
	return iCnt;
}


void InsertMiddle(PPNODE head,int Value)
{
	PNODE newn=NULL;
	PNODE temp=*head;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=Value;
	newn->next=NULL;

	if(temp==NULL)
	{
		temp=newn;
	}
	else
	{
		newn->next=temp->next;
		newn=temp->next;
	}

}

*/








