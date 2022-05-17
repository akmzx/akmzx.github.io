#include<iostream>
using namespace std;
int main() {
    int num[2][3];

    // assign value 
    for (int i = 0; i < 2; i++) { // outer loop for row
        for (int j = 0; j < 3; j++) { // inner loop for column
            cout<<"Enter number: ";
            cin>>num[i][j];
        }
    }

    // display
    for (int i = 0; i < 2; i++) { // row loop
        for (int j = 0; j < 3; j++) { // column loop
            cout<<num[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}