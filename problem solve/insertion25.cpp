#include<iostream>
using namespace std;
int arr[100]={-5,3,-1,2};
int n=4;


int main(){
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            for(int j=n-1;j>i;j--){
                arr[j+1]=arr[j];
            }
            arr[i+1]=0;
            n++;
            i++;
        }
    }

    cout<<" After Insertion array:";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}



