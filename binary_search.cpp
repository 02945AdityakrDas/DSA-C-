#include<iostream>
using namespace std;
int binarysearch(int a[],int n, int key){
int start = 0;
int end = n-1;
int mid = (start+end)/2;
while(start<=end){
    if(a[mid]==key){
        return mid ;
    }
    if(key>a[mid]){
        start = mid +1;
    }
    else{
        end = mid -1;
    }
    mid = (start + end)/2;
}
return -1;
}
int main(){
    int even[]={2,3,4,5,6,789};
    int odd[]={7,89,554,888,987,2345,3333};
    int idx = binarysearch(even,6,789);
    cout<<"Index: "<<idx<<endl;
    int idx1 = binarysearch(odd,7,3333);
    cout << "Index : "<<idx1<<endl;
    return 0;
}