#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num >= 0 && num <= 9) { //  10 >= 0 && 10 <= 9 -> false
        cout<<"You enter one digit";
    }
    return 0;
}