#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *start=NULL;

void addAtBeg(int a){
    
    node *newNode= new node;
    newNode->data = a;
    
    if(start==NULL){
    start=newNode;
    newNode->next = start;
    }
    else{
    newNode->next=start;
    node *ptr = start;
    while(ptr->next!=start){
        ptr = ptr->next;   
    }
    ptr->next=newNode;
    start = newNode;
    }
}

void addAtEnd(int n){
    node *n1 = new node;
    n1->data = n;
    if(start == NULL){
        start = n1;
        n1->next = start;
    }
    else{
        n1->next = start;
        node *ptr = start;
        while(ptr->next!=start){
            ptr = ptr->next;
        }
        ptr->next = n1;
    }
}

void display(){
    node *ptr = start;
    while(ptr->next!=start){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<ptr->data;
}

int main()
{
    addAtBeg(4);
    addAtBeg(3);
    addAtBeg(2);
    addAtBeg(1);
    
    
    addAtEnd(5);
    addAtEnd(6);
    addAtEnd(7);
    addAtEnd(8);
    
    display();
        
    return 0;
}