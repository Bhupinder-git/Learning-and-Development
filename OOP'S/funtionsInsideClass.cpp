#include <iostream>
using namespace std;

class Cricketer{

public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    // Function to print all the details of any instance
    void print(){
        // this keyword use kro (best practice) to avoid misconception between two same variable names
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        return;
    }

    int matches(){
        return this->runs/this->avg;
    }

};

void print(Cricketer x){
    cout<<x.name<<" "<<x.runs<<" "<<x.avg<<endl;
    return;
}

int main(){

    // Declaring the instances of the class Cricketer 
    Cricketer c1("Mahendra Singh Dhoni",18000,50.6);
    Cricketer c2("Virat Kohli",25000,58.2);

    // Printing Manually

    // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    // cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<endl;

    // Printing using the function written outside the class :
    // print(c1);
    // print(c2);

    // To access the print function written inside class we have to use the instance/object of that class 

    // Printing using function
    c1.print();
    c2.print();

    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;

    return 0;
}