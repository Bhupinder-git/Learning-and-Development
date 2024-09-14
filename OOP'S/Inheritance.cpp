#include <iostream>
using namespace std;

class Scooty{
// Parent Class
public:
    int topSpeed;
    float mileage;

private :
    int bootSpace;
};

class Bike : public Scooty {
// Derived/Child Class
public:
    int gears;
};

int main(){
    Bike b1;
    b1.topSpeed = 150;
    b1.mileage = 55.4;
    b1.gears = 6;
    
    return 0;
}