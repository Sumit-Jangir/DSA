#include<bits/stdc++.h>
using namespace std;

class Rectangle;//forward declaration

class Calculator
{
    public:
    int calculatorArea(Rectangle &rect);
};
class Rectangle
{
    private:
      int length;
      int breadth;
    public:
        Rectangle(int l,int r)
        {
            length=l;
            breadth=r;
        }
        friend int Calculator::calculatorArea(Rectangle &rect);
};
int Calculator :: calculatorArea(Rectangle &rect)
{
    return rect.length*rect.breadth;
}

int main()
{
    Rectangle rect(10,25);
    Calculator calc;
    cout<<"area of rectangle: "<<calc.calculatorArea(rect);
    return 0;
}