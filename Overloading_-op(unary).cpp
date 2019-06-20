/* Operator overloading - operator (unary operator) */
#include<iostream>

using namespace std;

class Complex {
    int a,b;

public: void setData(int x,int y) { a = x; b = y;}
        void showData() {cout<<" a = "<<a<<" b = "<<b<<endl;}

        Complex operator-() {
            Complex temp;
            temp.a = -a;
            temp.b = -b;
            return temp;
        }

};

int main() {
    Complex c1,c2,c3,c4;
    c1.setData(10,20);
    c2.setData(30,40);
    c3 = -c1;
    c4 = -c2;
    c3.showData();
    c4.showData();

    return 0;
}