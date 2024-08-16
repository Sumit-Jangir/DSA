#include <iostream>
using namespace std;

#define MAX 3

int Queue[MAX];
int front = 0; 
int rear = -1; 
int count = 0; 


void push(int value) {
    if (count == MAX) {
        cout << "Queue overflow condition meets\n";
    } else {
        rear = (rear + 1) % MAX; 
        Queue[rear] = value;
        count++; 
        cout << value << " is pushed into the Queue\n";
    }
}


int pop() {
    if (count == 0) {
        cout << "Queue underflow\n";
        return -1;
    } else {
        int popele = Queue[front];
        front = (front + 1) % MAX; 
        count--;
        return popele;
    }
}


int peek() {
    if (count == 0) {
        cout << "Queue is empty\n";
        return -1;
    } else {
        return Queue[front];
    }
}


bool isEmpty() {
    return (count == 0);
}


void printQueue() {
    if (count == 0) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Elements in the queue: ";
    for (int i = 0; i < count; ++i) {
        int index = (front + i) % MAX; 
        cout << Queue[index] << " ";
    }
    cout << endl;
}

int main() {
    push(100);
    push(200);
    push(300);
    
    cout << pop() << " popped from the Queue" << endl;
    push(700); 
    printQueue();
    cout << "Is the queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}
