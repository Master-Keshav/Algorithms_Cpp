#include <iostream>
using namespace std;
int main(){
    int i,n,k;
    cout<<"Enter The size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter The Index where you want to delete : ";
    cin>>k;
    for(i=k;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    cout<<"Final Array Elements Are : "; 
    for(i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}