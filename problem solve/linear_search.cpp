#include<iostream>
using namespace std;
int main(){
    int arr[]={10,30,20,50,40};
    int n=5;
    int key=20;

    for(int i=0;i < n;i++){
        if(arr[i]==key){
            cout<<"found :"<<key <<endl << "index :"<<i <<endl;
            break;
        }
    }



}
