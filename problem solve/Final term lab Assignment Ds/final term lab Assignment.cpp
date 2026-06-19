#include<iostream>
using namespace std;

//structure or Node Declaration[part 1]
struct Vehicle{
    string regNo;
    string type;
    string entryTime;
    string slot;
    Vehicle* next;

};

//Insert Regular Vehicle[part 2]


void insertAtEnd(Vehicle* &head,string reg,string type,string time,string slot){
    Vehicle*newnode=new Vehicle();
    newnode->regNo=reg;
    newnode->type=type;
    newnode->entryTime=time;
    newnode->slot=slot;
    newnode->next=NULL;

    if(head==NULL){
        head=newnode;
        return;
    }

    Vehicle*temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

  
//PART 3: Insert VIP Vehicle
void insertAtFront(Vehicle* &head,string reg,string type,string time,string slot){
    Vehicle*newnode=new Vehicle();
    newnode->regNo=reg;
    newnode->type=type;
    newnode->entryTime=time;
    newnode->slot=slot;

    newnode->next=head;
    head=newnode;
}

// Remove Vehicle by Registration Number

void removeVehicle(Vehicle*&head,string reg){
    if(head==NULL);
    return;

    if(head ->regNo==reg){
        Vehicle* temp=head;
        head = head->next;
        delete temp;
        return;
    }
    Vehicle* current=head;
    while(current->next!=NULL && current->next->regNo!=reg){
        current=current->next;
    }

    if(current->next!=NULL){
        Vehicle*temp=current->next;
        current->next=temp->next;
        delete temp;
    } 
}

void display(Vehicle* head) {
    Vehicle* temp = head;
    while (temp != NULL) {
        cout << "[" << temp->regNo << "-" << temp->type  << "-" << temp->slot << "] -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Search Vehicle Function

void searchVehicle(Vehicle*head,string reg){
    Vehicle*temp=head;

    while(temp!=NULL){
        if(temp->regNo==reg){
            cout<<"Vehicle Found!"<<endl;
            cout<<"Registration: "<<temp->regNo<<endl;
            cout<<"Type:"<<temp->type<<endl;
            cout<<"Entry Time:"<<temp->entryTime<<endl;
            cout<<"slot:"<<temp->slot<<endl;
            return;
        }
        temp=temp->next;
    }
    cout << "Vehicle not found in parking system." << endl;
    }




    // MAIN Function

    int main(){
        Vehicle* head = NULL;
    cout << "Initial parking list: Empty" << endl;
    insertAtEnd(head, "AB123", "Car", "10:00", "Slot5");
    insertAtEnd(head, "XY456", "Motorcycle", "10:10", "Slot12");
    insertAtEnd(head, "GH789", "Car", "10:20", "Slot8");
    insertAtEnd(head, "PQ101", "Car", "10:30", "Slot3");


    cout << "After adding 4 regular vehicles:" << endl;
    display(head);

    insertAtFront(head, "VIP007", "VIP", "10:40", "Slot1");
    cout << "After inserting VIP007 at front:" << endl;
    display(head);

    removeVehicle(head, "GH789");
    cout << "After removing GH789 (exited):" << endl;
    display(head);

        Vehicle* head2 = NULL;
    insertAtEnd(head2, "DL20A1234", "Car", "1:00", "A-01");
    insertAtEnd(head2, "KA05B5678", "Car", "1:10", "A-02");
    insertAtEnd(head2, "MH12C9012", "Car", "2:30", "B-07");
    insertAtEnd(head2, "TN07D3456", "Car", "2:40", "B-08");
    insertAtEnd(head2, "WB01E7890", "Car", "2:50", "B-09");


    cout << "Searching for MH12C9012..." << endl;
    searchVehicle(head2, "MH12C9012");

    cout << "Searching for GJ03F1111..." << endl;
    searchVehicle(head2, "GJ03F1111");

    return 0;




    }
    


  


