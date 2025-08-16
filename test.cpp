#include<string>
#include<iostream>


using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.length();
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]>str[j]){
                arr[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
