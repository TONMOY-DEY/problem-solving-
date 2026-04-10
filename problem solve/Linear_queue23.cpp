#include<iostream>
using namespace std;

int size=5;
int queue[5];
int front=-1;
int rear=-1;

void enqueue(int value){
    if(rear==size-1){
        cout<<"Queue is overflow";
    }
    else if(front==-1){
        front =0;
        rear++;
        queue[rear]=value;
        cout<<"Insertaed value:"<<value<<endl;

    }
}

void dequeue(){
    if(front==-1 || front>rear){
        cout<<"Queue is underflow"<<endl;
    }
    else{
        cout<<"Deleted:"<<queue[front]<<endl;
        front++;
    }
}

void display(){
    if(front==-1 || front > rear){
        cout<<"Queue is empty"<<endl;
    }

    else{
        cout<<"queue element"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" "<<endl;
        }
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    return 0;
}