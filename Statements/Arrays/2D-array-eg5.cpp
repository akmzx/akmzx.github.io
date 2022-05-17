#include<iostream>
using namespace std;
int main() {
    int num[2][2];

    // input
    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // enter number for num[0][0]
            cout<<"Enter number for ["<<i<<"]["<<j<<"]: ";
            cin>>num[i][j];
        }
    }

    // display all elements
    cout<<"\n____ All Data ____\n";
    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout<<num[i][j]<<"\t";
        }
        cout<<"\n";
    }

    // calculate total in each col 
    int total = 0;
    for (int c = 0; c < 2; c++) {
        for (int r = 0; r < 2; r++) {
            total = total + num[r][c];
        }
        cout<<"\nTotal value of "<<c<<" col: "<<total;
        total = 0;
    }
    return 0;
}