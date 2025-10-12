#include<iostream>
using namespace std;
int arr[]={4,7,10,5,8};
int n=5;
int x=-1;

int main(){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            for(int j=n-1;j>i;j--){
                arr[j+1]=arr[j];
            }
            arr[i+1]=-1;
            n++;
            i++;
        }
    }
   

    cout<<"After array insert:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
