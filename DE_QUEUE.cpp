#include"DE_QUEUE.h"

DEqueue::DEqueue()
{
	front=rear=NULL;
	size=0;
}
int DEqueue::isEmpty()
{
	return front==NULL;
}
void DEqueue::enqueue(int val)
{
	NODE* newnode=new NODE();
	newnode->setdata(val);
	if(front==NULL)
	{
		newnode->setnext(NULL);
		newnode->setprenext(NULL);
		front=newnode;
		rear=newnode;
	}
	else
	{
		newnode->setnext(rear->getnext());
		newnode->setprenext(rear);
		rear->setnext(newnode);
		rear=newnode;
	}
	size++;
}
void DEqueue::insertFront(int val)
{
	NODE* newnode=new NODE();
	newnode->setdata(val);
	if(front==NULL)
	{
		newnode->setnext(NULL);
		newnode->setprenext(NULL);
		front=newnode;
		rear=newnode;
	}
	else
	{
		newnode->setnext(front);
		newnode->setprenext(front->getprenext());
		front->setprenext(newnode);
		front=newnode;

	}
	size++;
}
int DEqueue::deQueue()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty."<<endl;
		return -1;
	}
	else
	{
		NODE* temp=front;
		int val=front->getdata();
		front=front->getnext();
		front->setprenext(NULL);
		delete temp;
		size--;
		return val;
	}
	
}
int DEqueue::deleteRear()
{
	if(isEmpty())
	{
		cout<<"Queue is empty."<<endl;
		return -1;
	}
	else
	{
		int val=rear->getdata();
		NODE* temp=rear;
		rear=rear->getprenext();
		delete temp;
		rear->setnext(NULL);
		size--;
		return val;
	}
}
void DEqueue::display()
{
	NODE* temp=front;
	cout<<"Values in Queue are: ";
	for(int i=0;i<size;i++)
	{
		cout<<temp->getdata()<<" ";
		temp=temp->getnext();
	}
	cout<<endl;

}