#include<iostream>
using namespace std;

int arr[5]={23,25,23};
int main(){
    for(int i=0;i<5;i++){
        arr[i]=i*2;
        cout<<arr[i]<<endl;
    }
}
