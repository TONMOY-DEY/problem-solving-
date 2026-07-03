#include<iostream>
using namespace std;

int main(){
    int k;

    while (cin >> k && k!=0)
    {
        int dx,dy;
        cin>>dx>>dy;
  

    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;

        if(x==dx || y==dy ){
            cout<<"division"<<endl;
        }
        else if(x > dx && y > dy){
            cout<<"NE" <<endl;
        }
        else if( x<dx && y>dy){
            cout<<"NW" <<endl;
        }
        else if( x>dx && y >3){
            cout<<"SE"<<endl;
        }
        else{
            cout<<"SW"<<endl;
        }
    }
}
}
    
    

    
