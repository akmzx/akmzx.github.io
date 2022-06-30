#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    // verify devisible by 3 or 5
    if (num%3 == 0 || num%5 == 0) {
        cout<<num<<" is divisible with 3 or 5";
    }
    else {
        cout<<num<<" is not divisible with both 5 and 3";
    }
    return 0;
}