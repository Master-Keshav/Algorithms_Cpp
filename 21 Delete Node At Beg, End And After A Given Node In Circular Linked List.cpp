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

void display(){
    node *ptr = start;
    while(ptr->next!=start){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<ptr->data;
}

void deleteAtBeg(){
    node *ptr = start;
    while(ptr->next!=start){
        ptr = ptr->next;
    }
    ptr->next = start->next;
    ptr=start;
    start = start ->next;
    delete ptr;
}

// void deleteAtBeg(){
//     node *ptr = start;
//     node *nptr = ptr->next;
//     while(ptr->next!=start){
//         ptr = ptr->next;
//     }
//     ptr -> next = nptr;
//     ptr = start;
//     start = nptr;
//     delete ptr;
// }

void deleteAtEnd(){
    node *ptr = start;
    while(ptr->next->next!=start){
        ptr = ptr->next;
    }
    node *nptr = ptr->next;
    ptr->next = start;
    delete nptr;
}

void delete_After_A_Node(int d){
    node *ptr = start;
    while(ptr->next!=start){
        if(ptr->data == d){
            node *dptr = ptr->next;
            ptr ->next = dptr->next;
            delete dptr;
            break;
        }
        ptr = ptr->next;
    }
}

int main()
{   int d;

    addAtBeg(4);
    addAtBeg(3);
    addAtBeg(2);
    addAtBeg(1);
    addAtBeg(4);
    addAtBeg(3);
    addAtBeg(2);
    addAtBeg(1);
    
    display();
    
    deleteAtBeg();
    deleteAtEnd();
    
    cout<<"\nEnter A Node Data After Which You Want To Delete Node\n";
    cin>>d;
    
    delete_After_A_Node(d);
    
    display();
        
    return 0;
}