#include<iostream>
using namespace std;
int main() {
    float prices[2][2] = {
        {1200.9, 450},
        {1300, 1600}
    };
    cout<<"\n___ price list ____\n";
    for (int r = 0; r < 2; r++) { // row 
        for (int c = 0; c < 2; c++) { // col
            cout<<prices[r][c]<<"\t";
        }
        cout<<"\n";
    }
    // find max price
    float max_price = prices[0][0];
    for (int r = 0; r < 2; r++) { // row 
        for (int c = 0; c < 2; c++) { // col
            if (max_price < prices[r][c])
                max_price = prices[r][c];
        }
    }
    cout<<"\nMaximum price: "<<max_price;
    return 0;
}