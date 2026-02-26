#include<iostream>
using namespace std;
int main(){
    int temp[6]={34,28,41,37,30,25};
    int maximum=temp[0];
    int minimum=temp[1];


    for(int i=0;i<6;i++){
        if(temp[i]>maximum){
            maximum=temp[i];
            cout<<maximum<<endl;
        }

        if(temp[i]<minimum){
            minimum=temp[i];
            cout<<minimum;
        }
    }
}