#include<iostream>
using namespace std;
int main() {

    int a, b;
    
    a = 2;
    b = 7;

    cout<<"a = "<<a;

    a += 9; // a = a + 9 = 11

    cout<<"\nAfter a += 9, a = "<<a;

    b -= a; // b = b - a = 7 - 11 = -4

    cout<<"\nAfter b -= a, b = "<<b;

    return 0;
}