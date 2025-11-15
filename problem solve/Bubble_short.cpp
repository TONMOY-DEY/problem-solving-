#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    int input;

    cout<<"please!! Enter the array element 💕😊"<<endl;
    for(int i =0 ;i < n; i++){
        cout<<"please!! Enter the arry index"<<i<<endl;
        cin>>input;
        arr[i]=input;
    }
    cout<<"Before shorting array🤗"<<endl;
    for(int i =0 ;i < n ;i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<"NOW!! start shorting 🤔"<<endl;
    for(int i =0; i < n-1 ;i++){
        for(int j=0; j < n-1-i ;j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"After Bubble shorting 😎"<<endl;
    for(int i=0 ;i < n ;i++){
        cout<<arr[i]<<"  "<<endl;
    }
}

