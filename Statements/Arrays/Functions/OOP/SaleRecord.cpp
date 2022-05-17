#include<iostream>
using namespace std;
class SaleRecord {
    // data
    public: 
        string item_name;
        double unit_price;
        int sale_qty;
    // functions
    void addSaleRecord(string name, int qty, double price) {
        item_name = name;
        unit_price = price;
        sale_qty = qty;
    }
    double getSubTotal() {
        return (unit_price *  sale_qty);
    }
    void displayInfo() {
        cout<<"\n";
        cout<<item_name<<"\t";
        cout<<unit_price<<"ks.\t";
        cout<<sale_qty<<"\t";
        cout<<getSubTotal()<<"ks.\n";
    }
};

int main() {
    SaleRecord rec1 = SaleRecord();
    SaleRecord rec2 = SaleRecord();
    SaleRecord rec3 = SaleRecord();

    rec1.addSaleRecord("Coffee", 3, 3100);
    rec2.addSaleRecord("Juice", 2, 1000);
    rec3.addSaleRecord("Pizza", 1, 15000);

    cout<<"\n_______ All SaleRecord ______\n";
    cout<<"Name\t Price\t Qty\t SubTotal\n";
    cout<<"______________________________\n";
    rec1.displayInfo();
    rec2.displayInfo();
    rec3.displayInfo();

    return 0;
}