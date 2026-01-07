#include<iostream>
using namespace std;
int main(){
 int stack[3];
 int top =-1;
   stack[++top]=5;
   stack[++top]=10;
   stack[++top]=15;

   cout<<"popped value:"<<stack[top--];
   cout<<"popped value:"<<stack[top];
}