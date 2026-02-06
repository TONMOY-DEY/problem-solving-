#include<iostream>
using namespace std;
 
int main(){
    int arr[5]={25,56,23,45,47};
    int sum=0;


    for(int i=0;i<5;i++){  
        sum=sum+arr[i];
        cout<<"sum is :"<<sum<<endl;
    }
}


