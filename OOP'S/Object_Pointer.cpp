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

// Pass by Value : Doesn't change anything in the real one
void change(Cricketer x){
    x.avg = 60;
    cout<<"Avg During Function Call : "<<x.avg<<endl;
    return;
}
// Pass by Reference : Changes anything in the real one
void change(Cricketer *x){
    // (*x).avg = 60;
    // Instead of writing the *x we can simply write x->
    x->avg = 60; // x->avg == (*x).avg
    // Arrow use krne k liye pointer hona jaruri hai
    
    cout<<"Avg During Function Call : "<<(*x).avg<<endl;
    return;
}
int main(){

    // Cricketer c1("Mahendra Singh Dhoni",18000,50.6);

    // // Creating a pointer to object : 
    // Cricketer *ptr = &c1;
    
    // // Accessing c1 data members using the pointer
    // cout<<(*ptr).name<<" "<<(*ptr).runs<<" "<<(*ptr).avg<<endl;
    // // *ptr basically means the values at the address stored in ptr

    // // Updating the data members of c1 : 
    // (*ptr).avg = 60;
    // cout<<(*ptr).name<<" "<<(*ptr).runs<<" "<<(*ptr).avg<<endl;


    Cricketer c1("Mahendra Singh Dhoni",18000,50.6);

    cout<<"Avg Before Function Call : "<<c1.avg<<endl;
    change(&c1);
    cout<<"Avg After Function Call : "<<c1.avg<<endl;

    return 0;
}