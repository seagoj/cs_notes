//NAME/////////////////
//Jeremy Seago       //
//CSC 260            //
//heap.cpp           //
///////////////////////

//INCLUDES//////////////////////////////////////////////////////////////////////
#include <iostream.h>
#include "heap.h"
////////////////////////////////////////////////////////////////////////////////


template <class E>
BinaryHeap<E>::BinaryHeap( int capacity )
: array( capacity + 1 ), currentSize( 0 )
{
}

template <class E>
void BinaryHeap<E>::printHeap()
{
    for(int i=1;i<=currentSize; i++)
        cout<<array[i]<<" ";
    cout<<endl;
}

template <class E>
void BinaryHeap<E>::insert( const E & x )
{
    assert(!isFull());
    
    int hole = ++currentSize;
    cout<<"Sliding "<<array[hole/2]<<" down into position "<<hole<<endl;
    for( ; hole > 1 && x < array[ hole / 2 ]; hole /= 2 )
array[ hole ] = array[ hole / 2 ];
    array[ hole ] = x;
}

template <class E>
const E & BinaryHeap<E>::findMin( ) const
{
    assert(!isEmpty( ));
    
    return array[ 1 ];
}

template <class E>
void BinaryHeap<E>::deleteMin( )
{
    assert(!isEmpty( ));

    array[ 1 ] = array[ currentSize-- ];
    percolateDown( 1 );
}

template <class E>
void BinaryHeap<E>::deleteMin( E & minItem )
{
    assert(!isEmpty( ));

    cout<<"Deleting minimum= "<<array[1]<<endl; 
    minItem = array[ 1 ];
    array[ 1 ] = array[ currentSize-- ];
    percolateDown( 1 );
}

template <class E>
void BinaryHeap<E>::buildHeap(vector<E> & v,int size)
{    
    for(int i=0;i<size;i++)
        array[i+1]=v[i];    
    buildHeap();
}

template <class E>
void BinaryHeap<E>::buildHeap( )
{
    for( int i = currentSize / 2; i > 0; i-- )
        percolateDown( i );
}
        
template <class E>
bool BinaryHeap<E>::isEmpty( ) const
{
    return currentSize == 0;
}

template <class E>
bool BinaryHeap<E>::isFull( ) const
{
    return currentSize == array.size( ) - 1;
}

template <class E>
void BinaryHeap<E>::makeEmpty( )
{
    currentSize = 0;
}

template <class E>
void BinaryHeap<E>::percolateDown( int hole )
{
int child;
E tmp = array[ hole ];

for( ; hole * 2 <= currentSize; hole = child )
{
   child = hole * 2;
   if( child != currentSize && array[ child + 1 ] < array[ child ] )
      child++;
   if( array[ child ] < tmp )
   {
      cout<<"Sliding "<<array[child]<<" up into position"<<hole<<endl;
      array[ hole ] = array[ child ];
   }
   else
      break;
}
array[ hole ] = tmp;
}

