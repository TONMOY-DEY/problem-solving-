#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6};
    int i;
    int n;

    bool found=false;

    cout<<"Enter the number:"<<endl;
    cin>>n;

    for(i=0;i<a[10];i++){
        if(n==a[i]){
            found=true;
            break;
        }
    }
    if(found){
    cout<<n<<" was found in index "<<i<<" of the array."<<endl;
    }
    else{
        cout<<"Number not found:"<<endl;
    }
    return 0;
}