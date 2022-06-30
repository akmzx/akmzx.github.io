#include<iostream>
using namespace std;
int main() {
    const int LENGTH = 10;// constant or read-only variable
    const int WIDTH = 5;
    const string NAME = "Rectangle";
    int area;
    area = LENGTH * WIDTH;
    cout<<"Value of area: "<<area;
    cout<<"\nValue of name: "<<NAME;
    // LENGTH = 20;
}
