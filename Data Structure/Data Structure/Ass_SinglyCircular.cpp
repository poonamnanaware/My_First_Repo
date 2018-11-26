/*#include<iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
	int Data;
	node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCircular_linkedList
{
 private:
	 PNODE Head;
	 PNODE Tail;

public:
	SinglyCircular_linkedList();
	~SinglyCircular_linkedList();
	BOOL InsertFirst ( int );
	BOOL InsertLast ( int );
	BOOL InsertAtPosition ( int, int );
	inline void Display( );
	inline int Count( );
	BOOL DeleteFirst( );
	BOOL DeleteAtPosition(int);
	BOOL DeleteLast( );
};

SinglyCircular_linkedList ::SinglyCircular_linkedList ( )
{
	Head = NULL;
	Tail = NULL;
}

SinglyCircular_linkedList ::~SinglyCircular_linkedList ( )
{
	PNODE Temp;
	int iCnt = Count();

	if ( (Head != NULL) && (Tail!= NULL))
	{
		while(iCnt != 0)
		{
			Temp = Head->Next;
			delete Head;
			Head = Temp;
			iCnt--;
		 }
	 }
}

BOOL SinglyCircular_linkedList::InsertFirst( int no )
{
	PNODE newn = NULL;
	newn = new NODE;
	
	if (newn == NULL)
	{
		 return FALSE;
	 }

	newn->Next = NULL;

	newn->Data = no;

	if ((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
		Tail->Next = Head; 
	}
	else
	{
		 newn -> Next = Head;
		 Head = newn;
		 Tail->Next = Head;
	 }

	return TRUE;
}

BOOL SinglyCircular_linkedList::InsertLast ( int no)
{
	PNODE newn = NULL;
	newn = new NODE;

	if (newn == NULL)
	{
		return FALSE;
	}

	newn->Next = NULL;
	newn->Data = no;

	if ((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
		Tail->Next = Head;
	}
	else
	{
		Tail->Next = newn;
		Tail = Tail->Next;
		Tail->Next = Head;
	}
	
	return TRUE;
}

BOOL SinglyCircular_linkedList::InsertAtPosition( int no, int pos)
{
	if(((Head == NULL) && (Tail == NULL)) || (pos > Count()+1) || (pos <= 0))
	{
		return FALSE;
	}
	
	if( pos == 1 )
	{
		return(InsertFirst(no));
	}
	else if(pos == (Count( )) + 1)
	{
		return(InsertLast(no));
	}
	else
	{
		PNODE newn = NULL, temp = Head;

		newn = new NODE;
		if (newn == NULL)
		{
			return FALSE;
		}
	
		newn -> Next = NULL;
		newn -> Data = no;

		for(int i = 1; i <= (pos-2); i++)
		{
		temp = temp -> Next;
		}
		
		newn -> Next = temp -> Next;
		temp -> Next = newn;
	}
	return TRUE;
}

BOOL SinglyCircular_linkedList::DeleteFirst()
{
	PNODE temp = Head;

	if((Head == NULL) && (Tail == NULL))
	{
		return FALSE;
	}
	else if(Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head->Next;
		delete Tail->Next;
		Tail->Next = Head;
	}

	return TRUE;
}

BOOL SinglyCircular_linkedList::DeleteLast()
{
	if((Head == NULL) && (Tail == NULL))
	{
		return FALSE;
	}
	else if(Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		PNODE temp = Head;

		while(temp -> Next != Tail)
		{
			temp = temp -> Next;
		}

		delete Tail;
		Tail = temp;
		Tail->Next = Head;
	}
	return TRUE;
}

BOOL SinglyCircular_linkedList::DeleteAtPosition( int pos )
{
	if(((Head == NULL) && (Tail == NULL)) || (pos > Count()) || (pos <= 0))
	{
		return FALSE;
	}
	else if( pos == 1 )
	{	
		DeleteFirst();
	}
	else if(pos == (Count( )))
	{
		DeleteLast();
	}
	else
	{
		PNODE temp1 = Head, temp2 = NULL;

		for(int i = 1; i<= (pos-2); i++)
		{
			temp1 = temp1 -> Next;
			++i;
		}

		temp2 = temp1 -> Next;
		temp1->Next = temp2->Next;

		delete temp2;
	}
	return TRUE;
}

void SinglyCircular_linkedList::Display()
{
	PNODE Temp = Head;
	
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}

	do
	{
		cout<<Temp -> Data<<" -> ";
		Temp = Temp -> Next;
	}while(Temp != Tail->Next);

	cout<<"NULL\n";
}

int SinglyCircular_linkedList::Count()
{
	PNODE Temp = Head;
	int iCnt = 0;

	if((Head == NULL) && (Tail == NULL))
	{
		return 0;
	}

	do
	{
		iCnt++;
		Temp = Temp -> Next;
	}while(Temp != Tail->Next);

	return iCnt;
}

int main()
{
	SinglyCircular_linkedList obj1;
	SinglyCircular_linkedList *obj2 = new SinglyCircular_linkedList();

	obj1.InsertFirst(51);
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);

	obj1.Display();
	
	cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

	obj1.InsertFirst(101);
	obj1.InsertFirst(111);

	obj1.Display();

	cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

	obj1.InsertAtPosition(75, 4);
	obj1.Display();

	cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

	obj1.DeleteFirst();
	obj1.Display();

	obj1.DeleteLast();
	obj1.Display();

	obj1.DeleteAtPosition(2);
	obj1.Display();


	obj2->InsertFirst(501);
	obj2->InsertFirst(511);
	obj2->InsertFirst(521);

	obj2->Display();

	obj2->InsertLast(551);

	obj2->InsertAtPosition(601, 3);

	obj2->Display();

	cout<<"\nNumber of nodes : "<<obj2->Count()<<"\n";

	delete obj2;

	return 0;
}*/