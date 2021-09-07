#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[i];
    cout<<"Enter Array Values : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    cout<<"Final Array Elements Are : "; 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
    return 0;
}