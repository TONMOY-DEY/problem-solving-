#include<iostream>
using namespace std;
int main(){
    int input;
     int n=5;
    int arr[n];

    cout<<"please!! Enter the array emement:"<<endl;

    for(int i=0;i < n; i++){
        cin>>input;
        arr[i]=input;

    }
    cout<<"NOW !start of selection sort👍"<<endl;
    for(int i=0; i < n-1; i++){
        int minindex=i;
        for(int j=i+1; j<n;j++){
            if(arr[j] < arr[minindex]){
                minindex=j;
            }

        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }

    cout<<"After sorting arry😒"<<endl;

    for(int i=0;i<n ;i++){
        cout<<arr[i]<<"  "<<endl;
    }
    return 0;
   
}