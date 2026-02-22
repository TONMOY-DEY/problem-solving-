#include<iostream>
using namespace std;
int mimo[10]={1,2,33,4,5,89,56,49,39,788};
int n;

int main(){
    cout<<"Enter the number:";
    cin>>n;

    for(int i=0;i<10;i++){
        if(n==mimo[i]){
            cout<<"powa geche:"<<mimo[i]<<endl<<"index number:"<<i<<endl;
            
        }
        if(n==!mimo[i]){
            cout<<"powa jai nai"<<endl;
        }
        
    }


}