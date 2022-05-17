#include<iostream>
using namespace std;

int main() {
    int a = 3, b = 5;
    bool result; // true = 1, false = 0

    result = (a == b);
    cout<<a<<" == "<<b<<" : "<<result;
    cout<<"\n"<<a<<" != "<<b<<" : "<<(a != b);
    cout<<"\n"<<a<<" > "<<b<<" : "<<(a > b);
    cout<<"\n"<<a<<" >= "<<b<<" : "<<(a >= b);
    cout<<"\n"<<a<<" < "<<b<<" : "<<(a < b);
    cout<<"\n"<<a<<" <= "<<b<<" : "<<(a <= b);

    cout<<"\nabc is equal to def: "<< ("abc" == "def");
    return 0;
}
