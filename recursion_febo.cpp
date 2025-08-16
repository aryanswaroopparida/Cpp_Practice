#include<iostream>
using namespace std;
int febo(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    else return febo(n-1)+febo(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<febo(n);
    return 0;
}