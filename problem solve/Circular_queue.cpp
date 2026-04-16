#include<iostream>
using namespace std;

int size=5;
int C_Queue[5];
int front=-1;
int rear=-1;

void enqueue(int x){
    if((rear+1)%size==front){
        cout<<"Queue is full"<<endl;
    }

    else if(front==-1){
        front=rear=0;
        C_Queue[rear]=x; // x means value
        cout<<"Inserted value:"<<x<<endl;
    }

    else{
        rear=(rear+1)%size;
        C_Queue[rear]=x;
        cout<<"Inserted:"<<x<<endl;
    }
}

void dequeue(){
    if(front==-1){
        cout<<"Queue is empty";
    }

    else if(front==rear){
        cout<<"Deleted :"<<C_Queue[front]<<endl;
        front=rear=-1;
    }

    else{
        cout<<"Deleted :"<<C_Queue[front]<<endl;
        front=(front+1)%size;
    }
}

void Display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }

    else{
        cout<<"Queue:";
 

        for(int i=front;;i=(i+1)%size){
            cout<<C_Queue[i]<<" ";
            if(i==rear)
            break;
        }
        cout<<endl;

    }
}




int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
   

    Display();

    dequeue();
    dequeue();
    dequeue();

    Display();

    enqueue(90);
    enqueue(100);
    enqueue(150);

    Display();

   return 0;

}