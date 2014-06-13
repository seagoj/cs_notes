
#ifndef HEAP_H
#define HEAP_H

#include "vector.h"

template <class E>
class BinaryHeap
{
    public:
        BinaryHeap(int capacity=100);
        
        bool isEmpty() const;
        bool isFull() const;
        const E & findMin() const;
        
        void insert(const E &x);
        void deleteMin();
        void deleteMin(E & minItem);
        void makeEmpty();
        void printHeap();
        void buildHeap(vector<E> & v, int size);
        
    private:
        int currentSize;
        vector<E> array;
        void buildHeap();
        void percolateDown(int hole);
        
};

#include "heap.cpp"
#endif

