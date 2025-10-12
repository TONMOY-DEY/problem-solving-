#include<iostream>
using namespace std;
int arr[100]={1,2,3,4};
int n=4;
int x=99;

int main(){
     int originalSize = n;
    for(int i=0;i<originalSize*2 ;i+=2 ){
        for(int j=n-1;j >= i;j--){
            arr[j+1]=arr[j];

        }
        arr[i]=x;
        n++;

    }
    cout<<"after insertion array🤗";
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

