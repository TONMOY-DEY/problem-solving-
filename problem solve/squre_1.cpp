#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n],d[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==b[i] && b[i]==c[i] && c[i]==d[i]){
            cout<<"yes"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }
}