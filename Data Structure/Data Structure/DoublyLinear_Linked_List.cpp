/*#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE,int);
void DisplayF(PNODE);
void InsertLast(PPNODE,int);
void DisplayB(PNODE);

void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);

int Count(PNODE);

void InsertAtPos(PPNODE,int,int);
void DeleteAtPos(PPNODE,int);


int main()
{
	PNODE First=NULL;
	int iRet=0;

	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);

	DisplayF(First);

	InsertLast(&First,101);

	DisplayF(First);
	DisplayB(First);

	DeleteFirst(&First);
	DisplayF(First);
	
	DeleteLast(&First);
	DisplayF(First);
	
	iRet=Count(First);
	printf("%d\n",iRet);

	InsertFirst(&First,151);
	InsertFirst(&First,121);
	InsertFirst(&First,111);

	DisplayF(First);
	
	InsertAtPos(&First,161,1);
	InsertAtPos(&First,800,5);
	InsertAtPos(&First,700,4);
	
	DisplayF(First);
	
	DeleteAtPos(&First,1);
	
	DisplayF(First);
	

	return 0;
}

void InsertFirst(PPNODE head,int value)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=value;
	newn->next=NULL;
	newn->prev=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else 
	{
		newn->next=*head;
		(*head)->prev=newn;
		*head=newn;
	}
}

void DisplayF(PNODE head)
{
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
	printf("\n");
}

void InsertLast(PPNODE head,int value)
{
	PNODE newn=NULL;
	PNODE temp=*head;
	
	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=value;
	newn->next=NULL;
	newn->prev=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else 
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;
	}
}

void DisplayB(PNODE head)
{	
	while(head->next!=NULL)
	{
		head=head->next;
	}

	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->prev;
	}
	printf("\n");
}

void DeleteFirst(PPNODE head)
{
	if(*head==NULL)
	{
		return;
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		*head=(*head)->next;
		free((*head)->prev);
		(*head)->prev=NULL;
	}
}
		
void DeleteLast(PPNODE head)
{
	PNODE temp=*head;

	if(*head==NULL)
	{
		return;
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}

		temp->prev->next=NULL;
		free(temp);
	}
}

int Count(PNODE head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	printf("\n");
	return iCnt;
}

void InsertAtPos(PPNODE head,int value,int iPos)
{
	PNODE temp=*head;
	PNODE newn=NULL;

	int Size=Count(*head);
	int i=0;

	if((iPos<1)||(iPos>Size+1))
	{
		return;
	}
	if(iPos==1)
	{
		InsertFirst(head,value);
	}
	else if(iPos==(Size+1))
	{
		InsertLast(head,value);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));

		newn->data=value;
		newn->next=NULL;
		newn->prev=NULL;

		for(i=1;i<=(iPos-2);i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
		newn->prev=temp;
	}
}

void DeleteAtPos(PPNODE head,int iPos)
{
	PNODE temp=*head;
	
	int Size=Count(*head);
	int i=0;

	if((iPos<1)||(iPos>Size))
	{
		return;
	}
	if(iPos==1)
	{
		DeleteFirst(head);
	}
	else if(iPos==Size)
	{
		DeleteLast(head);
	}
	else
	{
		for(i=1;i<=(iPos-1);i++)
		{
			temp=temp->next;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
}*/