//NAME///////////////////////
//Jeremy Seago             //
//CSC 260                  //
//hashdriv.cpp             //
/////////////////////////////

//INCLUDES//////////////////////////////////////////////////////////////////////
#include<iostream>
#include"hash.h"
#include<conio.h>
//#include "bool.h"
////////////////////////////////////////////////////////////////////////////////

//MAIN()////////////////////////////////////////////////////////////////////////
int main()
{
    HashTable<int> table(-1,3);
    
    table.insert(1);
    table.insert(4);
    table.insert(8);
    table.insert(15);
    for(int i=1;i<=5;i++)
        table.insert(17*i+1);
    cout<<endl<<"Here's the final table:"<<endl;
    table.printTable();
        
    cout<<endl<<"Finding 0 through 100, these are found:"<<endl;
    for(int i=0;i<100;i++)
        if(table.find(i)>0)
                cout<<table.find(i)<<endl;
    cout<<endl;
    
    for(int j=0;j<10;j++)
        table.remove(j);
        
    cout<<endl<<"After removing 0 through 10, here's the table:"<<endl;
    table.printTable();
    
    cout<<endl<<"And again finding 0 through 100"<<endl;
    for(int k=0;k<100;k++)
        if(table.find(k)>0)
                cout<<table.find(k)<<endl;
    cout<<endl;
    
    getch();
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
