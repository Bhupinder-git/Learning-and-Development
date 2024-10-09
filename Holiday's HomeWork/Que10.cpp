#include <iostream>
#include <vector>
using namespace std;

// Segregating the even/odd array while maintaining the relative order
void segregate_evenOdd(vector<int> &arr) {
    vector<int> evens;
    vector<int> odds;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) { // even hai
            evens.push_back(arr[i]);
        } else { // odd hai
            odds.push_back(arr[i]); 
        }
    }
    
    int index = 0;
    for (int i = 0; i < evens.size(); i++) {
        arr[index++] = evens[i];
    }
    for (int i = 0; i < odds.size(); i++) {
        arr[index++] = odds[i];
    }
}

// Function to print the array
void print_arr(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 34, 45, 9, 8, 90, 3};

    cout << "Array before segregation: " << endl;
    print_arr(arr);

    segregate_evenOdd(arr);

    cout << "Array after segregation: " << endl;
    print_arr(arr);

    return 0;
}
