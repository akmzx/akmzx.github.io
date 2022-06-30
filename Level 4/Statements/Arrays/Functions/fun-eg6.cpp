#include<iostream>
using namespace std;
int findMax(int, int);

int main() {
    int n1, n2;
    cout<<"Enter number1: ";
    cin>>n1;
    cout<<"Enter number2: ";
    cin>>n2;

    cout<<"Maxinum number is "<<findMax(n1,n2);

    return 0;
}

int findMax(int a, int b) {
    return (a < b) ? b : a;
}