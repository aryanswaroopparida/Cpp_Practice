#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;

}
int main(){
    int x=11;
    int y=16;
    swap(x,y);
    cout<<x<<" "<<y;
    

    return 0;
}