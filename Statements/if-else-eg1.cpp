#include<iostream>
using namespace std;

int main() {
    // declare var
    int num;
    // input
    cout<<"Enter a non-zero number: ";
    cin>>num;
    //verify even or odd
    if(num%2 == 0) {
        cout<<num<<" is even number";
    }
    else {
        cout<<num<<" is odd number";
    }
    return 0;
}