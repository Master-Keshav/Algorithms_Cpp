#include <iostream>
using namespace std;
int main(){
    int i,n,k,s;
    cout<<"Enter The size of array";
    cin>>n;
    int arr[n+1];
    cout<<"Enter Array Elements";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n] = 0;
    cout<<"Enter The Index where you want to insert";
    cin>>k;
    cout<<"Enter The Element which you want to insert";
    cin>>s;
    for(i=n-1;i>=k;i--){
        arr[i+1]=arr[i];
    }
    arr[k]=s;
    cout<<"Final Array Elements Are : ";
    for(i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}