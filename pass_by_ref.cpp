#include<iostream>
using namespace std;
int main(){
    int a =5;
    int &b =a;
    b++;
    cout<<a<<endl;

    cout<<&a<<" "<<&b<<endl;
    return 0;
}