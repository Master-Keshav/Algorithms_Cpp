#include<iostream>
using namespace std;
#define n 20
class queue{
int *arr;
int front;
int rear;

public:
queue(){
arr = new int[n];
front = -1;
rear = -1;
}

void push(int x){
if((rear == n-1 && front == 0) || (front == rear+1)){
cout << "Queue Overflow" << endl;
return;
}
if(front == -1){
front = 0;
rear = 0;
}
else if(rear == n-1)
rear = 0;
else
rear++;
arr[rear] = x;
}

void pop(){
if(front == -1){
cout << "Queue Underflow" << endl;
return;
}
int x = arr[front];
cout << "Item getting deleted is : " << x << endl;
if(front == rear){
front = -1;
rear = -1;
}
else if(front == n -1)
front = 0;
else
front++;
}

int peek(){
if(front == -1 || front > rear){
cout << "Queue is empty" << endl;
return -1;
}
return (arr[front]);
}

bool empty(){
if(front == -1 || front > rear)
return true;
return false;
}
};
int main(){
queue q;
q.push(1);
q.push(10);
q.push(16);
q.push(19);
q.push(134);
q.push(12);
cout << "Element at front is: ";
cout << q.peek()<< endl;
q.pop();
cout << "Element at front is: ";
cout << q.peek() << endl;
q.pop();
cout << "Element at front is: ";
cout << q.peek() << endl;
q.pop();
q.pop();
cout << "Element at front is: ";
cout << q.peek()<< endl;
q.pop();
q.pop();
cout << "Element at front is: ";
cout << q.peek()<< endl;
cout << q.empty() << endl;
return 0;
}