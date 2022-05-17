#include<iostream>
using namespace std;
int main() {
    int item_price,item_quantity,total_expense;

    cout<<"Enter item price: ";
    cin>>item_price;
    cout<<"Enter item quantity: ";
    cin>>item_quantity;
    
    total_expense = item_price * item_quantity;

    if (total_expense > 5000) {
        total_expense = total_expense - (total_expense*10/100);
        cout<<"Total Expense: "<<total_expense;
    }
    else {
        cout<<"Total Expense: "<<total_expense;
    }
    return 0;
}