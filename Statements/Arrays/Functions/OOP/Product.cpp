#include<iostream>
using namespace std;
class Product {
    // data
    public: int bar_code;
    private: 
        string name;
        float price = 0.0;
    // functions
    public: void showData() {
        cout<<"BarCode: "<<bar_code;
        cout<<"\nName: "<<name;
        cout<<"\nPrice: "<<price;
    }
};

int main() {
    Product new_prod;
    new_prod.bar_code = 1001;
    // new_prod.name = "Coffee"; // error (private)
    new_prod.showData();
    return 0;
}