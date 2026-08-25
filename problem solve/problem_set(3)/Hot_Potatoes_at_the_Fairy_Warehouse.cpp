#include<iostream>
#include<string>
using namespace std;

int main(){
    int test_case;
    cin>>test_case;

    while (test_case--)
    {
        int n;
        long long k;
        string s;

        cin>>n>>k;
        cin>>s;

        int m=2*n;

        int red=0;
        int blue=0;

        for(int i=0;i<m;i++){
            if(s[i]=='0')
            continue;

            int next=(i+1)%m;

            int finalpos;

            if(s[next]=='0')
            finalpos=next;

            else
            finalpos=i;

            if(finalpos %2 ==0)
            blue++;

            else

            red++;
            
        }
        cout << red << " " << blue << " "<<endl;
        
    }
    
}