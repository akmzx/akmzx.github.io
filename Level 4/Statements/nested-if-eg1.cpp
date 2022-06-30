#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%3 == 0 && num%5 == 0) {
        cout<<num<<" is divisible by both 3 and 5"; 
    }
    else {
        if (num%3 == 0 || num%5 == 0) { // divisible 
            if (num%3 == 0) {
                cout<<num<<" is divisible with only 3";
            }
            else { 
            cout<<num<<" is divisible with only 5";
            }
        }
        else { // not divisible
        cout<<num<<" is not divisible with both 3 and 5";
        }
    }
        
    return 0;
}