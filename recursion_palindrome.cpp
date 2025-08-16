#include<iostream>
#include<string>
using namespace std;
bool palindrome(string str,int s,int e){
    if (s==e) return true;
    if (s>e) return true;
    if (str[s]!=str[e]) return false;
    return palindrome(str,s+1,e-1);

}
int main(){
    string str;
    cin>>str;
    cout<<palindrome(str,0,)
    return 0;
}