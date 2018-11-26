/*#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsetFirst(PPNODE,PPNODE,int);
void Display(PNODE,PNODE);
void InsetLast(PPNODE,PPNODE,int);
void InsetAtPos(PPNODE,PPNODE,int,int);
int Count(PNODE,PNODE);
void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(PPNODE,PPNODE);
void DeleteAtPos(PPNODE,PPNODE,int);



int main()
{
	PNODE First=NULL;
	PNODE Last=NULL;
	int iRet=0;

	
	InsetFirst(&First,&Last,51);
	InsetFirst(&First,&Last,21);
	InsetFirst(&First,&Last,11);
	InsetFirst(&First,&Last,100);

	Display(First,Last);

	InsetLast(&First,&Last,101);
	Display(First,Last);

	iRet=Count(First,Last);
	printf("No of Elements:-%d\t\n",iRet);


	InsetAtPos(&First,&Last,101,3);
	Display(First,Last);

	DeleteFirst(&First,&Last);
	DeleteFirst(&First,&Last);
	DeleteFirst(&First,&Last);
	
	Display(First,Last);

	DeleteLast(&First,&Last);
	Display(First,Last);

	InsetAtPos(&First,&Last,600,3);
	Display(First,Last);

	InsetAtPos(&First,&Last,800,2);
	Display(First,Last);

	DeleteAtPos(&First,&Last,2);
	Display(First,Last);

	DeleteAtPos(&First,&Last,1);
	Display(First,Last);

	DeleteAtPos(&First,&Last,1);
	Display(First,Last);

	DeleteAtPos(&First,&Last,2);
	Display(First,Last);

	return 0;
}

void InsetFirst(PPNODE head,PPNODE tail,int value)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=value;
	newn->next=NULL;

	if((*head==NULL)&&(*tail==NULL))
	{
		*head=*tail=newn;
		(*tail)->next=*head;
	}
	else
	{
		newn->next=*head;
		*head=newn;
		(*tail)->next=*head;
	}
}
	

void Display(PNODE head,PNODE tail)
{
	do
	{
		printf("%d\t",head->data);
		head=(head)->next;
	}while(head!=tail->next);
	printf("\n");
}

int Count(PNODE head,PNODE tail)
{
	int iCnt=0;
	do
	{
		iCnt++;
		printf("%d\t",head->data);
		head=(head)->next;
	}while(head!=tail->next);
	return iCnt;
}



void InsetLast(PPNODE head,PPNODE tail,int value)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=value;
	newn->next=NULL;

	if((*head==NULL)&&(*tail==NULL))
	{
		*head=*tail=newn;
		(*tail)->next=*head;
	}
	else
	{
		newn->next=*head;
		(*tail)->next=newn;
		*tail=newn;
	}
}
	
void InsetAtPos(PPNODE head,PPNODE tail,int value,int iPos)
{
	PNODE newn=NULL;
	PNODE temp=*head;

	int i=0;
	int size=Count(*head,*tail); 

	
	if((iPos<1)||(iPos>size+1))
	{
		return;
	}
	
	if(iPos==1)
	{
		InsetFirst(head,tail,value);
	}
	if(iPos==(size+1))
	{
		InsetLast(head,tail,value);
	
	}

	else
	{
		newn=(PNODE)malloc(sizeof(NODE));

		newn->data=value;
		newn->next=NULL;

		for(i=1;i<=(iPos-2);i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
	}
}

void DeleteAtPos(PPNODE head,PPNODE tail,int iPos)
{
	PNODE temp1=*head;
	PNODE temp2=NULL;

	int i=0;
	int size=Count(*head,*tail); 

	
	if((iPos<1)||(iPos>size))
	{
		return;
	}
	
	if(iPos==1)
	{
		DeleteFirst(head,tail);
	}
	if(iPos==size)
	{
		DeleteLast(head,tail);
	
	}

	else
	{
		for(i=1;i<=(iPos-2);i++)
		{
			temp1=temp1->next;
		}
		temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
	}
	printf("Delete Successfully\n");
}


void DeleteFirst(PPNODE head,PPNODE tail)
{
	if((*head==NULL)&&(*tail==NULL))
	{
		return;
	}
	if(*head==*tail)
	{
		free(*head);
		*head=*tail=NULL;
	}
	else
	{
		*head=(*head)->next;
		(*tail)->next=*head;
	}
}

void DeleteLast(PPNODE head,PPNODE tail)
{
	PNODE temp=*head;
	if((*head==NULL)&&(*tail==NULL))
	{
		return;
	}
	if(*head==*tail)
	{
		free(*head);
		*head=NULL;
		*tail=NULL;
	}
	else
	{
		while(temp->next!=(*tail))
		{
			temp=temp->next;
		}
		free(*tail);
		*tail=temp;
		(*tail)->next=*head;
	}
}
*/
		


	

	





