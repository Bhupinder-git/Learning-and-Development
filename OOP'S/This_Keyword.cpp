#include<iostream>
using namespace std;

class Cricketer{

public:
    string name;
    int runs;

    // Constructor 
    // When we name the parameters of the constructors same as the name of the data members of that class then it doesn't assign values to the data members rather it initializes the variable of it's own(matlab vo apne parameter me hi value daal lega).So to do that kind of stuff we uses the this(->) keyword
    // Cricketer(string name, int runs){
    //     name  = name;
    //     runs = runs;
    // }
    Cricketer(string name, int runs){
        this->name  = name;
        this->runs = runs;
    }
    // this ka matlab hai ki tu class wale variables me assign kr de value
};

int main(){

    // Declaring the instances of the class Cricketer 
    Cricketer c1("Mahendra Singh Dhoni",18000);
    Cricketer c2("Virat Kohli",25000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;

    return 0;
}