#include<iostream>
using namespace std;

int main() {
    int mark;
    cout<<"Enter mark: ";
    cin>>mark;

    //verify fail or pass
    if (mark < 50) {
        cout<<"Fail Exam!";
    }
    else {
        cout<<"Pass Exam";
    }

    return 0;
}