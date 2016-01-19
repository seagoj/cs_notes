#include<iostream.h>

void beer():data(0);
{

}

void beer::display()
{
    cout<<data;
}

template<class E>
void beer::insert(const E & item)
{
    data=item;            
}
