#ifndef VECTOR_H
#define VECTOR_H
class ArrayIndexOutOfBounds{};

template <class E>
class vector
{
    public:
        vector(int theSize=0): currentSize(theSize)
                {objects=new E[currentSize];}
        
        vector(const vector & rhs): objects(NULL)
                {operator=(rhs);}
        
        ~vector()
                {delete [] objects;}
        
        int size() const
                {return currentSize;}
        
        E & operator[](int index)
        {
                #ifndef NO_CHECK
                if(index<0||index>=currentSize)
                                throw ArrayIndexOutOfBounds();
                #endif
                return objects[index];
        }
        
        const E & operator[](int index)const
        {
                #ifndef NO_CHECK
                if(index<0||index>=currentSize)
                                throw ArrayIndexOutOfBounds();
                #endif
                return objects[index];
        }
        
        const vector& operator=(const vector &rhs);
        void resize(int newSize);
     private:
     int currentSize;
     E * objects;
};
#endif
#include"vector.cpp"       
                                


