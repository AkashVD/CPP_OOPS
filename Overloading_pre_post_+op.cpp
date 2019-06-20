/* Operator overloading of pre and post increament */
#include<iostream>

using namespace std;

class Integer {
    int a;

public: void setData(int x) { a = x;}
        void showData() {cout<<"a = "<<a<<endl;}

        Integer operator++() //pre increment
        {
            Integer temp;
            temp.a = ++a;
            return temp;
        }

        Integer operator++(int) //post increment
        {
            Integer temp;
            temp.a = a++;
            return temp;
        }
};

int main() {
    Integer i1,i2,i3;
    i1.setData(10);
    i2 = ++i1; //i2.a = 11,i1.a = 11
    i1.showData(); //11
    i2.showData(); //11
    i3 = i2++; //i3.a = 11,i2.a = 12
    i2.showData(); //12
    i3.showData(); //11
    return 0;

}
