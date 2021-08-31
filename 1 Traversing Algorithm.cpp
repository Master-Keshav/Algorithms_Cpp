#include <iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int A[n];
    for(i=0;i<5;i++){
        cin>>A[i];
    }
    for(i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
