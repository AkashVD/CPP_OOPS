/*Operator overloading of + operator (binary operator)*/
#include<iostream>

using namespace std;

class Complex {
    int a,b;

public: void setData(int x,int y) { a = x; b = y; }

 void showData() { cout<<"a = "<<a<<" b = "<<b<<endl; }

 Complex operator+(Complex c){
     Complex temp;
     temp.a = a + c.a;
     temp.b = b + c.b;
     return temp;   
 }
};

int main() {
    Complex c1,c2,c3;
    c1.setData(10,20);
    c2.setData(20,30);
    c1.showData();
    c2.showData();
    c3 = c1 + c2; //c3 = c1.operator+(c2)
    c3.showData();
    return 0;
}

