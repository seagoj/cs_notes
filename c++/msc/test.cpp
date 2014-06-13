#include<iostream.h>
#include<conio.h>
#include<beer.h>

int main()
{
    int x;
    beer<E> list;
    cin>>x;
    list.insert(x);
    list.display();
    getch();
    return 0;
}
