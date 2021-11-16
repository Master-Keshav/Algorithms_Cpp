#include<iostream>
using namespace std;
int Queue[100],front=-1,rear=-1;
void Qinsert(int val){
    if((front==0 & rear==99)||(front==rear+1))    {
        cout<<"Queue Overflow!!!";
        return;
    }
    else if (front==-1){
        front=0;
        rear=0;
    }
    else if(rear==99){
        rear=0;
    }
    else{
        rear++;
    }
    Queue[rear]=val;
    return;
}
void Qdelete(){
    if(front==-1){
        cout<<"Queue Underflow!!!";
        return;
     }
    else{
        cout<<"Element deleted from queue is :: "<< Queue[front] <<endl;
        front++;
        if(front == 100){
        front = 0;
        }
        if(front == rear || front == -1){
            rear = -1;
            front = -1;
        }
    }
    
};
void display(){
    cout<<"Front Element is :: "<<Queue[front]<<endl;
    cout<<"Rear Element is :: "<<Queue[rear];
}
int main(){
    Qinsert(23);
    Qinsert(34);
    Qinsert(45);
    Qdelete();
    display();
    return 0;
}