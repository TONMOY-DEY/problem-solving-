#include<iostream>
using namespace std;
int arr[5]={1,2,3,4,5};
int x=3;

int main(){

    for(int i=0;i<5;i++){
        if(arr[i]==x){
            cout<<"Found the number:"<<arr[i]<<endl <<"index number:"<<i<<endl;
        }

        else{
            cout<<"Not found the number:"<<arr[i]<<endl <<"index number:"<<i<<endl;
        }

    }


}