#include<iostream>
using namespace std;
int calculateDiscountItem(int price, int discount) {
    return price - (price * discount/100);
}
int main() {
    int item_price, discount_percent;
    cout<<"Item price: ";
    cin>>item_price;
    cout<<"Discount percentage: ";
    cin>>discount_percent;
    cout<<"After discount, price: "<<calculateDiscountItem(item_price, discount_percent);
    return 0;
}