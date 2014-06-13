//LINKLIST.H
//class for a doubly linked list

//Jeremy Seago
//CSC 260

//#include"bool.h"
#include<stdlib.h>

template<class E>
class linklist
{
	public:
		linklist();
		linklist(const linklist & rhs);
		//~linklist();

		void insert(const E & data);
		bool isEmpty() const;
      		E access();


		const linklist & operator=(const linklist & rhs);


	private:
		struct node;
		typedef node *pointer;

		struct node
		{
			pointer back;
			E data;
			pointer next;
		};
		
		pointer first;
		pointer ptr;;
}

//#include"linklist.cpp"
