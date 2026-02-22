#include<iostream>
using namespace std;
int main(){
    int a[5]={1,3,4,5,6};
    int n;
    int i;
    cout<<"please ,Enter the number to be searched:"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        if(n==a[i]){
            break;
        }
    }
    cout<<n<<"was found in index"<<i<<"of the array"<<endl;
}