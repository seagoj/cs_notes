//NAME///////////////////////
//Jeremy Seago             //
//CSC 260                  //
//hash.h                   //
/////////////////////////////

#ifndef HASH_H_
#define HASH_H_

//INCLUDES//////////////////////////////////////////////////////////////////////
#include "vector.h"
//#include "bool.h"
////////////////////////////////////////////////////////////////////////////////

//DECLARATIONS//////////////////////////////////////////////////////////////////
int hash( int key, int tableSize );
int nextPrime(int number);
////////////////////////////////////////////////////////////////////////////////

//HASHTABLE CLASS//p.193////////////////////////////////////////////////////////
template <class E>
class HashTable
{
    public:
        HashTable( const E & notFound, int size = 101 );
        HashTable( const HashTable <E> & rhs )
        : ITEM_NOT_FOUND( rhs.ITEM_NOT_FOUND ),
        array( rhs.array ), currentSize( rhs.currentSize ) { }

        E & find( const E & x );

        void makeEmpty( );
        void insert( const E & x );
        void remove( const E & x );
        void printTable();

        const HashTable & operator=( const HashTable & rhs );

        enum EntryType { ACTIVE, EMPTY, DELETED };

    private:
        struct HashEntry
        {
            E element;
            EntryType info;

            HashEntry( const E & e = E( ), EntryType i = EMPTY )
            : element( e ), info( i ) { }
        };
            
        vector<HashEntry> array;
        int currentSize;
        E ITEM_NOT_FOUND;

        bool isActive( int currentPos ) const;
        int findPos( const E & x ) const;
        void rehash( );
};
////////////////////////////////////////////////////////////////////////////////

//NEXTPRIME()//mine/////////////////////////////////////////////////////////////
int nextPrime(int number)
{
    int x=number+1;
    int prime=0;

    while((number>=2)&&(prime!=1))
    {
        if( (x%number)!= 0)
        {
                if(number==2)
                   prime=1;
                else
                   number--;
        }
        else
        {
                number=x;
                x=x+1;
        }
    }
    return x;    
}
////////////////////////////////////////////////////////////////////////////////

//HASH()//mine//////////////////////////////////////////////////////////////////
int hash( int key, int tableSize )
{
    if(key<0) key= -key;
    return key % tableSize;
}
////////////////////////////////////////////////////////////////////////////////
#include"hash.cpp"
#endif
