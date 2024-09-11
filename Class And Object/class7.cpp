// Define a class Library with private members: libraryName, location, and numberOfBooks. Provide methods to manage library attributes.

#include<bits/stdc++.h>
using namespace std;
class Library
{
    private:
        int  Bookid;
        string Title;
        int Countofbook;
    public:
        Library()
        {
           Bookid=-1;
           Title="null";
           Countofbook=0;
        }
        Library(string Title,int Bookid,int Countofbook)
        {
            (*this).Title=Title;
            this->Bookid=Bookid;
            this->Countofbook=Countofbook;
        }
        void printdetails()
        {
            cout<<"Book name: "<<Title<<"\n";
            cout<<"Bookid: "<<Bookid<<"\n";
            cout<<"Count of Boooks: "<<Countofbook<<"\n";
        }
        void getdetails()
        {
            cout<<"Enter the book name:\n";
            cin>>Title;
            cout<<"Enter the bookid:\n";
            cin>>Bookid;
        }
        void borrow()
        {
            if(Countofbook>0)
            {
                cout<<"You have borrowed the book "<<Title<<"\n";
                Countofbook--;
            }
        }
        void returnbook()
        {
            Countofbook++;
            cout<<"You have returned the book "<<Title<<"\n";
        }
};
int main()
{
    Library *obj = new Library("ratkirani",1,6);
    // obj->getdetails();
    obj->printdetails();
    (*obj).borrow();
    obj->borrow();
    obj->returnbook();
    obj->printdetails();
    delete obj;
}