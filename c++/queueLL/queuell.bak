//Jeremy Seago
//CSC 170
//queueLL.h

#include"bool.h"
#include"linklist.h"
#ifndef QUEUELL_H
#define QUEUELL_H

template <class E> class queue:protected LinkedList<E>
{
	public:
		//class constructors
		queue();
		queue(const queue<E> &q);

		//function memebers
		bool empty();
		void enqueue(const E & item);
		E dequeue();
		queue<E>& operator = (const queue<E>& rhs);
		void print();

	protected:
		node* myLast;
};
#endif
#include"queuell.cpp"
