#include <iostream>
using namespace std;
int main(){
    int i,n,k;
    cout<<"Enter The size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements : ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter The Index where you want to delete : ";
    cin>>k;
    for(i=k;i<n-1;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}