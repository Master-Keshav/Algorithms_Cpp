#include <iostream>
using namespace std;

void TOH(int n,char s,char a,char d){
    if(n==1){
        cout<<"Move disk 1 from "<<s<<"->"<<d<<endl;
        return;
    }
    TOH(n-1,s,d,a);
    cout<<"Move disk "<<n<<" from "<<s<<"->"<<d<<endl;
    TOH(n-1,a,s,d);
}

int main(){
    int n=3;
    // cin>>n;
    TOH(n,'A','B','C');
    return 0;
}