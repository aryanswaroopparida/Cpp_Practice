#include <iostream>
using namespace std;
int search(int arr[],int n){
    for(int i=0;i<5;i++){
        if(arr[i]==n) return i;
    }
    return -1;
}
int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search :";
    int n;
    cin>>n;
    if (search(arr,n)==-1) cout<<"Element is not present";
    else cout<<"Element is present at index "<<search(arr,n);
    return 0;
    
    }

   
