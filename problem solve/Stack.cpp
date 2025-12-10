#include<iostream>
using namespace std;
#define MAX 5

class Stack{
    private:
    int Max=5;
    int top;
    int arr[MAX];
    
    public:
    Stack(){
        top=-1; 
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top==Max-1;
    }

    void push(int x){
        if(isFull()){
            cout<<"stack full...."<< x <<"........"<< "push not possible"<<endl;
        }
        else{
            arr[++top]=x;
            cout<<"push complete---"<<x <<endl;
        }
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack empty! not possible pop"<<endl;
            }
            else{
                int removed=arr[top--];
                cout<<removed<<"pop complet stack array"<<endl;
            }
        }

        void display(){
            if(isEmpty()){
                cout<<"Stack open"<<endl;
            }

            else{
                cout<<"now show the stack"<<endl;
                cout<<"......................"<<endl;
                for(int i=top;i>=0;i--){
                    cout<<arr[i]<<""<<endl;
                }
            }
        }

    };

    int main(){
        Stack stack;
        stack.push(10);
        stack.push(20);
        stack.push(30);

        // stack.pop();
        // stack.display();

        stack.display();

        stack.push(40);
        stack.push(50);
        stack.push(60);

        stack.display();

      return 0;

    }





