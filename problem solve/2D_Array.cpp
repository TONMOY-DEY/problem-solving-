#include<iostream>
using namespace std;
int main(){


int arr1[2][2];
int arr2[2][2];
int val;

cout<<"please enter the element for array 1"<<endl;
for(int i=0 ;i < 2; i++){
    for(int j =0 ;j < 2; j++){


        cout<<"Enter element for("<<i<<","<<j<<"):";
        cin>>val;
        arr1[i][j]=val;
    }
}

cout<<"please enter the element for array 2"<<endl;
for(int i=0 ;i < 2; i++){
    for(int j =0 ;j < 2; j++){


        cout<<"Enter element for("<<i<<","<<j<<"):";
        cin>>val;
        arr2[i][j]=val;
    }
}
cout<<"Elements inside Array 1 "<<endl;
     for(int i = 0; i < 2; i++){
        for( int j = 0; j < 2; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Elements inside Array 2 "<<endl;
     for(int i = 0; i < 2; i++){
        for( int j = 0; j < 2; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }



cout<<"2D array addition"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){

        cout<<arr1[i][j]+arr2[i][j]<<" ";
    }
    cout<<endl;
}

}
