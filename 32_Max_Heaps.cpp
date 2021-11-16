#include<iostream>
#include<conio.h>
using namespace std;
int Tree[50],N=0;
void insert(int item)
{
    N=N+1;
    int PAR;
    int ptr=N;
    while(ptr>1)
    {
        PAR=ptr/2;
        if(item<Tree[PAR])
        {
            Tree[ptr]=item;
            return;
        }
        Tree[ptr]=Tree[PAR];
        ptr=PAR;
    }
    Tree[1]=item;
}
int Delheap()
{
    int item=Tree[1];
    int last=Tree[N];
    N=N-1;
    int ptr=1,left=2,right=3;
    while(right<N)
    {
        if(last>Tree[left]&&last>Tree[right])
        {
            Tree[ptr]=last;
            return item;
        }
        if(Tree[left]>Tree[right])
        {
            Tree[ptr]=Tree[left];
            ptr=left;
        }
        else
        {
            Tree[ptr]=Tree[right];
            ptr=right;
        }
        left=2*ptr;
        right=left+1;
    }
    if(left==N)
    {
        if(Tree[left]>last)
        {
            Tree[ptr]=Tree[left];
            ptr=left;
        }
    }
    Tree[ptr]=last;
    return item;
}
int main()
{
    int A[]={15,20,45,18,11,63,42,90},i;
    for(i=0;i<8;i++)
    {
        insert(A[i]);
    }
    cout<<"Heap is: ";
    for(i=1;i<=8;i++)
    cout<<Tree[i]<<",";
}