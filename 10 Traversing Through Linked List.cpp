#include<iostream.h>
#include<conio.h>

struct node{
    int data;
    node *next;
    };

node *start=NULL;

node * createNode(int a){
    node *n1=new node();
    if(n1==NULL){
        cout<<"OverFlow Error !";
        return n1;
    }
    n1->data=a;
    n1->next=NULL;
    return n1;
    }

void addAtBeg(int a){
    node *newNode=createNode(a);
    if(start==NULL){
        start=newNode;
        }

    else{
        newNode->next=start;
        start=newNode;
        }
    }

void display(){
    node *ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
        }
    }
void main(){
    addAtBeg(7);
    addAtBeg(15);
    addAtBeg(11);
    addAtBeg(19);
    display();
    }

