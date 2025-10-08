#include<iostream>
using namespace std;

class myArray{
public:
    int total_size;
    int used_size;
    int *ptr;

};

void createArray(class myArray *a,int tsize,int usize){
(*a).total_size=tsize;
(*a).used_size=usize;
(*a).ptr=new int[tsize];
}

void show(class myArray *p){

    for(int i=0 ; i < (*p).used_size;i++){
        cout<<((*p).ptr[i])<<""<<endl;
    }
}
void setval(class myArray *p){
    int n;
    for(int i=0;i<(*p).used_size;i++){
        cout<<"Enter the element",i;
        cin>>n;
        (*p).ptr[i]=n;

    }
}
int main(){
    class myArray marks;
    createArray(&marks,10,2);
    cout<<"we are running setval now"<<endl;
    setval(&marks);
    cout<<"We are running show now"<<endl;
    show(&marks);
    show(&marks);
    return 0;

}
