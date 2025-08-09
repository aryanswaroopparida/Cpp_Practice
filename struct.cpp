#include<iostream>
using namespace std;
struct point{
    string name;
    int roll_no;
};
int main(){
    point p;
    p.name = "Aryan";
    p.roll_no = 1;
    cout<<p.name<<" "<<p.roll_no;
    return 0;
}