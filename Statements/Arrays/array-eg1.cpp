#include<iostream>
using namespace std;
int main() {
    int marks[5] = {100, 90, 50, 80, 77};

    // access
    int a = marks[0];
    cout<<a<<"\n";
    cout<<marks[1]<<"\n";
    cout<<marks[2]<<"\n";
    cout<<marks[3]<<"\n";
    cout<<marks[4]<<"\n";

    marks[4] = 100;
    cout<<"\nAfter update, marks[4] = "<<marks[4];

    marks[1] = marks[2] - 20;

    cout<<"\nAfter update, marks[1] = "<<marks[1];

    int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];

    cout<<"\nTotal: "<<sum;
    cout<<"\nAverage: "<<sum/5;

    return 0;
}