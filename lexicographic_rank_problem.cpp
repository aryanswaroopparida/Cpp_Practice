#include<string>
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int lexicographic_order(string str,int n){
    int rank=1;
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
        rank += arr[i]*fact(n-1-i);
    }
    return rank;
}
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int n = str.length();
    cout<<"Rank of the word is : "<<lexicographic_order(str,n);
    
    return 0;
}