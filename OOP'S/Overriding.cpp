#include <iostream>
using namespace std;

class Scooty{
// Parent Class
public:
    int topSpeed;
    int mileage;
    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }

private:
    int bootSpace;
};

class Bike : public Scooty{
// Child Class
public : 
    int gears;
    void sound(){
        cout<<"Droom Droom"<<endl;
    }
};

int main(){

    // Bike b1;
    Bike *b = new Bike();

    // b1.sound();
    // (*b).sound();
    b->sound();

    // Scooty s1;
    Scooty *s1 = new Scooty();

    // s1.sound();
    // (*s1).sound();
    s1->sound();

    Scooty *s2 = new Bike();
    s2->sound(); // this will print the sound function from the scooty ds
    // But how to avoid this we use the virtual keyword
    return 0;
}