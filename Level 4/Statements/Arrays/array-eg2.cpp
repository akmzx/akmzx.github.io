#include<iostream>
using namespace std;
int main() {
    int marks[5];

    // user input
    cout<<"Enter mark 1: ";
    cin>>marks[0];
    cout<<"Enter mark 2: ";
    cin>>marks[1];
    cout<<"Enter mark 3: ";
    cin>>marks[2];
    cout<<"Enter mark 4: ";
    cin>>marks[3];
    cout<<"Enter mark 5: ";
    cin>>marks[4];

    // display
    cout<<"\n___ All Mark ___\n";
    cout<<marks[0]<<"\n";
    cout<<marks[1]<<"\n";
    cout<<marks[2]<<"\n";
    cout<<marks[3]<<"\n";
    cout<<marks[4]<<"\n";

    return 0;
}