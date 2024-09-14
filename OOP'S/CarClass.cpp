#include <iostream>
using namespace std;

class Car{
public:
    string name;
    int price;
    int seats;
    string type;

};

// Declaring a function to print the value of data members for an object
void print(Car x){
    cout<<endl<<x.name<<" "<<x.price<<" "<<x.seats<<" "<<x.type<<endl;
    return;
} 

// Defaultly the instance of any class are the pass by value
// void change(Car x){
//     // changing the value 
//     x.name ="Audi A8";
//     return; 
// }

// Passing by reference
void change(Car &x){
    // changing the value 
    x.name ="Audi A8";
    return; 
}

int main(){

    Car c1;
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type = "Sedan";

    cout<<"Printing the values of the object c1 before function call : ";
    print(c1);

    change(c1);

    cout<<"Printing the values of the object c1 after function call : ";
    print(c1);

    // So we can see that the objects of a class are basically pass by value in nature.

    // Car c2;
    // c2.name = "Swift";
    // c2.price = 700000;
    // c2.seats = 5;
    // c2.type = "HatchBack";

    // Car c3;
    // c3.name = "Toyota Fortuner";
    // c3.price = 4000000;
    // c3.seats = 8;
    // c3.type = "SUV";

    // We can print the values of every object like this also : 
    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    // cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
    // cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl;

    // but we can do this with help of an function as 
    // print(c1);
    // print(c2);
    // print(c3);

}