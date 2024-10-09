#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>
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

    // Function to reserve a bed
    void reserve() {
        ifstream in("./Hostel.txt");
        ofstream out("./Hostel_Temp.txt");

        string line;
        bool found = false;
        while (getline(in, line)) {
            int pos = line.find(this->Name);
            if (pos != string::npos) {
                found = true;
                if (this->Bed > 0) {
                    this->Bed -= 1; // Reduce the number of beds

                    stringstream ss;
                    ss << this->Bed;
                    string strBed = ss.str();

                    int bedPos = line.find_last_of(':');
                    line.replace(bedPos + 1, string::npos, strBed);
                }
            }
            out << line << endl;
        }

        if (!found) {
            cout << "\tHostel information not found!" << endl;
        } else {
            cout << "\tBed Reserved Successfully!" << endl;
        }

        in.close();
        out.close();

        remove("./Hostel.txt");
        rename("./Hostel_Temp.txt", "./Hostel.txt");
    }
};

class Student {
private:
    string Name;
    string Roll_No;
    string Address;
public:
    Student() : Name(""), Roll_No(""), Address("") {}

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
};

int main() {
    Hostel h("3Star", 4000, 4);

    ofstream out("./Hostel.txt");
    out << "\t" << h.getName() << " : " << h.getRent() << " : " << h.getBed() << endl << endl;
    cout << "Hostel Data Saved" << endl;
    out.close();

    Student s;

    bool exit = false;
    while (!exit) {
        system("cls");

        int val;
        cout << "\tWelcome to Hostel Accommodation System" << endl;
        cout << "\t--------------------------------------" << endl;
        cout << "\t1. Reserve A Bed." << endl;
        cout << "\t2. Exit." << endl;
        cout << endl;
        cout << "\tEnter your choice : ";
        cin >> val;

        if (val == 1) {
            system("cls");
            string name, roll_no, address;

            cout << "\tEnter Student Name : ";
            cin.ignore(); // To ignore newline character from previous input
            getline(cin, name);
            s.setName(name);

            cout << "\tEnter Student Roll no : ";
            getline(cin, roll_no);
            s.setRoll_No(roll_no);

            cout << "\tEnter Student's Address : ";
            getline(cin, address);
            s.setAddress(address);

            if (h.getBed() > 0) {
                h.reserve();
            } else if (h.getBed() == 0) {
                cout << "\tSorry, Bed not Available!" << endl;
            }

            ofstream outFile("./Student.txt", ios::app);
            outFile << "\t" << s.getName() << " : " << s.getRoll_No() << " : " << s.getAddress() << endl << endl;
            outFile.close();
            Sleep(5000);
        } else if (val == 2) {
            system("cls");
            exit = true;
            cout << "Thank You!" << endl;
            Sleep(3000);
        }
    }
    return 0;
}
