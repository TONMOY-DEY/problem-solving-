#include<iostream>
using namespace std;

int main(){
    int row1,row2;
    int cal1,cal2;

    cout<<"please! Enter the  row and cal first metrix:";
    cin>>row1>>cal1;

    cout<<"please! Enter the  row and cal second metrix:";
    cin>>row2>>cal2;


    if(cal1 != row2 ){
        cout<<"Matrix Multiplication is not possible!"<<endl;
    } 

    else{
        int A[10][10],B[10][10],C[10][10];

        cout<<"Enter element of First matrix:"<<endl;
        for(int i=0;i<row1;i++){
            for(int j=0;j<cal1;j++){
                cin>>A[i][j];
            }
        }

        cout<<"Enter element of Second matrix:"<<endl;
        for(int i=0;i<row2;i++){
            for(int j=0;j<cal2;j++){
                cin>>B[i][j];
            }
        }

        cout<<"Now multiplication matrix"<<endl;
        for(int i=0;i<row1;i++){
            for(int j=0;j<cal2;j++){
                C[i][j]=0;
                for(int k=0;k<cal1;k++){
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }

        cout<<"Result metrix :"<<endl;
        for(int i=0;i<row1;i++){
            for(int j=0;j<cal2;j++){
                cout<< C[i][j];
            }
            cout<<endl;
        }
    }
    
}