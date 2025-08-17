#include<iostream>
#include<string>
using namespace std;
int count(string str, char ch,int c){
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            c++;
        }
    }
    return c;
}
int main(){
    string str;
    cin>>str;
    int n=str.length();
    int arr[n];
    int arr1[26]={0};
    for(int i=0;i<26;i++){
        arr1[str[i]-97]++;

    }
    for(int i=0;i<26;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    string str1;
    for(int i=0;i<26;i++){
        if(arr1[i]>0){
            str1.push_back(i+97);
        }
    }
    cout<<str1<<endl;
    cout<<count("aryan",str[0],0);

    return 0;
}
