#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    
    Node(int val): value(val), next(nullptr) {}
};

class LinkedList {
    public:
    Node* head;
    
    void insertFront(int value) {
        cout << "Inserting " << value << '\n';
        
        Node* newNode = new Node(value);
        
        newNode -> next = head;
        
        head = newNode;
    }
    
    int getHeadValue() {
        if (head == NULL) {
            return -1;
        } else {
            return head -> value;
        }
    }
};

int main() {
    LinkedList* list = new LinkedList();
    list -> insertFront(3);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
    list -> insertFront(2);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
}