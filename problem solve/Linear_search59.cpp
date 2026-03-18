#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int iteam;
    int n;

    cout<<"Enter the number of element:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"please enter the iteam"<<endl;
    cin>>iteam;

    for(int i=0;i<n;i++){
        if(arr[i]==iteam){
            cout<<"Found this value and this value position"<<i<<endl;
            return 0;
        }
    }
    cout<<"Item not found";
    return 0;
}
/*
LINEAR-SEARCH(A, n, key)
1. for i ← 0 to n - 1 do
2.     if A[i] = key then
3.         return i
4.     end if
5. end for
6. return -1
*/