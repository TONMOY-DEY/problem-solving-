#include<iostream>
using namespace std;
int arr[10]={23,24,25,26,22,28,21,29,45,60};

int main(){
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            cout<<"The number is even:"<<arr[i]<<endl;
        }
        else{
            cout<<"The number is odd:"<<arr[i]<<endl;
        }
    }
}