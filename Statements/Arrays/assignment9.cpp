#include<iostream>
using namespace std;
const int LEN = 5;
int bar_code[LEN];
string item_name[LEN];
int item_price[LEN];
void initializeItemData() {
    for (int i = 0; i < LEN; i++) {
        cout<<"Enter Bar Code: ";
        cin>>bar_code[i];
        cout<<"Enter Item Name: ";
        cin>>item_name[i];
        cout<<"Enter Item Price: ";
        cin>>item_price[i];
    }
}
void displayItemData() {
    cout<<"\nBar Code\t Name\t Price\n";
    for (int i = 0; i < LEN; i++) 
        cout<<bar_code[i]<<"\t"<<item_name[i]<<"\t"<<item_price[i]<<"\n";
}
void searchItemByCode(int code) {
    bool check;
    for (int i = 0; i < LEN; i++) {
        if (code == bar_code[i]) {
            cout<<"Item bar code: "<<bar_code[i];
            cout<<"\nItem name: "<<item_name[i];
            cout<<"\nItem price: "<<item_price[i];
            check = true;
        }
    }
    if (check != true) 
        cout<<"The item does not exist";
}
int main() {
    int bar_code;
    initializeItemData();
    displayItemData();
    cout<<"\nEnter bar_code: ";
    cin>>bar_code;
    searchItemByCode(bar_code);
    return 0;
}