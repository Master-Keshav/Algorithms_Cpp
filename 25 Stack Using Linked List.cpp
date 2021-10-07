#include <iostream>
using namespace std;

struct stack{
    int data;
    stack *add;
};

stack *top = NULL;

void push(int item){
    stack *n1 = new stack();
    n1->data = item;
    
    if(top == NULL){
        n1 ->add = NULL;
        top = n1;
    }
    else{
        n1->add = top;
        top = n1;
    }
}
void pop(){
   // if(top==NULL){
   //     cout<<"Stack UnderFlow !";
   // }
    while(top!=NULL){
        cout<<"Removing : "<<top->data<<endl;
        top = top->add;
    }
}

int main(){
    int i,item;
    cout<<"\nNow Pushing : \n";
    
    push(100);
    push(200);
    push(300);
    
    cout<<"\nStack Data : "<<endl;
    
    stack *ptr=top;
    
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->add;
    }
    
    cout<<"\nNow Popping : \n";
    
    pop();
    pop();
    pop();
}