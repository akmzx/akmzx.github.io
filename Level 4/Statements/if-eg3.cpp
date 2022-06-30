#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // input 
    cout<<"Enter number 1: ";
    cin>>num1; // num1 = 200;
    cout<<"Enter number 2: ";
    cin>>num2; // num2 = 500;
    cout<<"Enter number 3: ";
    cin>>num3; // num3 = 700;
    // find max value
    int max_num = num1; // max_num = 200

    if (max_num < num2) { // 200 < 500
        max_num = num2; // max_num = 500
    }
    if (max_num < num3) { // 500 < 700
        max_num =  num3; // max_num = 700
    }

    // display output
    cout<<"Maximum value is "<<max_num; // 700
    return 0;
}