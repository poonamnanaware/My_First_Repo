#include<iostream>

using namespace std;
#define MAX 10

class stack
{
private:

	int ptr[MAX];
	int top;


public:
	stack();
	//~stack();

	void push(int);
	void pop();
	void display();
};

int main()
{
	stack obj;

	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.pop();

	obj.display();

	return 0;
}

stack::stack()
{
	top=-1;
	

}

/*stack::~stack()
{
	top=-1;
}*/

void stack::push(int value)
{
	if(top>(MAX-1))
	{
		cout<<"Stack full\n";
		return;
	}
	ptr[++top]=value;
	
}

void stack::pop()
{
	if(top<0)
	{
		cout<<"Empty stack";
		return;
	}

	ptr[top--];
	
}


void stack::display()
{
	if(top<0)
	{
		cout<<"Empty stack";
		return;
	}
	else
	{
		for(int i=top;i>=0;i--)
		{
			cout<<ptr[i]<<"\t";
		}
	}
}







