// Use + And << Operator In String
#include<bits/stdc++.h>
using namespace std;

class StringBuilder
{
    private:
     string value;
    public:
        StringBuilder(string v):value(v){};
        StringBuilder operator +(StringBuilder &obj)
        {
           return StringBuilder(value+" "+obj.value);
        }
          friend ostream& operator <<(ostream &os ,StringBuilder &obj)
        {
            os << obj.value;
            return os;
        }
       
        void display()
        {
            cout<<value<<"\n";
        }
};

int main()
{
    StringBuilder s1("Hello"),s2("World"),s4("!!");
    StringBuilder s3 = s1 + s2;
    cout<<"String Result "<<s3<<"\n";
    StringBuilder s5 =  s3 + s4;
    // s5.display();
    cout<<"String Result "<<s5;
   
}