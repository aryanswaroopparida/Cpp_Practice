#include<string>
#include<iostream>
using namespace std;
int count(string str, char ch, int n , int b, int count){
    for(int i=b;i<n;i++){
        if(ch==str[i]){
            count++;
        }
    }
    return count;
}
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int lexicographic_order(string str,int n,int rank){
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
    int arr1[26]={0};
    for(int i=0;i<26;i++){
        arr1[str[i]-97]++;
    }
    string str1;
    for(int i=0;i<26;i++){
        if(arr1[i]>0){
            str1.push_back(i+97);
        }
    }
    int a=1;
    int m = str1.length();
    for(int b=0;b<n;b++){
        for(int j=0;j<m;j++){
        a *= 1/fact((count(str,str1[j],n,b,0)));
        }
        rank += arr[b]*fact(n-1-b)*a;
    }
    return rank;
}
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int n = str.length();
    cout<<"Rank of the word is : "<<lexicographic_order(str,n,1);
    
    return 0;
}