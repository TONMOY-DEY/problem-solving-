#include<iostream>
using namespace std;
int arr[100]={1,2,3,4,5,6,7};
int n=7;
int pos=3;
int new_val=10;


int main(){
    for(int i=n-1;i>=pos;i--){
         arr[i+1]=arr[i];   
    }
    arr[pos]=new_val;
    n++;


    cout<<"After insertion:"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

    
    }

