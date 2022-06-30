#include<iostream>
using namespace std;

int main() {
    int origin_price;
    int discount;
    int price;

    cout<<"Enter Product Price: ";
    cin>>origin_price;
    cout<<"Discount Value: ";
    cin>>discount;
    
    price = origin_price - (origin_price/100 * discount) ;

    cout<<"After discout, price: "<<price;
    
    return 0;
}