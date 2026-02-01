#include<iostream>
using namespace std;

void push(int Stack[],int &top,int size,int value){
    if(top >= (size-1)){
        cout<<"Stack already overflow "<<endl;
    }
    else{
        Stack[++top]=value;
        cout << "Pushed: " << value << " at index " << top << endl;

    }
}

void pop(int Stack[],int &top){
    if(top == -1){
        cout<<"The Stack is underflow"<<endl;
    }
     else{
        cout<<"poped"<<Stack[top]<<"From index"<<top <<endl;

        top--;
     }
}

void ShowElement(int Stack[],int &top){
    if(top ==-1){
        cout<<"Stack is empty"<<endl;
    }

    else{
        for(int i =top;i >= 0;i--){
            cout<<Stack[i]<<"->";
        }
    }
}

int main(){
    int size=5;
    int Stack[size];
    int top=-1;

   push(Stack,top,size,10);
        ShowElement(Stack,top);
        push(Stack,top,size,20);
        ShowElement(Stack,top);
        push(Stack,top,size,30);
        ShowElement(Stack,top);



        pop(Stack,top);
        ShowElement(Stack,top);
        push(Stack,top,size,40);
}
