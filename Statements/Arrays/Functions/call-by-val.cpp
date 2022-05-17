#include<iostream>
using namespace std;

void changeValue(int val) {
    val = val + 20;
    cout<<"\nValue inside function: "<<val;
}

void changeAnother(int *val) {
    *val = *val + 20;
    cout<<"\nValue inside function: "<<(*val);
}
int main() {
    int num = 10;
    cout<<"Before calling func, num = "<<num;
    changeValue(num);
    cout<<"\nAfter calling func, num = "<<num;

    int num1 = 10;
    cout<<"\n\nBefore calling func, num1 = "<<num1;
    changeAnother(&num1);
    cout<<"\nAfter calling func, num1 = "<<num1;
    return 0;
}