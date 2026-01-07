#include<iostream>
using namespace std;

void push (int Stack[],int &top,int size,int value){
    if(top >=(size-1)){
        cout<<"Stack is overflow"<<endl;
    }
    else{
        Stack[++top]=value;
        cout<<"pushed:"<<value<<"at index"<<top<<endl;
    }
}

    //stack pop
    void pop(int Stack[],int &top){
        if(top == -1) {
            cout<<"The Stack is underflow"<<endl;
        }
        else{
            cout<<"Popped:"<<Stack[top]<<"From index"<<top<<endl;
            top--;
        }
    }

    //show Element
    void showElement(int Stack[],int top){
        if(top == -1){
            cout<<"The stack is empty"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<Stack[i]<<"->";
            }
        }
    }

    int main(){
        int size=5;
        int Stack[size];
        int top=-1;
        push(Stack,top,size,10);
        showElement(Stack,top);
        push(Stack,top,size,20);
        showElement(Stack,top);
        push(Stack,top,size,30);
        showElement(Stack,top);



        pop(Stack,top);
        showElement(Stack,top);
        push(Stack,top,size,40);

        
    }
