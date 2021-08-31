#include <iostream>
using namespace std;
int main(){
    int i,n,k,s;
    cout<<"Enter The size of array";
    cin>>n;
    int a[n+1];
    cout<<"Enter Array Elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    a[n] = 0;
    cout<<"Enter The Index where you want to insert";
    cin>>k;
    cout<<"Enter The Element which you want to insert";
    cin>>s;
    for(i=n-1;i>=k;i--){
        a[i+1]=a[i];
    }
    a[k]=s;
    for(i=0;i<n+1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}