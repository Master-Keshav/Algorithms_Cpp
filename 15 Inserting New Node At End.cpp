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
    n2->add = NULL;
    n2->n = d;
    
    node *p = start;
    
    while(p->add!=NULL){
            p = p->add;   
        }
    p->add = n2;    

}

int main(){
    int d;
    
    add(4);
    add(3);
    add(2);
    add(1);
    
    cout<<"Enter the node data that you want to add at end ";
    cin>>d;
    
    addNew(d);
    
    node *ptr = start;
    
    while(ptr!=NULL){
        cout<<ptr->n<<" ";
        ptr = ptr->add;
    }
    
    return 0;
}

