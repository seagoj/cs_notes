#ifndef VECTOR_CPP
#define VECTOR_CPP

#include"vector.h"

template <class E>
const vector<E> & vector<E>::operator=(const vector<E> & rhs)
{
    if(this!=&rhs)
    {
        delete[] objects;
        currentSize=rhs.size();
        objects=new E[currentSize];
        for(int k=0;k<currentSize; k++)
           objects[k]=rhs.objects[k];
    }
    return *this;
}

template <class E>
void vector<E>::resize(int newSize)
{
    E *oldArray=objects;
    int numToCopy=newSize<currentSize ?
       newSize:currentSize;
    
    objects=new E[newSize];
    currentSize=newSize;
    for(int k=0;k<numToCopy;k++)
       objects[k]=oldArray[k];
    delete[] oldArray;
}
#endif    
                 
