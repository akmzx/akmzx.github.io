#include<iostream>
using namespace std;
int main() {
    int len = 5;
    int user_input[len];

    for (int i = 0; i < len; i++) {
        cout<<"Enter the number: ";
        cin>>user_input[i];
    }

    cout<<"\nThe numbers divisible by 3:\n";
    for (int i = 0; i < len; i++) {
        if (user_input[i] % 3 == 0) {
            cout<<user_input[i];
            cout<<"\n";
        }
    }

    return 0;
}