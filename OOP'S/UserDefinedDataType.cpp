#include <iostream>
using namespace std;

// Class is basically a blueprint of something that exist
class Student{ // declares a new data type

public:
    // These variables declared inside the class are called the data members of the respective class
    string name;
    int roll_no;
    float cgpa;
    int age;
};

int main(){

    // Declaring an object of the class Student
    // s1 is also known as the instance of the class student
    Student s1;

    // Assigning values : We can access data members of class using dot operator
    s1.name = "Bhupinder";
    // s1.roll_no = 77;
    s1.cgpa = 8.2;
    s1.age = 20;

    // Taking input from user : 
    cout<<"Enter the roll no of the student 1 : ";
    cin>>s1.roll_no;

    // We can create multiple objects of a class according to our need
    Student s2;

    // Assigning values : 
    s2.name = "Aditya Jha";
    s2.roll_no = 86;
    s2.cgpa = 8.5;
    s2.age = 19;

    // Printing Values :
    cout<<s1.name<<" "<<s1.roll_no<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.roll_no<<" "<<s2.cgpa<<endl;


    return 0;
}