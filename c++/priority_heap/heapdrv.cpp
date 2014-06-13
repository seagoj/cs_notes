//NAME//////////////
//Jeremy Seago    //
//CSC 260         //
//heapdrv.h       //
////////////////////


//INCLUDES//////////////////////////////////////////////////////////////////////
#include <iostream.h>
#include <conio.h>
#include "heap.h"
////////////////////////////////////////////////////////////////////////////////

//MAIN()////////////////////////////////////////////////////////////////////////
int main()
{
  vector<int> v(100);
  BinaryHeap<int> list;
  int n,element,minItem;
  
    cout<<"Please enter the number of elements in your list: "<<endl;
    cin>>n;
    cout<<"Please enter the "<<n<<" elements in your list: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        list.insert(element);
    }
    cout<<endl<<endl
    <<"After inserting your elements into the heap, here's the heap: "<<endl;
    list.printHeap();
    cout<<endl<<endl<<"Please enter the number of elements in your list: ";
    cin>>n;
    cout<<"Please enter the "<<n<<" elements in your list: "<<endl;
    for(int i=0;i<n;i++)
        cin>>v[i];
    list.buildHeap(v,n);
    cout<<"After using buildHeap, here's the heap: "<<endl;
    list.printHeap();
    
    cout<<endl<<endl;
    
    cout<<"The smallest element in the list is "<<list.findMin()<<endl;
    cout<<endl<<endl;
    
    while(!list.isEmpty())
    {
        list.deleteMin(minItem);
        cout<<endl<<"Deleted"<<minItem<<endl;
    }
      
    getch();	
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
