#include<iostream>
using namespace std;
int arr[]={10,20,30,20,40,20,50,60};
int n=8;
int pos=1;
int main(){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"After Delation array:🤗😒";

    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}