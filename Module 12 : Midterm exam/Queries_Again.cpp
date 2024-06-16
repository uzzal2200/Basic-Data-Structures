#include <iostream>

using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
    
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    
    // Function to insert a value at a given index
    void insert(int index, int value) {
        Node* newNode = new Node(value);
        
        if (index == 0) {
            // Insert at the beginning
            newNode->next = head;
            if (head != nullptr) {
                head->prev = newNode;
            }
            head = newNode;
            
            if (tail == nullptr) {
                tail = newNode;
            }
        } else {
            // Insert at a specific index
            Node* current = head;
            int i = 0;
            
            while (i < index - 1 && current != nullptr) {
                current = current->next;
                i++;
            }
            
            if (current == nullptr) {
                // Invalid index
                cout << "Invalid" << endl;
                delete newNode;
                return;
            }
            
            newNode->next = current->next;
            newNode->prev = current;
            
            if (current->next != nullptr) {
                current->next->prev = newNode;
            }
            current->next = newNode;
            
            if (newNode->next == nullptr) {
                tail = newNode;
            }
        }
        
        // Print the linked list from left to right
        cout << "L -> ";
        printLeftToRight();
        
        // Print the linked list from right to left
        cout << "R -> ";
        printRightToLeft();
    }
    
private:
    // Helper function to print the linked list from left to right
    void printLeftToRight() {
        Node* current = head;
        
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        
        cout << endl;
    }
    
    // Helper function to print the linked list from right to left
    void printRightToLeft() {
        Node* current = tail;
        
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
        
        cout << endl;
    }
};

int main() {
    int Q;
    cin >> Q;
    
    DoublyLinkedList dll;
    
    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;
        
        dll.insert(X, V);
    }
    
    return 0;
}

