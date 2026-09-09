#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int X = 0;
    string s;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s == "++X" || s == "X++"){
            X++;
        }
        else{
            X--;
        }
    }
       cout << X << endl;

    return 0;
}