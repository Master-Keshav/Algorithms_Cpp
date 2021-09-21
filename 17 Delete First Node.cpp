#include <iostream>
using namespace std;


struct node{
    int n;
    node *add;
};


node *start = NULL;


void add(int a){
    node *n1 = new node();
    n1->n = a;
    n1->add = NULL;
    if(start == NULL){
        start = n1;
    }
    else{
        n1->add = start;
        start = n1;
    }
}

void deleteNode(){
    
    if(start == NULL){
        cout<<"OverFlow Error"<<endl;
    }
    else{
    node *ptr = new node();
    ptr = start;
    start = start->add;
    delete ptr;
    }
}

int main(){
    
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    
    cout<<"Before Deletion"<<endl;
    
    node *ptr = start;
    
    while(ptr!=NULL){
        cout<<ptr->n<<" ";
        ptr = ptr->add;
    }
    
    deleteNode();
    
    cout<<"\nAfter Deletion\n";
    
    ptr = start;
    
    while(ptr!=NULL){
        cout<<ptr->n<<" ";
        ptr = ptr->add;
    }
    
    
    return 0;
}