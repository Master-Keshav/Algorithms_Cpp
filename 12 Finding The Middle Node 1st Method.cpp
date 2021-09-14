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
    int i=0,count = 0;
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    
    node *ptr = start;
    
    while(ptr!=NULL){
       count ++;
        ptr = ptr->add;
    }
    
    ptr = start;
    
    while(i<(count/2)){
         ptr = ptr->add;
         i++;
    }
    
    cout<<"Middle Node is : "<<ptr->n<<endl;
    return 0;
}