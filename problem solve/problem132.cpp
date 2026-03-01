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
// SELECTION-SORT(A, n)
// 1.  for i ← 0 to n - 2 do
// 2.      min_index ← i
// 3.      for j ← i + 1 to n - 1 do
// 4.          if A[j] < A[min_index] then
// 5.              min_index ← j
// 6.          end if
// 7.      end for
// 8.      swap A[i] and A[min_index]
// 9.  end for
// END