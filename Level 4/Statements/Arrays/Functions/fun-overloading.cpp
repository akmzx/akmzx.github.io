#include<iostream>
using namespace std;
bool equals(int arg1, int arg2) {
    return (arg1 == arg2) ? true : false;
}
bool equals(string arg1, string arg2) {
    return (arg1 == arg2) ? true : false;
}
bool equals(char arg1, char arg2) {
    return (arg1 == arg2) ? true : false;
}

int main() {
    cout<<"100 == 200: "<<equals(100, 200);
    cout<<"\nadmin == staff: "<<equals("admin", "staff");
    cout<<"\na == b: "<<equals('a', 'b');
    return 0;
}