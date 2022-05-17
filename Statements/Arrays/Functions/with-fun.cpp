#include<iostream>
using namespace std;

void checkEvenOrOdd(int num) {
    if (num%2)
        cout<<num<<" is odd number";
    else    
        cout<<num<<" is even number";
    
    cout<<"\n";
}

int main() {
    int num1 = 153, num2 = 844, num3 = 751;

    // num1 
    checkEvenOrOdd(num1);
    // num2
    checkEvenOrOdd(num2);
    // num3
    checkEvenOrOdd(num3);

    return 0;
}