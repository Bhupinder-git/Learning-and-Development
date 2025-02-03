#include <iostream>

class Node {
public:
    int data;
    Node* next;
    
    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
    int size;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
        size = 0;
    }
    
    // Insert at beginning - O(1)
    void insertAtFront(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    // Insert at end - O(n)
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        
        if (head == nullptr) {
            head = newNode;
            size++;
            return;
        }
        
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        size++;
    }
    
    // Insert at position - O(n)
    void insertAtPosition(int value, int position) {
        if (position < 0 || position > size) {
            std::cout << "Invalid position\n";
            return;
        }
        
        if (position == 0) {
            insertAtFront(value);
            return;
        }
        
        Node* newNode = new Node(value);
        Node* temp = head;
        
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    
    // Delete from front - O(1)
    void deleteFromFront() {
        if (head == nullptr) {
            std::cout << "List is empty\n";
            return;
        }
        
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    
    // Delete from end - O(n)
    void deleteFromEnd() {
        if (head == nullptr) {
            std::cout << "List is empty\n";
            return;
        }
        
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            size--;
            return;
        }
        
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = nullptr;
        size--;
    }
    
    // Delete from position - O(n)
    void deleteFromPosition(int position) {
        if (head == nullptr) {
            std::cout << "List is empty\n";
            return;
        }
        
        if (position < 0 || position >= size) {
            std::cout << "Invalid position\n";
            return;
        }
        
        if (position == 0) {
            deleteFromFront();
            return;
        }
        
        Node* temp = head;
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }
        
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        size--;
    }
    
    // Search - O(n)
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    
    // Display
    void display() {
        if (head == nullptr) {
            std::cout << "List is empty\n";
            return;
        }
        
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL\n";
    }
    
    // Get size
    int getSize() {
        return size;
    }
    
    // Destructor
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    LinkedList list;
    
    // Insert some elements
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    
    // Display the list
    list.display();  // Output: 1 -> 2 -> 3 -> NULL
    
    // Insert at front
    list.insertAtFront(0);
    list.display();  // Output: 0 -> 1 -> 2 -> 3 -> NULL
    
    // Delete from end
    list.deleteFromEnd();
    list.display();  // Output: 0 -> 1 -> 2 -> NULL
    
    // Search for a value
    if (list.search(1)) {
        std::cout << "Found 1 in the list\n";
    }
    
    return 0;
}