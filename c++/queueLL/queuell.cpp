//Jeremy Seago
//CSC 170
//queueLL.cpp

#include<iostream.h>

template<class E>
queue<E>::queue():LinkedList<E>()
{
	myLast=0;
}

template<class E>
queue<E>::queue(const queue &q):LinkedList<E> (q)
{
	myLast=q.myLast;
}

template<class E>
queue<E>::~queue():Linked<E>list()
{
	//first();
	//while(!atEnd())
	//	remove();
}

template<class E>
bool queue<E>::empty()
{
	return(myLength==0);
}

template <class E>
void queue<E>::enqueue(const E& item)
{
	myPrevious=myLast;
	myCurrent=0;
	insert(item);
	myLast=myCurrent;
}

template<class E>
E queue<E>::dequeue()
{
	assert(!empty());
	first();
	return remove();
}

template<class E>
queue<E> & queue<E>::operator = (const queue<E>& rhs)
{
	if(this!=& rhs)
	{
		first();
		while(!atEnd())
			remove();
		node* probe=rhs.myFirst;
		while(probe!=0)
		{
			insert(probe->data);
			probe=probe->next;
			next();
		}
		myLast=rhs.myLast;
	}
	return *this;
}

template<class E>
void queue<E>::print()
{
	E item;
	enqueue('#');
	item=dequeue();
	do
	{
		cout<<item<<" ";
		enqueue(item);
		item=dequeue();
	}while(item!='#');
	cout<<endl;
}


