#include <iostream>
using namespace std;

// Now we are going to make our own Vector Data Structure
class Vector {
public:
    int size;
    int capacity;
    int* arr;

    // Constructor:
    Vector() {  // Automatically executed when an instance of the class is created
        this->size = 0;
        this->capacity = 1;
        this->arr = new int[1];
    }

    // Creating a function for push_back (adding elements)
    void add(int element) {
        if (this->size == this->capacity) {
            // Double the capacity when it's full
            this->capacity *= 2;
            int* arr2 = new int[this->capacity];
            for (int i = 0; i < this->size; i++) {
                arr2[i] = arr[i];  // Copying elements to the new array
            }
            delete[] arr; // Free the old array memory
            arr = arr2;   // Set arr(pointer) to the new array
        }
        // Add the element and increase the size
        arr[this->size] = element;
        this->size++;
    }

    // Prints the element at that index
    void get(int index){
        if(this->size == 0) cout<<"Array is empty";
        if(index >= this->size || index < 0) cout<<"Invalid Index"; 
        cout<<arr[index]<<endl;
        return;
    }

    // Function to remove the last element(i.e pop_back)
    void remove(){
        if(this->size == 0) cout<<"Array is empty";
        size--;
    }

    // Function to print the vector's elements
    void print() {
        cout << endl << "Size : " << this->size << " Capacity : " << this->capacity << endl;
        for (int i = 0; i < this->size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Vector() {
        delete[] arr;
    }
};

int main() {
    // Create an instance of Vector
    Vector v;

    v.print();
    // Adding values
    v.add(10);
    v.print();
    v.add(20);
    v.print();
    v.add(30);
    v.print();
    v.add(40);
    v.print();
    v.add(50);
    v.print();


    // Accessing the element at that index
    // v.get(40);

    // Removing/Poping the element 
    v.remove();

    v.print();

    return 0;
}
