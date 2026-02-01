#include<iostream>
using namespace std;


void enqueue(int Queue[], int &Front, int &Rear, int sz, int value){
    if(Rear >= (sz -1)){
        cout<<"Queue is overflow"<<endl;
    }
    else if(Front == -1 && Rear == -1 ){
            Front++;
            Rear++;
            Queue[Rear] = value;
        cout<<"Inserted First Element in Queue "<<endl;
    }else{
        Queue[++Rear] = value;
        cout<<value<<" inserted in queue"<<endl;
    }

}

void dequeue(int Queue[], int &Front, int &Rear){
    if(Rear == -1 && Front == -1){
        cout<<"Queue is empty.."<<endl;
    }else if(Front == Rear){

        cout<<"Removed "<<Queue[Front]<<endl;
        Front = -1;
        Rear = -1;
    }else{

        cout<<"Removed Element: "<<Queue[Front]<<endl;
        Front++;
    }

}

void showElements(int Queue[], int Front, int Rear){
    if(Front == -1 && Rear == -1){
        cout<<"Queue is empty..."<<endl;
    }
    else{
    for(int i = Front; i<= Rear; i++){
        cout<<Queue[i]<<"->";
    }
    }
}

int main(){

int sz = 5;

int Queue[sz];
int Front= -1;
int Rear = -1;

showElements(Queue, Front, Rear);

enqueue(Queue, Front, Rear, sz, 10);
showElements(Queue, Front, Rear);


enqueue(Queue, Front, Rear, sz, 20);
showElements(Queue, Front, Rear);

enqueue(Queue, Front, Rear, sz, 30);
showElements(Queue, Front, Rear);

enqueue(Queue, Front, Rear, sz, 40);
showElements(Queue, Front, Rear);

enqueue(Queue, Front, Rear, sz, 50);
showElements(Queue, Front, Rear);

dequeue(Queue, Front, Rear);
showElements(Queue, Front, Rear);

enqueue(Queue, Front, Rear, sz, 60);
showElements(Queue, Front, Rear);






}
