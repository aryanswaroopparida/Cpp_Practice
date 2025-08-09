#include <iostream>
using namespace std;
void p(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of the array "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array is ";
    p(arr,n);   
    return 0;
}
