#include<iostream>
using namespace std;
class Product {
    private: 
        string name;
        float price;
        int bar_code;
    // constructors
    public: 
        Product() { // default or 0 args constructor

        }
        Product(int code, float price, string name) {
            this->name = name;
            this->bar_code = code;
            this->price = price;
        }
    // methods
        void showData() {
            cout<<"\n----- Product Info -----\n";
            cout<<"Barcode: "<<bar_code;
            cout<<"\nName: "<<name;
            cout<<"\nPrice: "<<price;
        }
};

int main() {
    // user input
    string _name;
    float _price;
    int _code;
    cout<<"Enter bar code: ";
    cin>>_code;
    cout<<"Enter name: ";
    cin>>_name;
    cout<<"Enter price: ";
    cin>>_price;
    // create object with parameterized constructor
    Product prod = Product (_code, _price, _name);
    // output
    prod.showData();
    return 0;
}