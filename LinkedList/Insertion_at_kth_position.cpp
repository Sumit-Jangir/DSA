#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    // Constructor to initialize head as nullptr
    LinkedList(): head(nullptr) {}

    // Function to insert at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to insert a new node after k-th position
    void insertAfterK(int value, int k) {
        Node* newNode = new Node(value);
        Node* current = head;

        // If there are no nodes in the linked list
        if (head == NULL) {
            head = newNode;
            return;
        }

        // Iterate to the k-th node
        for (int i = 1; i < k && current != nullptr; i++) {
            current = current->next;
        }

        // If k is greater than the length of the list, return
        if (current == nullptr) {
            cout << "Position " << k << " exceeds list length.\n";
            return;
        }

        // Insert the new node after the k-th node
        newNode->next = current->next;
        current->next = newNode;
    }

    // Function to display the list
    void displayList() {
        Node* current = head;
        if (current == nullptr) {
            cout << "List is empty\n";
            return;
        }
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Inserting some values to start with
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);

    // Display initial list
    cout << "Initial List: ";
    list.displayList();

    // Insert after the 2nd position (after node with value 2)
    int value = 10, position = 2;
    cout << "Inserting " << value << " after position " << position << endl;
    list.insertAfterK(value, position);

    // Display the updated list
    cout << "Updated List: ";
    list.displayList();

    return 0;
}
