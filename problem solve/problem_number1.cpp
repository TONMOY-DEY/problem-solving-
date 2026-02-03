#include<iostream>
using namespace std;

int main(){
    int arr[3]={23,56,21};
    int Largest_value=arr[0];
    int Smalest_value=arr[0];

    for(int i=0;i<3;i++){
        if(arr[i]>Largest_value){
         Largest_value=arr[i];
         cout<<"Largest value:"<<arr[i]<<endl;
       
    }
    else if(arr[i]<Smalest_value){
        Smalest_value=arr[i];
        cout<<"Smalest Value:"<<arr[i];
        
    }
}
}