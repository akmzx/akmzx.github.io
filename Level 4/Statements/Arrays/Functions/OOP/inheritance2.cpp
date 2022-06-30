#include<iostream>
using namespace std;
class Base {
    private: int x = 9;
    protected: int y = 20;
    public: int z = 22;
};
class PublicDerived : public Base {
    // protected: int y = 20;
    // public: int z = 22;
    public : void display() {
        cout<<"\n----- Public Access Mode ------\n";
        cout<<"y = "<<y;
        cout<<"z = "<<z;
    }
};
class ProtectedDerived : protected Base {
    // protected: int y = 20;
    // protected: int z = 22;
    public : void display() {
        cout<<"\n----- Private Access Mode ------\n";
        cout<<"y = "<<y;
        cout<<"z = "<<z;
    }
};
class PrivateDerived : private Base {
    // private: int y = 20;
    // private: int z = 22;
};
int main() {
    PublicDerived obj1 = PublicDerived();
    cout<<"\n---- public access mode outside the class ----\n";
    // cout<<"y = "<<obj1.y; // y is protected
    cout<<"z = "<<obj1.z; // z is public
    obj1.display();

    ProtectedDerived obj2 = ProtectedDerived();
    // cout<<"\ny = "<<obj2.y; // y is protected
    // cout<<"\nz = "<<obj2.z; // z is protected
    obj2.display();

    PrivateDerived obj3 = PrivateDerived();
    // cout<<"y = "<<obj3.y; // y is private
    // cout<<"z = "<<obj3.z; // z is private
    return 0;
}