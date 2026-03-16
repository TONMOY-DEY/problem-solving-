#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int iteam;
    int n;

    cout<<"Enter number of elements:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter item to search:";
    cin>>iteam;

    for(int i=0;i<n;i++){
        if(arr[i]==iteam){
            cout<<"Iteam found at position"<<i<<endl;
            return 0;
        }
    }
    cout<<"Item not found";
    return 0;
}