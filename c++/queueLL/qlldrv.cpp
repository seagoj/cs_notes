//Jeremy Seago
//CSC 170
//lldriver.cpp
#include"queuell.h"
#include<iostream.h>
#include<conio.h>

void main()
{
	queue<int> q;
	queue<int> q1;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	q1.enqueue(6);
	cout<<"cout q using print():"<<endl;
	q.print();
	cout<<endl;
	cout<<"cout q using dequeue:"<<endl;
	while(!q.empty())
		cout<<q.dequeue()<<" ";
		cout<<endl<<endl;
	if(q.empty())
		cout<<"q is now empty."<<endl<<endl;
	cout<<"q1 is copied to temp using copy constructor."<<endl<<endl;
	queue<int> temp(q1);
	cout<<"q1 is copied to q using assignment operator."<<endl<<endl;
	q=q1;
	cout<<"cout q1 using print():"<<endl;
	q1.print();
	cout<<endl;
	cout<<"cout q1 using dequeue:"<<endl;
	while(!q1.empty())
		cout<<q1.dequeue()<<" ";
	cout<<endl<<endl;
	if(q1.empty())
		cout<<"q1 is now empty."<<endl<<endl;
	cout<<"comparison of q and temp:"<<endl<<"   Q:";
	while(!q.empty())
		cout<<q.dequeue()<<" ";
	cout<<endl<<"Temp:";
	while(!temp.empty())
			cout<<temp.dequeue()<<" ";
}


