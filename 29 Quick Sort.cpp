#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
// f- first
// l - last
int partition(int arr[], int f, int l){
    int pivot = arr[l];
    int i = f-1;
    for(int j = f; j<l;j++){
        if(arr[j] < pivot){
            swap(arr,++i,j);
                    }
    }
    swap(arr,++i,l);
    return i;
}

void quickSort(int arr[], int f, int l){
    if(f<l){
        int p = partition(arr,f,l);
        quickSort(arr,f,p-1);
        quickSort(arr,p+1,l);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}