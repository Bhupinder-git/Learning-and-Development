#include <iostream>
using namespace std;

class Cricketer{
    public:
        string name;
        int runs;
        float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};
int main(){

    Cricketer c1("Mahendra Singh Dhoni",18000,50.6);

    // Printing c1
    cout<<c1.name<<" "<<c1.runs<<c1.avg<<endl;

    // int *ptr = new int(5454); // Dynamically allocation
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;


    // Creating an instance/object of an class dynamically
    Cricketer* c2 = new Cricketer("Virat Kohli",25000,58.2);

    // Printing c2
    // cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;

    // Aage se jb bhi hum object nhi object pointer bnayenge
    return 0;
}