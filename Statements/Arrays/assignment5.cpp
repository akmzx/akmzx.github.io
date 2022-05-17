#include<iostream>
using namespace std;
int main() {
    int len = 4;
    int bar_code[len];
    string item_name[len];
    float item_price[len];

    for (int i = 0; i < len; i++) {
        cout<<"Enter barCode: ";
        cin>>bar_code[i];
        cout<<"Enter name: ";
        cin>>item_name[i];
        cout<<"Enter price: ";
        cin>>item_price[i];
    }

    cout<<"\n____ All Items ____\n";
    cout<<"Code\t"<<"Item name\t"<<"Price\n";
    for (int i = 0; i < len; i++) {
        cout<<bar_code[i]<<"\t"<<
        item_name[i]<<"\t"<<
        item_price[i]<<"\n";
    }

    cout<<"\n____ Items (price > 300) ____\n";
    for (int i = 0; i < len; i++) {
        if (item_price[i] > 300) {
            cout<<item_name[i]<<"\t"<<item_price[i]<<"\n";
        }
    }

    int search_code;
    int check = 0;
    cout<<"\nEnter barCode: ";
    cin>>search_code;

    for (int i = 0; i < len; i++) {
        if (bar_code[i] == search_code) {
            cout<<"Code: "<<bar_code[i]<<"\n";
            cout<<"Name: "<<item_name[i]<<"\n";
            cout<<"Price: "<<item_price[i]<<"\n";
            check = 1;
        }
    }
    if (check != 1)
        cout<<"Code - "<<search_code<<" does not exist!";
    return 0;
}