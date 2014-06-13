        #ifndef BINARY_HEAP_H
        #define BINARY_HEAP_H

        #include "vector.h"

//BINARYHEAP CLASS//////////////////////////////////////////////////////////////
        template <class E>
        class BinaryHeap
        {
          public:
            explicit BinaryHeap( int capacity = 100 );

            bool isEmpty( ) const;
            bool isFull( ) const;
            const E & findMin( ) const;

            void insert( const E & x );
            void deleteMin( );
            void deleteMin( E & minItem );
            void makeEmpty( );
            void printHeap();
            void buildHeap(vector<E> & v,int size);

          private:
            int currentSize;
            vector<E> array;

            void buildHeap( );
            void percolateDown( int hole );
        };
////////////////////////////////////////////////////////////////////////////////
        #include "BinaryHeap.cpp"
        #endif
