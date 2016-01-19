//TEST.CPP
//Jeremy Seago
//CSC 260

#include"linklist.h"
#include<iostream>

int main()
{
	linklist<int> list1;
	list1.insert(7);
	std::cout<<list1.access()<<std::endl;
	std::cout<<list1.isEmpty()<<std::endl;
	return 0;
}
