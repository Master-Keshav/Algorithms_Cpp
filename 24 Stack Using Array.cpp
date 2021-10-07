#include <iostream>
using namespace std;

int stack[100],top = -1;

void push(int item){
   if(top==100){
       cout<<"Stack OverFlow !";
    }
    top++;
    stack[top] = item;
}
void pop(int item){
   if(top==0){
       cout<<"Stack UnderFlow !";
   }
    item = stack[top];
    top--;
}

int main(){
    int i,item;
    cout<<"\nNow Pushing : \n";
    
    push(100);
    push(200);
    push(300);
    
    cout<<"\nStack Data : "<<endl;
    
    for(i=0;i<=top;i++){
        cout<<stack[i]<<" ";
    }
    
    cout<<"\nNow Popping : \n";
    
    for(i=top;top!=-1;i++){
        pop(item);
    }
    
    cout<<"\nStack Data : "<<endl;
    
    
    for(i=0;i<=top;i--){
        cout<<stack[i];
    }
}