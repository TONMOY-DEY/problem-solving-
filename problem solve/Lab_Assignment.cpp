#include<iostream>
#include<string>
using namespace std;

struct patient {
    int id;
    string name;
    int age;
    string gender;
    string condition;
    string doctor;
    int room;
    string Admission_Date;
    float Treatment_cost;

};

patient patients[100];
int patientCount=0;

void addpatient(){
    if(patientCount >= 100){
        cout<<"Alert ....Patient limit reached!"<<endl;
        return;
    }
    patient p;
    cout<<"......ADD NEW PATIENT......"<<endl;

    cout<<"Enter the patient ID:";
    cin>>p.id;
    cin.ignore();

    cout<<"Enter the patient Name:";
    getline(cin,p.name);

    cout<<"Enter Age:";
    cin>>p.age;
    cin.ignore();

    cout<<"Enter Gerder:";
    getline(cin,p.gender);

    cout << "Enter Medical Condition: ";
    getline(cin, p.condition);

    cout<<"Enter the Assigned Doctor:";
    getline(cin,p.doctor);

    cout << "Enter Room Number: ";
    cin >> p.room;
    cin.ignore();

    cout << "Enter Admission Date (YYYY-MM-DD): ";
    getline(cin, p.Admission_Date);

    cout << "Enter Treatment Cost: ";
    cin >> p.Treatment_cost;
    cin.ignore();

    
    patients[patientCount]=p;
    patientCount++;


    cout<<"Patient added successfully!" << endl;
    cout<<"............................................."<<endl;
}

    void sortPatientsByID(){
        for(int i=0;i < patientCount-1;i++){
            for(int j=0; j < patientCount-1-i;j++){
                if(patients[j].id > patients[j+1].id){
                    patient temp=patients[j];
                    patients[j] = patients[j+1];
                    patients[j+1]=temp;

                }
            }
        }

    }

    void displayAllPatients() {
    if(patientCount == 0){
        cout << "No patients available " << endl;
        return;
    }

     cout << "*******ALL PATIENT RECORDS*******" << endl;
    for(int i = 0; i < patientCount; i++){
        cout << "----------------------------------------" << endl;
        cout << "Patient ID: " << patients[i].id << endl;
        cout << "Name: " << patients[i].name << endl;
        cout << "Age: " << patients[i].age << endl;
        cout << "Gender: " << patients[i].gender << endl;
        cout << "Medical Condition: " << patients[i].condition << endl;
        cout << "Assigned Doctor: " << patients[i].doctor << endl;
        cout << "Room Number: " << patients[i].room << endl;
        cout << "Admission Date: " << patients[i].Admission_Date << endl;
        cout << "Treatment Cost: " << patients[i].Treatment_cost << endl;
    }
    cout << "----------------------------------------" << endl;

    }

    void searchByID(){
        if(patientCount==0){
            cout<<"NO patients available:"<<endl;
            return;
        }

        int id;
        cout<<".......SEARCH BY PATIENT ID....."<<endl;
        cout<<"Enter patient ID:";
        cin>>id;
        cin.ignore();

        bool found = false;
        for(int i = 0; i < patientCount; i++){
        if(patients[i].id == id){
            cout << "--- PATIENT FOUND ---" << endl;
            cout << "Patient ID: " << patients[i].id << endl;
            cout << "Name: " << patients[i].name << endl;
            cout << "Age: " << patients[i].age << endl;
            cout << "Gender: " << patients[i].gender << endl;
            cout << "Medical Condition: " << patients[i].condition << endl;
            cout << "Assigned Doctor: " << patients[i].doctor << endl;
            cout << "Room Number: " << patients[i].room << endl;
            cout << "Admission Date: " << patients[i].Admission_Date << endl;
            cout << "Treatment Cost: " << patients[i].Treatment_cost << endl;
            cout << "----------------------------------------" << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Patient with ID " << id << " not found!" << endl;
    }
}

void searchByname(){
    if(patientCount==0){
        cout<<"No patients available." << endl;
        return;
    }
    string name;
    cout<<"......SEARCH BY PATIENT NAME.........."<<endl;
    cout<<"Enter patient name:";
    cin.ignore();
    getline(cin,name);

    bool found=false;
    for(int i=0;i<patientCount;i++){
        if(patients[i].name==name){
            cout<<"...........PATIENT FOUND ..........."<<endl;
            cout << "Patient ID: " << patients[i].id << endl;
            cout << "Name: " << patients[i].name << endl;
            cout << "Age: " << patients[i].age << endl;
            cout << "Gender: " << patients[i].gender << endl;
            cout << "Medical Condition: " << patients[i].condition << endl;
            cout << "Assigned Doctor: " << patients[i].doctor << endl;
            cout << "Room Number: " << patients[i].room << endl;
            cout << "Admission Date: " << patients[i].Admission_Date << endl;
            cout << "Treatment Cost: $" << patients[i].Treatment_cost << endl;
            cout << "----------------------------------------" << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Patient with Name" << name << " not found!" << endl;
    }
}
int main() {
    int choice;
    do {
        cout << "................ HOSPITAL PATIENT MANAGEMENT SYSTEM ................." << endl;
        cout<<"................................................................."<<endl;
        cout << "1. Add New Patient" << endl;
        cout << "2. Display All Patients" << endl;
        cout << "3. Search Patient by ID" << endl;
        cout << "4. Search Patient by Name" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore();

        switch(choice){
            case 1: addpatient(); break;
            case 2: displayAllPatients(); break;
            case 3: searchByID(); break;
            case 4: searchByname(); break;
            case 5: cout << "Exiting system..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 5);

    return 0;
}
        


    

