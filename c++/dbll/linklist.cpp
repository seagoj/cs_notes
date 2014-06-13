//linklist.cpp
//Jeremy Seago
//CSC 260

#include<stdlib.h>
//#include"bool.h"

template<class E>
linklist<E>::linklist()
{
	first = new node;
	first->back = NULL;
	first->next = NULL;
	ptr = first;
}

template<class E>
bool linklist<E>::isEmpty() const
{
	return first->next == NULL;
}

template<class E>
void linklist<E>::insert(const E & data)
{
  //TEST
  pointer temp = new node;
  first->next = temp;
  temp->next = ptr;
  temp->back = ptr->back;
  temp->data=data;
  ptr = temp;
  //ENDTEST
}

template<class E>
E linklist<E>::access()
{
  return ptr->data;
}
