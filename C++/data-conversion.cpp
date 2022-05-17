#include<iostream>
using namespace std;
int main() {
    int num1 = 25;
    float num2;

    num2 = num1; // int -> float (internal conversion)

    cout<<"Num2 = "<<num2;

    num1 = 4.5; // float -> int (external conversion)
    cout<<"\nNum1 = "<<num1;

    return 0;
}