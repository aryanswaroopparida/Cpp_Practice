#include <iostream>
using namespace std;
void pr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    pr(arr,n);
    return 0;
}
