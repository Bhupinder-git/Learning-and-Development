#include <iostream>
using namespace std;
// Same name different forms(Polymorphism)
class Loading{
public:
    // Constructor Overloading means multiple constructors with same name different parameters.

    // Function Overloading : Functions with same name but different parameters,Also known as method overloading
    void sum(int a,int b){
        cout<<a+b<<endl;
        return;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
        return;
    }
    void sum(string a,string b){
        cout<<a+b<<endl;
    }

    // Operator Overloading : 
    // Same operator ko different trike se use krna
    // example : '+' is an operator which can perform differently based on operands
    // 3 + 8 = 11 but
    // "Bhupinder"+"Singh" = "BhupinderSingh"
};

int main(){

    Loading l1;

    l1.sum(2,9);
    l1.sum(2,9,13);
    l1.sum("Aditya","Jha");
    return 0;
}