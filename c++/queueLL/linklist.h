//Jeremy Seago
//CSC 170
//linklist.h
#include"bool.h"
#ifndef LINKLIST_H
#define LINKLIST_H
template <class E> class LinkedList
{
	public:

		//constructors
			LinkedList();
			LinkedList(const LinkedList<E> &list);
		//destructor
			~LinkedList();
		//assignment
			const LinkedList<E>& operator=(const LinkedList<E> &rhs);
		//accessors
         E list(int i);
			int length() const;
			bool empty() const;
			bool atEnd() const;
			E access();
		//modifyers
			void first();
			void next();
			void modify(const E &item);
			void insert(const E &item);
			E remove();
			void merge(LinkedList<E>& list1, LinkedList<E>& list2);
	protected:
		//data members
			struct node				//definition of node type
			{
				E data;
				node*next;
			};

		//External pointers to the list
			node* myFirst;
			node* myCurrent;
			node* myPrevious;
		//The number of nodes in the list
			int myLength;
		//Member functions
			node* getNode(const E &item);
};
#include"linklist.cpp"
#endif


