#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>
using namespace std;

class Hostel{
private:
    // Private Data Members
    string Name;
    int Rent;
    int Bed;
public:
    // Constructor
    Hostel(string Name, int Rent, int Bed){
        this->Name = Name;
        this->Rent = Rent;
        this->Bed = Bed;
    }

    // creating getters to access the private data members
    string getName(){
        return this->Name;
    }
    int getRent(){
        return this->Rent;
    }
    int getBed(){
        return this->Bed;
    }

    // Function to check if bed is available or not
    void reserve(){
        ifstream in("./Hostel.txt"); // used to read data
        ofstream out("./Hostel Temp.txt"); // used to insert data

        string line; // Used to store the readed data
        while(getline(in,line)){
            int pos = line.find("3Star");
            if(pos != string::npos){

                int bed = this->Bed - 1;
                this->Bed = bed;

                stringstream ss;
                ss<<bed;

                string strBed = ss.str();

                int bedPos = line.find_last_of(':');
                line.replace(bedPos+1, string::npos, strBed);
            }
            out<<line<<endl;
        }
        out.close();
        in.close();
        remove("./Hostel.txt");
        rename("./Hostel Temp.txt", "./Hostel.txt");
        cout<<"\tBed Reserved Successfully!"<<endl;
    }
};

class Student{
private:
    // Private Data members
    string Name;
    string Roll_No;
    string Address;
public:
    Student():Name(""), Roll_No(""), Address(""){}

    // Creating setter function to initialize the private data members
    void setName(string Name){
        this->Name = Name;
    }
    void setRoll_No(string Roll_No){
        this->Roll_No = Roll_No;
    }
    void setAddress(string Address){
        this->Address = Address;
    }

    // Creating getter's to access the private data members 
    string getName(){
        return this->Name;
    }
    string getRoll_No(){
        return this->Roll_No;
    }
    string getAddress(){
        return this->Address;
    }
};

int main(){

    // Creating an instance of the class Hostel 
    Hostel h("3Star",4000,4);

    ofstream out("./Hostel.txt");
    out<<"\t"<<h.getName()<<" : "<<h.getRent()<<" : "<<h.getBed()<<endl<<endl;
    cout<<"Hostel Data Svaed"<<endl;
    out.close();

    // Creating an instance of the class Student
    Student s;

    bool exit = false;
    while(!exit){ // Runs till the exit becomes false
        system("cls"); // Similar to clrscr function

        int val; // Variable to take input from user
        cout<<"\tWelcome to Hostel Accommodation System"<<endl;
        cout<<"\t--------------------------------------"<<endl;
        cout<<"\t1.Reserve A Bed."<<endl;
        cout<<"\t2.Exit."<<endl;
        cout<<endl;
        cout<<"\tEnter your choice : ";
        cin>>val;

        if(val == 1){
            system("cls");
            string name, roll_no, address;
            cout<<"\tEnter Student Name : ";
            cin>>name;
            s.setName(name);

            cout<<"\tEnter Student Roll no : ";
            cin>>roll_no;
            s.setRoll_No(roll_no);

            cout<<"\tEnter Student's Address : ";
            cin>>address;
            s.setAddress(address);

            if(h.getBed() > 0){
                h.reserve();
            }
            else if(h.getBed() == 0){
                cout<<"\tSorry, Bed not Availaible!";
            }

            ofstream outFile("./Student.txt", ios::app);
            outFile<<"\t"<<s.getName()<<" : "<<s.getRoll_No()<<" : "<<s.getAddress()<<endl<<endl;
            outFile.close();
            Sleep(5000);
        }
        else if(val == 2){
            system("cls");
            exit = true; // exits the loop
            cout<<"Thank You!"<<endl;
            Sleep(3000);
        }
    }
    return 0;
}