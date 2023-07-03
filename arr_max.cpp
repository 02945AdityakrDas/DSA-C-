#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[5] = {7,8,9232,4,5};
    int max = INT_MIN;
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    cout<<"The maximum no: "<<max<<endl;
    return 0;
}