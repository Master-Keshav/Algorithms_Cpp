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


int main(){
    
    add(4);
    add(3);
    add(2);
    add(1);
    
    node *ptr = start;
    
    while(ptr!=NULL){
        cout<<ptr->n<<" ";
        ptr = ptr->add;
    }
    
    node *fast = start;
    node *slow = start;
    
    while(fast!=NULL && fast->add!=NULL){
        fast = fast->add->add;
        slow = slow->add;
    }
    cout<<"\nMiddle Node is : "<<slow->n;
    return 0;
}