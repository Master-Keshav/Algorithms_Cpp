#include <iostream>
using namespace std;

int main(){
    int i,j,k,m,n;
    cout<<"Enter Size Of Both Arrays : ";
    cin>>m>>n;
    int a[m],b[n],c[m+n];
    cout<<"Enter 1st Array Elements : ";
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter 2nd Array Elements : ";
    for(j=0;j<n;j++){
        cin>>b[j];
    }
    i=0;j=0;k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
    while(i<m){
        c[k++] = a[i++];
    }
    while(j<n){
        c[k++] = b[j++];
    }
    cout<<"Final Array Elements Are : ";
    for(i=0;i<(m+n);i++){
        cout<<c[i]<<" ";
    }
    return 0;    
}