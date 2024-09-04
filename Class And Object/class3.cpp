// Create a class Book with private members: title, author, and isbn. Implement methods to set and get book details.

#include <bits/stdc++.h>
using namespace std;

class Book{
    private:
    string title;
    string auther;
    string isbn;

    public:
    void setDetail(){
        cout<<"Enter Book title: ";
        cin>>title;
        cout<<"Enter Book Auther: ";
        cin>>auther;
        cout<<"Enter Book ISBN Number: ";
        cin>>isbn;

    }
    void getDetail(){
        cout<<"\nBook title: "<<title<<endl;
        cout<<"Book Auther: "<<auther<<endl;
        cout<<"Book ISBN Number: "<<isbn<<endl;
    }
};

int main(){

    Book firstBook;
    firstBook.setDetail();
    firstBook.getDetail();


    return 0;
}