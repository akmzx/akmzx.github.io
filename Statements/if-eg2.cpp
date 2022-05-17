#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter non-zero number: ";
    cin>>num; // num = 4

    // verify odd number
    // if(num%2 == 1) { // 7%2 == 1 (1 == 1)
    if (num%2) { // 7%2 = 1
        cout<<num<<" is odd number!";
    }
    return 0;
}