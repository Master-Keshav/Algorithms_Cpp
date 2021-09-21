#include<iostream>
using namespace std;

struct node{
    int data;
    node *next,*pre;
};

node *start=NULL;
node *last = NULL;

void addAtBeg(int a){
    
    node *newNode= new node;
    newNode->data = a;
    newNode->pre = NULL;
    
    if(start==NULL){
    start=newNode;
    newNode->next = NULL;
    newNode->pre = NULL;
    last = newNode;
    }
    else{
    newNode->next=start;
    newNode->pre=NULL;
    start->pre = newNode;
    start = newNode;
        }
    }

void addAtEnd(int a){
    
    node *newNode= new node;
    newNode->data = a;
    newNode->next = NULL;
    
    if(last==NULL){
    last=newNode;
    newNode->next = NULL;
    newNode->pre = NULL;
    start = newNode;
    }
    else{
    newNode->next=NULL;
    newNode->pre=last;
    last->next = newNode;
    last = newNode;
        }
    }

void displayFromBeg(){
    node *ptr = start;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

void displayFromEnd(){
    node *ptr = last;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->pre;
    }
}

int main()
{
    
    
    addAtEnd(5);
    addAtEnd(6);
    addAtEnd(7);
    addAtEnd(8);
    
    
    addAtBeg(4);
    addAtBeg(3);
    addAtBeg(2);
    addAtBeg(1);
    
    displayFromBeg();
    cout<<endl;
    displayFromEnd();
        
    return 0;
}