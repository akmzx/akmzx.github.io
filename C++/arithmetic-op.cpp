#include<iostream>
using namespace std;
int main() {
    int a , b;
    a = 4;
    b = 2;

    // int result = a + b; //4 + 2 = 6
    cout<<a<<" + "<<b<<" = "<< (a + b); // 4 + 2 = 6
    cout<<"\n"<<a<<" - "<<b<<" = "<< (a - b);
    cout<<"\n"<<a<<" * "<<b<<" = "<< (a * b);
    cout<<"\n"<<a<<" / "<<b<<" = "<< (a / b);
    cout<<"\n"<<a<<" % "<<b<<" = "<< (a % b);
    return 0;
}