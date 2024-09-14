#include <iostream>
using namespace std;
 
class Student{
    // Default data members are set to private
public: // Public members can be acessible 
    string name;
    int roll_no;

    Student(){

    }

    Student(string name,int roll_no,float marks){
        this->name = name;
        this->roll_no = roll_no;
        this->marks = marks;
    }

    // getter : returns the value of a private data member
    float getMarks(){
        return  marks;
    }

    // setter : sets the value of a private member
    float setMarks(float x){
        this->marks = x;
    }

private: //Private members are not accessible,these are used for security purposes.So the user can't be able to change it
    float marks;

// But how to print private data members in the main to do so we use the getter function : 



};
int main(){

    Student s1("Bhupinder",77,85.5);
    // Here we can see that with the help of constuctor we can assign value to private members indirectly because it assign the value within the class.We can't call constructor muliple times 

    cout<<s1.getMarks()<<endl;
    s1.setMarks(55.5);
    cout<<s1.getMarks()<<endl;


    return 0;
}