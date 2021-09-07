#include <iostream>
using namespace std;
int main(){
    int i,n,key,flag=0,first=0,mid,last;
    cout<<"Enter The Array Size";
    cin>>n;
    last = n;
    int arr[n];
    cout<<"Enter The Array Elements";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Key Element To Search";
    cin>>key;
    while(first<=last){
        mid = (first+last)/2;
        if(key==arr[mid]){
            cout<<"Element Found !";
            flag = 1;
            return 0;
        }
        else if(key < arr[mid]){
         last = mid - 1;
        }
        else
            first = mid + 1;
    }
    if(flag==0){
        cout<<"Element Not Found !";
    }
     return 0;
}