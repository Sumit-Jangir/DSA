#include <bits/stdc++.h>
using namespace std;

class Integer{
    int value;
    public:
    Integer(int val=0):value(val){}
    Integer operator +(Integer &obj){
        Integer temp;
        temp.value=value+obj.value;
        return temp;
    }
    void Display(){
        cout<<value<<endl;
    }
};

int main(){
    
    Integer n1(11), n2(19);
    Integer n3 = n1+n2;
    n3.Display();
    return 0;
}