#include<iostream>
using namespace std;
int size=5;
int arr[5];
int front=0;
int rear=0;

void enqueue(int val){
    if(rear==size-1){
        cout<<"queue is full"<<endl; 
    }

    else{
        arr[5]=val;
        rear++;
    }
}

void dequeue(){
    if(front=rear){
        cout<<"queue is empty"<<endl;
    }

    else{
        cout<<" Dequeue element:"<<arr[front];
        front++;
    }
}

int main(){
    enqueue(20);
    enqueue(30);
    enqueue(10);

    dequeue();

    
}