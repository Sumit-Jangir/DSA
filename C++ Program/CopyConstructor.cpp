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

};

int main(){
    
    Example obj1(10,10.2,"sumit");
    cout<<obj1.x<<" "<<obj1.y<<" "<<obj1.s<<endl;
    Example obj2(obj1);
    cout<<obj2.x<<" "<<obj2.y<<" "<<obj2.s;
    return 0;
}