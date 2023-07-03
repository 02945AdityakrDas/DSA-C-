#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"Swaped value is: ";
    cout<<num1<<endl<<num2<<endl;
    return 0;
}