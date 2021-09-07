#include <iostream>
using namespace std;
int main(){
    int i,n,key,flag=0;
    cout<<"Enter The Array Size";
    cin>>n;
    int arr[n];
    cout<<"Enter The Array Elements";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Key Element To Search";
    cin>>key;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            flag = 1;
            cout<<"Element Found !";
            break;
        }
    }
    if(flag==0){
        cout<<"Element Not Found !";
    }
    
    return 0;
}
