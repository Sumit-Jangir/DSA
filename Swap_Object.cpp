#include <bits/stdc++.h>
using namespace std;

class Example{
    private:
    public:
    int x;
    float y;
    string s;

    Example(int val, float weight,string name):x(val),y(weight),s(name){}

    Example(const Example &obj1){
        x=obj1.x;
        y=obj1.y;
        s=obj1.s;
    }

    void copyConstructor(const Example &obj1){
        x=obj1.x;
        y=obj1.y;
        s=obj1.s;
    }

};

int main(){
    
    Example obj1(10,10.2,"Sumit");
    Example obj2(30,20.2,"Amit");
    cout<<"Before: "<<obj1.x<<" "<<obj1.y<<" "<<obj1.s<<endl;
    cout<<"Before: "<<obj2.x<<" "<<obj2.y<<" "<<obj2.s<<endl;

    // swap

    Example temp(obj1);
    obj1.copyConstructor(obj2);
    obj2.copyConstructor(temp);
    cout<<"After: "<<obj1.x<<" "<<obj1.y<<" "<<obj1.s<<endl;
    cout<<"After: "<<obj2.x<<" "<<obj2.y<<" "<<obj2.s<<endl;

    return 0;
}

