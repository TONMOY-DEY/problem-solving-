#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[]={1,3,6,7,10};

    for(int i=0;i < n-1 ;i++){
        int k=i;
        for(int j=i+1 ;j<n;j++){
            if(arr[j]< arr[k]){
                k=j;
            }

        }
        int new_min_value=arr[k];
        arr[k]=arr[i];
        arr[i]=new_min_value;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}