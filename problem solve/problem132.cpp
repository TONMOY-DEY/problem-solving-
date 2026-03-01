#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"please!Enter the number:"<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"please ! Enter the index number:";
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int minINDEX=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minINDEX]){
                minINDEX=j;
            }

        }
        int temp=arr[i];
        arr[i]=arr[minINDEX];
        arr[minINDEX]=temp;

    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
}