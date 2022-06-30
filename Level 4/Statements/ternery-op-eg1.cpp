#include<iostream>
using namespace std;
int main() {
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    string result = (num%2 == 0) ? "even" : "odd";
    cout<<num<<" is "<<result;
    return 0;
}