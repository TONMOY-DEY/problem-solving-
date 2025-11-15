#include<iostream>
using namespace std;

struct  student{
    int id;
    string name;
    float cgpa;
    string dept;

};

int main(){
    student s[5];
    s[0].id=59355;
    s[0].name="Tonmoy";
    s[0].cgpa=3.56;
    s[0].dept="CSE";



    cout<<"Student information:"<<endl;
    cout<<"ID:"<<s[0].id<<endl;
    cout<<"NAME:"<<s[0].name<<endl;
    cout<<"CGPA:"<<s[0].cgpa<<endl;
    cout<<"DEPT:"<<s[0].dept<<endl;
    

}




