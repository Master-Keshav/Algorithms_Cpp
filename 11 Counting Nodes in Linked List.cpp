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

void insert(int a){
    add(a);
}

int main(){
    int i,n,a;
    cout<<"Enter The Number Of Nodes : ";
    cin>>n;
    cout<<"Enter The Elements To Insert : ";
    
    
    for(i=0;i<n;i++){
        cin>>a;
        insert(a);
    }
    
    node *ptr = start;
    
    while(ptr!=NULL){
        cout<<ptr->n<<" ";
        ptr = ptr->add;
    }
    
    return 0;
}