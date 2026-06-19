#include<iostream>
using namespace std;

void merge(int A[],int Left,int Mid,int Right){
    
    int n1=Mid-Left+1;
    int n2=Right-Mid;

    int L[n1];
    int R[n2];

    for(int i=0;i<n1;i++){
        L[i]=A[Left+i];
    }

    for(int j=0;j<n2;j++){
        R[j]=A[Mid+1+j];
    }

    int i=0, j=0,k=Left;

    while (i<n1 && j<n2)
    {
       if(L[i] < R[j]){
        A[k]=L[i];
        i++;
       }

       else{
        A[k]=R[j];
        j++;
       }
       k++;
    }

    while(i<n1){
        A[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        A[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int A[],int Left,int Right){
    if(Left<Right){
         int Mid=(Left+Right)/2;
        mergesort(A,Left,Mid);
        mergesort(A,Mid+1,Right);
        merge(A,Left,Mid,Right);
    }
}

int main()
{
    int A[] = {8, 3, 1, 7, 0, 10, 2};
    int n = 7;

    mergesort(A, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}