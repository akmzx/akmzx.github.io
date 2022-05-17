#include<iostream>
using namespace std;
int main() {
    int num = 6;
    cout<<"if you entered zero, program will terminate----\n";
    for(int i = 0; (num != 0); i++)
    {
        cout<<"\nEnter a number: ";
        cin>>num;
        if (num < 0) {
            cout<<num<<" is negative number";
        }
        else if(num > 0) {
            cout<<num<<" is positive number";
        }
    }
    return 0;
}