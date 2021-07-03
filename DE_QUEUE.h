#ifndef DE_QUEUES_H
#define De_QUEUES_H
#include<iostream>
using namespace std;
class NODE
{
private:
	int data;
	NODE *next;
	NODE* prenext;
public:
	void setdata(int val)
	{
		data=val;
	}
	int getdata()const
	{
		return data;
	}
	void setnext(NODE *ptr)
	{
		next=ptr;
	}
	void setprenext(NODE *ptr)
	{
		prenext=ptr;
	}
	NODE* getnext()
	{
		return next;
	}
	NODE* getprenext()
	{
		return prenext;
	}
};

class DEqueue
{
private:
	NODE* front;
	NODE* rear;
	int size;
public:
	DEqueue();
	void enqueue(int);
	int deQueue();
	void insertFront(int);
	int deleteRear();
	int isEmpty();
	void display();
};
#endif