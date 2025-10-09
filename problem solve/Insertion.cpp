#include<iostream>
using namespace std;
int arr[]={10,20,30,40,50};
int n=5;
int pos=2;
int newval=25;

int main(){
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
 arr[pos]=newval;
 n++;
 cout<<arr[pos];
}