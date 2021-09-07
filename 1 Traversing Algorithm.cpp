#include <iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Elements Are : ";
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
