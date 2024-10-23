#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    
    node* next;
    node(int data){
        this->data = data;
        next=nullptr;
    }
};

node* ReverseLinkedList(node* head){
    
    node* temp = head;
    
    node* pre = NULL;
    
    while(temp!=NULL){
        
        node* front = temp->next;
        
        temp->next = pre;
        
        pre = temp;
        
        temp = front;
    }
    
    return pre;
    
    
};

class linkedlist{
    private:
    node* head;
    
    public:
    linkedlist(){
        head = nullptr;
    }
    
    void PushFront(int value){
        node* newnode = new node(value);
        newnode->next = head;
        head = newnode;
    }
    
    void PopFront(){
        if(head == NULL){
            cout<<"empty"<<endl;
            return;
        }
        node* temp = head;
        head = head->next;
        delete temp;
    } 
    
    void PopBack(){
        if (head == NULL){
            cout<<"empty"<<endl;
            return;
        }
 
        if (head->next == NULL) {
            delete head;
            return;
        }
        
        node* temp = head;
        while(temp->next->next){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    
    void PushBack(int value){
        node* newnode = new node(value);
        
         if(!head){
            head=newnode;
            return;
        }
        
        node* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    
    void appendmiddle(int value, int aftervalue){
        node* newnode = new node(value);
        node* temp = head;
        
        while(temp){
            if(temp->data==aftervalue){
                newnode->next = temp->next;
                temp->next = newnode;
                return;
            }
            temp = temp->next;
        }
    }
    
    void appendatposition(int value, int position){
        node* newnode = new node(value);
        
        if(position==0){
            PushFront(value);
            return;
        }
        
        node* temp = head;
        for(int i = 0; temp && i< position-1; i++){
            temp=temp->next;
        }
        
        newnode->next = temp->next;
        temp->next = newnode;
    }
    
    void deleteatposition(int p){
        if(head == NULL || p < 1){
            cout<<"empty"<<endl;
            return;
        }
        if(p == 1){
            node* temp = head;
            head = head->next;
            delete temp;
        }
        
        node* temp = head;
        for(int i = 1; i<p-1 && temp != NULL; i++){
            temp=temp->next;
        }
        
        if(temp == NULL || temp->next == NULL){
            cout<<"not found"<<endl;
            return;
        }
        
        node* temp1 = temp->next;
        
        temp->next = temp->next->next;
        
        delete temp1;
        
    }
    
    int length(){
        int count=0;
        node* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    bool search(int value){
        node* temp = head;
        while (temp) {
            if (temp->data == value){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    
    int countduplicates() {
        unordered_map<int, int> freq;
        node* temp = head;
        while (temp) {
            freq[temp->data]++;
            temp = temp->next;
        }
        int count = 0;
        for (auto& pair : freq) {
            if (pair.second > 1){
                count++;
            }
        }
        return count;
    }
    
     void deletebyvalue(int value) {
        if (!head){
            cout<<"empty"<<endl;
            return;
        }

        if (head->data == value) {
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node* current = head;
        node* pre = NULL;

        while (current && current->data != value) {
            pre = current;
            current = current->next;
        }
        
        if (!current) {
            cout<<" not found."<<endl;
            return;
        }

        pre->next = current->next;
        delete current;
    }
    
    int countOccurrance(int value) {
        int count = 0;
        node* temp = head;
        
        while (temp) {
            if (temp->data == value) {
                count++;
            }
            temp = temp->next;
        }
        
        return count;
    }
    
    void removeduplicates() {
        unordered_set<int> seen;
        node* current = head;
        node* prev = nullptr;

        while (current) {
            if (seen.find(current->data) != seen.end()) {
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                seen.insert(current->data);
                prev = current;
                current = current->next;
            }
        }
    }
    
    void display() {
        node* temp = head;
        while (temp) {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }
};

int main(){
    
    linkedlist list;
    
    list.PushFront(1);
    list.PushBack(3);
    list.PushBack(7);
    list.PushFront(11);
    list.PushBack(6);
    
    list.appendmiddle(20,3);
    list.appendatposition(19,2);
    cout<<list.length();
    cout<<endl;
    list.PopBack();
    list.display();
    cout<<endl;
    list.deleteatposition(2);
    list.display();

    return 0;
    
}