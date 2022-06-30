#include<iostream>
using namespace std;
class Base {
    private:
        int x;
        int y;
    public:
        Base() {
            cout<<"\nBase's default constructor";
        }
        Base(int a, int b) {
            x = a;
            y = b;
            cout<<"\nBase's argument constructor";
        }
};
class Derived: public Base {
    private:
        int z;
    public:
        Derived() {
            cout<<"\nDerived's default constructor";
        }
        Derived(int a, int b, int c) {
            cout<<"\nDerived's argument constructor";
            z = c;
        }
};
int main() {
    Derived obj1 = Derived(); //default constructor
    cout<<"\n-----------------\n";
    Derived obj2 = Derived(100, 200, 300); // argument constructor
    return 0;
}