#include<iostream>
using namespace std;
int arr[100]={5,10,20,40,60};
int n=5;
int pos=3;
int newval=30;

int main(){
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=newval;
    n++;
 cout<<"After insertion arry ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";

    }

}