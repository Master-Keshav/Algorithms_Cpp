#include <iostream>
#include <limits.h>
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
    for(i=1;i<n;i++){
        int t = arr[i];
        j = i-1;
        while(arr[j]>t && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = t;
    }
    cout<<"Final Array Elements Are : "; 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}