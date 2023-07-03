#include<iostream>
using namespace std;
void uniqe_element(int arr[],int n){
    int a = 0;
    for(int i=0;i<n;i++){
         a = a ^ arr[i];
    }
    cout<<a;
}
int main(){
    int arr[9]={7,5,7,6,5,8,8,4,4};
    uniqe_element(arr,9);
    return 0;

}