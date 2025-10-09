#include<iostream>
using namespace std;
int arr[]={5,10,15,20};
int pos=1;
int n=4;


int main(){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"After Delation eliment 🤗";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;



}