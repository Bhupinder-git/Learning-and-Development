#include <iostream>
#include <windows.h>
using namespace std;

class Hostel {
private:
    string Name;
    int Rent;
    int Bed;
public:
    Hostel(string Name, int Rent, int Bed) {
        this->Name = Name;
        this->Rent = Rent;
        this->Bed = Bed;
    }

    string getName() {
        return this->Name;
    }
    int getRent() {
        return this->Rent;
    }
    int getBed() {
        return this->Bed;
    }

    // Function to reserve a bed directly without file handling
    void reserve() {
        this->Bed -= 1;  // Decrease the available beds by 1
        cout << "\tBed Reserved Successfully!" << endl;
    }

    // Function to display the hostel details
    void displayHostelInfo() {
        cout << "\tHostel Name: " << this->getName() << endl;
        cout << "\tRent: " << this->getRent() << endl;
        cout << "\tBeds Available: " << this->getBed() << endl << endl;
    }
};

class Student {
private:
    string Name;
    string Roll_No;
    string Address;
public:
    void setName(string Name) {
        this->Name = Name;
    }
    void setRoll_No(string Roll_No) {
        this->Roll_No = Roll_No;
    }
    void setAddress(string Address) {
        this->Address = Address;
    }

    string getName() {
        return this->Name;
    }
    string getRoll_No() {
        return this->Roll_No;
    }
    string getAddress() {
        return this->Address;
    }

    // Function to display student details
    void displayStudentInfo() {
        cout << "\tStudent Name: " << getName() << endl;
        cout << "\tRoll Number: " << getRoll_No() << endl;
        cout << "\tAddress: " << getAddress() << endl << endl;
    }
};

int main() {
    // Creating an instance of the class Hostel
    Hostel h("3Star", 4000, 2);  // 2 beds available initially
    Student s;

    bool exit = false;
    while (!exit) {
        system("cls");

        int val;
        cout << "\tWelcome to Hostel Accommodation System" << endl;
        cout << "\t--------------------------------------" << endl;
        cout << "\t1. Reserve A Bed." << endl;
        cout << "\t2. Display Hostel Info." << endl;
        cout << "\t3. Exit." << endl;
        cout << endl;
        cout << "\tEnter your choice : ";
        cin >> val;

        if (val == 1) {
            system("cls");

            if(h.getBed() > 0){
                string name, roll_no, address;

                cout << "\tEnter Student Name : ";
                cin.ignore();
                getline(cin, name);
                s.setName(name);

                cout << "\tEnter Student Roll no : ";
                getline(cin, roll_no);
                s.setRoll_No(roll_no);

                cout << "\tEnter Student's Address : ";
                getline(cin, address);
                s.setAddress(address);

                // Reserve the bed
                h.reserve();
                s.displayStudentInfo();
                Sleep(3000);
            }
            else{
                cout << "\tSorry, no beds available!" << endl;
                Sleep(3000);
            }

        }
        else if (val == 2) {
            system("cls");
            h.displayHostelInfo();
            Sleep(3000);
        }
        else if (val == 3) {
            system("cls");
            exit = true;
            cout << "Thank You!" << endl;
            Sleep(3000);
        }
    }

    return 0;
}
