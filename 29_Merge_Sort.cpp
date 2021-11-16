#include <iostream>
using namespace std;

void merge(int arr[], int f, int mid, int l){
    int i,j,k;
    int n1 = mid - f + 1;
    int n2 = l - mid;
    int a[n1], b[n2];
    for(i=0;i<n1;i++){
        a[i] = arr[f+i];
    }
    for(i=0;i<n2;i++){
        b[i] = arr[mid+i+1];
    }
    i=0;j=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[f++] = a[i++]; 
        }
        else{
            arr[f++] = b[j++];
        }
    }
    while(i<n1){
        arr[f++] = a[i++];
    }
    while(j<n2){
        arr[f++] = b[j++];
    }
}

void sort(int arr[],int f,int l){
    if(f<l){
        int mid = (f+l)/2;
        sort(arr,f,mid);
        sort(arr,mid+1,l);
        
        merge(arr,f,mid,l);
    }
}

int main(){
    int i,n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Values :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,0,n-1);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}