#include <iostream>
using namespace std;
int main(){
    int i,j,n,count=0;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count = 5;
            }
            if(count==0){
                cout<<"Already Sorted ! ";
                return 0;
            }
        }
     }
    cout<<"Final Array Elements Are : "; 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}