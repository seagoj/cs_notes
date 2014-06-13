#include<iostream.h>
#include<conio.h>
#include"vector.h"

void insertionSort(vector<int> &a);
void insertionSort(vector<int> &a, int left, int right);
void shellSort(vector<int> &a);
inline int leftChild(int i);
void heapSort(vector<int> &a);
void mergeSort(vector<int> &a);
void mergeSort(vector<int> &a, vector<int> &tmpArray, int left, int right);
void percDown(vector<int> &a, int i, int n);
void printVector(vector<int> a);
void merge(vector<int> &a, vector<int> &tmpArray, int leffPos, int rightPos, int rightEnd);
void quickSort(vector<int> &a);
void quickSort(vector<int> &a, int &left, int &right);
void swap(int x,int y);
const int & median3(vector<int> &a, int &left,int &right);

void insertionSort(vector<int> &a)
{
    int j;
    
    for(int p=1;p<a.size();p++)
    {
        int tmp=a[p];
        for(j=p;j>0 && tmp < a[j-1]; j--)
           a[j]=a[j-1];
        a[j]=tmp;
        printVector(a);
    }
}                

void insertionSort(vector<int> & a,int left, int right)
{
    int j;
    
    for(int p=left;p<right;p++)
    {
        int tmp=a[p];
        for(j=p;j>0 && tmp < a[j-1]; j--)
           a[j]=a[j-1];
        a[j]=tmp;
        printVector(a);
    }    
}

void shellSort(vector<int> a)
{
    int j;
    
    for(int gap=a.size()/2;gap>0;gap/=2)
    {
        for(int i=gap;i<a.size();i++)
        {
           int tmp=a[i];
           for(j=1;j>=gap && tmp <a[j-gap]; j-=gap)
              a[j]=a[j-gap];
           a[j]=tmp;
        }
        printVector(a);
    }
}

void heapSort(vector<int> a)
{
    int tmp;
    for(int i=a.size()/2;i>=0;i--)
        percDown(a,i,a.size());
    printVector(a);
    for(int j=a.size()-1;j>0;j--)
    {
        swap(a[0],a[j]);
        
        percDown(a,0,j);
        printVector(a);
    }
}

void mergeSort(vector<int> a)
{
    vector<int> tmpArray(a.size());
    mergeSort(a, tmpArray, 0, a.size()-1);
}

void quickSort(vector<int> &a)
{
    quickSort(a, 0, a.size()-1);
}
inline int leftChild(int i)
{
    return 2*i+1;
}

void percDown(vector<int> a, int i, int n)
{
    int child;
    int tmp;
    
    for(tmp=a[i]; leftChild(i)<n; i=child)
    {
        child=leftChild(i);
        if(child!=n-1 && a[child] < a[child+1])
           child++;
        if(tmp < a[child])
           a[i]=a[child];
        else
           break;
    }
    a[i]=tmp;
}

void printVector(vector<int> a)
{
    for(int i=0;i<a.size();i++)
       cout<<a[i]<<" ";
    cout<<endl;
}

void mergeSort(vector<int> & a, vector<int> & tmpArray, int left, int right)
{
    if(left<right)
    {
        int center=(left+right)/2;
        mergeSort(a, tmpArray, left, center);
        mergeSort(a, tmpArray, center+1, right);
        merge(a, tmpArray, left, center+1, right);
        printVector(a);
    }
}
    
void merge(vector<int> a, vector<int> tmpArray, int leftPos, int rightPos, int rightEnd)
{
    int leftEnd=rightPos-1;
    int tmpPos=leftPos;
    int numElements=rightEnd-leftPos+1;
    
    while(leftPos<=leftEnd && rightPos <=rightEnd)
       if(a[leftPos]<= a[rightPos])
          tmpArray[tmpPos++]=a[leftPos++];
       else
          tmpArray[tmpPos++] = a[rightPos++];
       
    while(leftPos<=leftEnd)
       tmpArray[tmpPos++] = a[leftPos++];
    
    while(rightPos <= rightEnd)
       tmpArray[tmpPos++] = a[rightPos++];
       
    for(int i=0;i<numElements; i++, rightEnd--)
        a[rightEnd]=tmpArray[rightEnd];
}

const int & median3(vector<int> &a, int &left,int &right)
{
    int center=(left+right)/2;
    if(a[center]<a[left])
        swap(a[left], a[center]);
    if(a[right]<a[left])
        swap(a[right],a[left]);
    if(a[right]<a[center])
        swap(a[center],a[right]);
    
    swap(a[center],a[right-1]);
    return a[right-1];
}

void quickSort(vector<int> &a, int &left, int &right)
{
    if(left+10<=right)
    {
        int pivot=median3(a, left, right)
        
        int i=left;
        int j=(right-1);
        for( ; ; )
        {
           while(a[++i]<pivot){}
           while(pivot<a[--j]){}
           if(i>j)
              swap(a[i],a[j]);
           else
              break;
        }
        
        swap(a[i], a[right-1]);
        quicksort(a, left, i-1);
        quicksort(a, i+1, right);
    }
    else
       insertionSort(a,left,right);
}

void swap(int x, int y)
{
    int tmp=x;
    x=y;
    y=tmp;
}

int main()
{
    vector<int> v(100);
    int n;
    
    cout<<"Please enter the number of integers: ";
    cin>>n;
    
    v.resize(n);
    cout<<"Please enter all in one line:"<<endl;
    for(int i=0;i<v.size();i++)
        cin>>v[i];
        
    cout<<endl<<"Here's the original list: ";
    printVector(v);
    
    cout<<endl;

    insertionSort(v);
    //shellSort(v);
    //heapSort(v);
    //mergeSort(v);
    //quickSort(v);
    
    cout<<endl<<"Here's the vector after sorting: ";
    printVector(v);
    getch();
    return 0;
}
