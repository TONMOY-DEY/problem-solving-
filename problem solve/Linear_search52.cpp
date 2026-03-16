#include<iostream>
using namespace std;
int main(){
    int a[5]={10,20,30,40,50};
    int intem;
    
    cout<<"Enter the number to search:";
    cin>> intem;

    for(int i=0;i<5;i++){
        if(a[i]==intem){
            cout<<"Intem found"<<endl;
            return 0;

        }
    }
    for(int i=0;i<5;i++){
        if(a[i]!=intem){
            cout<<"Intem not found"<<endl;
            return 0;
        }
    }
    
    }
   


