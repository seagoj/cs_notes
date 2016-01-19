//Jeremy Seago
//CSC 170
//linkedlist.cpp

#include<assert.h>
#include"bool.h"

//default constructor
template <class E>
LinkedList<E>::LinkedList():myFirst(0), myCurrent(0), myPrevious(0), myLength(0)	//sets default values in classes
{
}

//copy constructor
template<class E>
LinkedList<E>::LinkedList(const LinkedList<E>& list):myFirst(0), myCurrent(0), myPrevious(0), myLength(0)
{
	//Temporary pointer to first node of list
		node* probe=list.myFirst;
	//Loop until end of list is reached; copies original list to new list
		while(probe!=0)
		{
			//Insert data from node in list
				insert(probe->data);				//'data' is the data component of the node
			//Advance to next node of receiver
				next();
			//Move probe to next node in list
				probe=probe->next;				//'next' is the pointer component of the node
		}
}

//destructor
template<class E>
LinkedList<E>::~LinkedList()
{
	E item;

	first();
	while(!empty())
		item=remove();
}

//assignment operator
template<class E>
const LinkedList<E> & LinkedList<E>::operator = (const LinkedList<E> & rhs)		//return type for '=' assignment operator is always const ref to the class
{
	if(this !=&rhs)
	{
		first();
		while(!empty())
		{
			remove();
		}
		node* probe=rhs.myFirst;
		while(probe!=0)
		{
			insert(probe->data);
			next();
			probe=probe->next;
			//next();
		}
	}
	return *this;
}

//ACCESSOR length()
template<class E>
int LinkedList<E>::length()const
{
	return myLength;
}

//ACCESSOR empty()
template<class E>
bool LinkedList<E>::empty() const
{
	return(myLength == 0);
}

//ACCESSOR atEnd()
template<class E>
bool LinkedList<E>::atEnd()const
{
	return(myCurrent==0);
}

//ACCESSOR access()
template<class E>
E LinkedList<E>::access()
{
	assert(myCurrent!=0);
	return (myCurrent->data);
}

//MODIFIER first()
template<class E>
void LinkedList<E>::first()
{
	myCurrent=myFirst;
	myPrevious=0;
}

//MODIFIER modify()
//changes the myCurrent data element in the list
template<class E>
void LinkedList<E>::modify(const E &item)
{
	assert(myCurrent!=0);
	myCurrent->data=item;
}

//MODIFIER next()
template<class E>
void LinkedList<E>::next()
{
	myPrevious=myCurrent;
	myCurrent=myCurrent->next;
}

//PRIVATE MEMBER FUNCTION getNode()
//creates a new node
template<class E>
LinkedList<E>::node* LinkedList<E>::getNode(const E &item) //the return type is node*, where node is a memeber of the LinkedList class
{
	node* newNode=new node;
	assert(newNode!=0);
	newNode->data=item;
	newNode->next=0;
	return newNode;
}

//insert()
template<class E>
void LinkedList<E>::insert(const E &item)
{
	node* newNode=getNode(item);
	if(myCurrent==myFirst)
	{
		myFirst=newNode;
	}
	else
	{
		myPrevious->next=newNode;
	}
	newNode->next=myCurrent;
	myCurrent=newNode;
	myLength++;
}

//remove()
template<class E>
E LinkedList<E>::remove()
{
	assert(myCurrent!=0);
	E data=myCurrent->data;
	node* garbage=myCurrent;
	if(myCurrent==myFirst)
	{
		myFirst=myCurrent->next;
	}
	else
	{
		myPrevious->next=myCurrent->next;
	}
	myCurrent=myCurrent->next;
	delete garbage;
	--myLength;
	return data;
}

//merge()
template<class E>
void LinkedList<E>::merge(LinkedList<E>& list1, LinkedList<E>& list2)
{
	list1.first();
   list2.first();
	while((!list1.atEnd())&&(!list2.atEnd()))
	{
		if((list1.access())>=(list2.access()))
		{
			insert(list2.access());
			next();
			list2.next();
		}
		else
		{
			insert(list1.access());
			next();
			list1.next();
		}
	}
	if(list1.atEnd())
	{
		while(!list2.atEnd())
		{
			insert(list2.access());
			next();
			list2.next();
		}
	}
	if(list2.atEnd())
	{
		while(!list1.atEnd())
		{
			insert(list1.access());
			next();
			list1.next();
		}
	}
}

//display
template<class E>
E LinkedList<E>::list(int i)
{
	first();
	for(int j=1;j<=i;j++)
		next();
	return myCurrent->data;
}



