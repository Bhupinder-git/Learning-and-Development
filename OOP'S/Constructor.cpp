#include <iostream>
using namespace std;

class Car{
public:
    string name;
    int price;
    int seats;
    string type;

    Car(){
        // Default Consturctor
    }
    // Constructor : Basically a function with name similar to class and without any return type : 

    // Constructor Overloading : Constructors with same name but different no of parameters
    // Used to initialize the data members of an object in one statement
    Car(string n,int p,int s){
        // Parameterised Constructor
        name = n;
        price = p;
        seats = s;
    }
    Car(string n,int p,int s,string ty){
        // Parameterised Constructor
        name = n;
        price = p;
        seats = s;
        type = ty;
    }
};

int main(){

    // Declaring the instance object of the class Car
    // Car c1; 

    // We can assign values to the data members individually as : 
    // c1.name = "Honda City";
    // c1.price = 1500000;
    // c1.seats = 5;
    // c1.type = "Sedan";

    // But we can simply assign values simply like this using constructor
    // We have to pass arguments in correct order
    Car c1("Honda City",800000,5);
    c1.type = "Sedan";
    // Overwriting Price :
    c1.price = 700000;
    // Default constructor get's called automatically when we create an instance of a class

    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;

    Car c2;
    c2.name = "Maruti Swift";
    c2.price = 800000;
    c2.seats = 5;
    c2.type = "Hatchback";

    cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;

    Car c3("Toyota Fortuner",4500000,8,"SUV");
    cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl;

    // Creating a copy of object
    Car c4 = c2;
    c4.name = "Rampari"; // Deep Copy
    // Deep Copy : Matlab real me copy bni hai so if we change anythin for this object object then it doesn't change the other one example : like pass by reference
    cout<<c4.name<<" "<<c4.price<<" "<<c4.seats<<" "<<c4.type<<endl;

    // Creating copy using the copy constructor
    Car c5(c1);
    c5.name = "Rani"; // Also creates a deep copy 
    cout<<c5.name<<" "<<c5.price<<" "<<c5.seats<<" "<<c5.type<<endl;
    return 0;
}