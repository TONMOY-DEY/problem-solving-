#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7};
    cout<<"Before insertion......."<<endl;
    for(int i=0 ;i < 10 ;i++){
        cout<<"Value of index " << i << ":" <<arr[i] <<endl;
    }

    int pos,val;
    cout<<"Enter the position(1-10)";
    cin>>pos;

    while (pos < 1 || pos > 10)
    {
        cout<<"You have enter a number"<<endl;
        cin>>pos;
    }

    cout<<"please enter the value to insertion";
    cin>>val;
    pos--;

    for(int i=9;i > pos ;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;


    cout<<"After insertion:"<<endl;

    for(int i =0 ;i < 10 ;i++){
        cout<<"value of index"<< i <<":" << arr[i] <<endl;
    }
    
}