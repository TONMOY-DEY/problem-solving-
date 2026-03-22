#include<iostream>
using namespace std;

int binarySearch(int A[],int n,int key){
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(A[mid]=key){
            return mid;
        }

        else if(A[mid]<key){
            low=mid+1;
        }

        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int A[]={2,5,8,12,16,23,38};
    int n=7;
    int key=16;

    int result=binarySearch(A,n,key);

    if(result !=-1){
        cout<<"Element found at index:"<<result<<endl;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}