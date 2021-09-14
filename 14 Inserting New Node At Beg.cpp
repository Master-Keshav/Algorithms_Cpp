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

void addNew(int d){
    node *n2 = new node();
    n2->n = d;
    n2->add = start;
    start = n2;
}

int main(){
    int d;
    
    add(4);
    add(3);
    add(2);
    add(1);
    
    cout<<"Enter the node data that you want to add at beginning ";
    cin>>d;
    
    addNew(d);
    
    node *ptr = start;
    
    while(ptr!=NULL){
        cout<<ptr->n<<" ";
        ptr = ptr->add;
    }
    
    return 0;
}