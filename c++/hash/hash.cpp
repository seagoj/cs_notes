//NAME///////////////////////
//Jeremy Seago             //
//CSC 260                  //
//hash.cpp                 //
/////////////////////////////

//INCLUDES//////////////////////////////////////////////////////////////////////
#include "hash.h"
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
//#include "bool.h"
////////////////////////////////////////////////////////////////////////////////

//REHASH()//p.200///////////////////////////////////////////////////////////////
template <class E>
void HashTable<E>::rehash()
{
    cout<<endl<<"Rehashing: ="<<currentSize<<", array size"<<
    array.size()<<endl;
    printTable();
    
    vector<HashEntry> oldArray = array;
    
    array.resize( nextPrime( 2 * oldArray.size( ) ) );
    for( int j = 0; j < array.size( ); j++ )
       array[ j ].info = EMPTY;
        
    currentSize = 0;
    for( int i = 0; i < oldArray.size( ); i++ )
    if( oldArray[ i ].info == ACTIVE )
        insert( oldArray[ i ].element );
}
////////////////////////////////////////////////////////////////////////////////

//HASHTABLE CONSTRUCTOR//p.194//////////////////////////////////////////////////
template <class E>
HashTable<E>::HashTable( const E & notFound, int size )
 : ITEM_NOT_FOUND( notFound ), array( nextPrime( size ) )
{
    makeEmpty( );
}
////////////////////////////////////////////////////////////////////////////////
        
//INSERT()//p.196///////////////////////////////////////////////////////////////
template <class E>
void HashTable<E>::insert( const E & x )
{
    int currentPos = findPos( x );
    if( isActive( currentPos ) )
        return;
    array[ currentPos ] = HashEntry( x, ACTIVE );
        
    if( ++currentSize > array.size( ) / 2 )
       rehash( );
}
////////////////////////////////////////////////////////////////////////////////
        
//FINDPOS()//p.195//////////////////////////////////////////////////////////////
        template <class E>
        int HashTable<E>::findPos( const E & x ) const
        {
              int collisionNum = 0;
              int currentPos = hash( x, array.size( ) );

              while( array[ currentPos ].info != EMPTY &&
                   array[ currentPos ].element != x )
            {
              currentPos += 2 * ++collisionNum - 1;  // Compute ith probe
              if( currentPos >= array.size( ) )
              currentPos -= array.size( );
            }

            return currentPos;
        }
////////////////////////////////////////////////////////////////////////////////

//REMOVE()//p.196///////////////////////////////////////////////////////////////
        template <class E>
        void HashTable<E>::remove( const E & x )
        {
            int currentPos = findPos( x );
            if( isActive( currentPos ) )
                array[ currentPos ].info = DELETED;
        }
////////////////////////////////////////////////////////////////////////////////

//PRINTTABLE()//mine////////////////////////////////////////////////////////////
        template <class E>
        void HashTable<E>::printTable()
        {
            //cout<<setiosflags(ios::right);
            for(int i=0; i<array.size(); i++)
            {   
                cout<<i<<setw(10);
                if(array[i].info==ACTIVE)
                   cout<<array[i].element<<endl;
                else
                   cout<<"OPEN"<<endl;
            }
        }
////////////////////////////////////////////////////////////////////////////////

//FIND()//p.195/////////////////////////////////////////////////////////////////
        template <class E>
        E & HashTable<E>::find( const E & x )
        {
            int currentPos = findPos( x );
            if( isActive( currentPos ) )
                return array[ currentPos ].element;
            else
                return ITEM_NOT_FOUND;
        }
////////////////////////////////////////////////////////////////////////////////

//MAKEEMPTY()//p.194////////////////////////////////////////////////////////////
        template <class E>
        void HashTable<E>::makeEmpty( )
        {
            currentSize = 0;
            for( int i = 0; i < array.size( ); i++ )
                array[ i ].info = EMPTY;
        }
////////////////////////////////////////////////////////////////////////////////

//OPERATOR OVERLOAD =///////////////////////////////////////////////////////////
        template <class E>
        const HashTable<E> & HashTable<E>::
        operator=( const HashTable<E> & rhs )
        {
            if( this != &rhs )
            {
                array = rhs.array;
                currentSize = rhs.currentSize;
            }
            return *this;
        }
////////////////////////////////////////////////////////////////////////////////

//ISACTIVE()//p.195/////////////////////////////////////////////////////////////
        template <class E>
        bool HashTable<E>::isActive( int currentPos ) const
        {
            return array[ currentPos ].info == ACTIVE;
        }
////////////////////////////////////////////////////////////////////////////////
