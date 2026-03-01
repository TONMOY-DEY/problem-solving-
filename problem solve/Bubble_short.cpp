#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    int input;

    cout<<"please!! Enter the array element 💕😊"<<endl;
    for(int i =0 ;i < n; i++){
        cout<<"please!! Enter the arry index...."<<i<<endl;
        cin>>input;
        arr[i]=input;
    }
    cout<<"Before shorting array🤗"<<endl;
    for(int i =0 ;i < n ;i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<"NOW!! start shorting 🤔"<<endl;
    for(int i =0; i < n-1 ;i++){
        for(int j=0; j < n-1-i ;j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"After Bubble shorting 😎"<<endl;
    for(int i=0 ;i < n ;i++){
        cout<<arr[i]<<"  "<<endl;
    }
}
/*
BUBBLE-SORT(A, n)
1.  for step ← 0 to n - 2 do
2.      for i ← 0 to n - step - 2 do
3.          if A[i] > A[i + 1] then
4.              temp ← A[i]
5.              A[i] ← A[i + 1]
6.              A[i + 1] ← temp
7.          end if
8.      end for
9.  end for
*/

