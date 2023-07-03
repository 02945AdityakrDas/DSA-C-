#include<iostream>
using namespace std;
int main(){
    int a[5] = {4,5,6,4,7};
    int b = 0;
    int ans = -1;
    for(int i = 0;i<5;i++){
     if(b == a[i]){
        ans = i;
     }
    }
    cout<<ans<<endl;
    return 0;
}