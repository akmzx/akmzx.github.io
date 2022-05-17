#include<iostream>
using namespace std;
int main() {
    int len = 3;
    int numbers[len] = {7, 9, 13};

    cout<<"\n___ From First element ____\n";
    for (int i = 0; i < len; i++) 
        cout<<numbers[i]<<"\t";

    cout<<"\n___ From Last Element ___\n";
    for (int i = (len - 1); i >= 0; i--)
        cout<<numbers[i]<<"\t";
    return 0;
}