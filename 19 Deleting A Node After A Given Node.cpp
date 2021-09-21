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

void deleteNode(int d){
    node * temp;
    node *ptr = start;
    while(ptr!=NULL){
        if(ptr->n==d){
            temp = ptr->add;
            ptr->add=temp->add;
            delete temp;
            break;
        }
        else{
            ptr=ptr->add;
        }
    }
    if(ptr==NULL){
        cout<<"The Node Is Not Found !";
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
    
    int d;
    
    cout<<"\nEnter The Node After Which You Want To Dete Node\n";
    cin>>d;
    
    deleteNode(d);
    
    cout<<"\nAfter Deletion\n";
    
    ptr = start;
    
    while(ptr!=NULL){
        cout<<ptr->n<<" ";
        ptr = ptr->add;
    }
    
    
    return 0;
}