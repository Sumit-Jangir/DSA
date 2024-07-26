#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(int real, int imag){
        this->real=real;
        this->imag=imag;
    }

    void sum(Complex &c1,Complex &c2){
        cout<<c1.real+c2.real<<" + "<<c1.imag+c2.imag<<"i\n";
    }
    void diff(Complex &c1,Complex &c2){
        cout<<c1.real-c2.real<<" + "<<c1.imag-c2.imag<<"i\n";
    }
    void product(Complex &c1,Complex &c2){
        cout<<c1.real*c2.real<<" + "<<c1.imag*c2.imag<<"i\n";
    }
};
int main(){
    Complex c1(5,9),c2(4,5);
    c1.sum(c1,c2);
    c1.diff(c1,c2);
    c1.product(c1,c2);

    return 0;
}