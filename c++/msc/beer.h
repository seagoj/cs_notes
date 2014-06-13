#ifndef
#define

template<class E>
class beer
{
    public:
        beer();
        void insert(const E & item);
        void display(const beer & item);
        
    private:
        E data;
};

#endif
#include<beer.cpp>
