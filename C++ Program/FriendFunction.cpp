#include<bits/stdc++.h>
using namespace std;

class Box
{
    private:
    int length;
    public:
        Box()
        {
            length=5;
        }
    friend int getlength(Box);
};

int getlength(Box b)
{
    return b.length;
}
int main()
{
    Box box1;
    cout<<"Length of box1: "<<getlength(box1)<<endl;
    return 0;
}