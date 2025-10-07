#include<iostream>
using namespace std;


int main(){
    int arr[]={10,20,30,40,50};
    int temp;
    int n=5;

    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}