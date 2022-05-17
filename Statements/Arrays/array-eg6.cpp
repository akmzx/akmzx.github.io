#include<iostream>
using namespace std;
int main() {
    int len = 3;
    int numbers[len] = {13, 21, 19};

    cout<<"\n___ All Elements ___\n";
    for (int i = 0; i < len; i++) {
        cout<<numbers[i]<<"\t";
    }

    // assume
    int max_num = numbers[0];
    for (int i = 1; i < len; i++) {
        if (max_num < numbers[i]) {
            max_num = numbers[i];
        }
    }

    int min_num = numbers[0];
    for (int i = 1; i < len; i++) {
        if (min_num > numbers[i]) {
            min_num = numbers[i];
        }
    }

    cout<<"\nMaximum number: "<<max_num;
    cout<<"\nMinimum number: "<<min_num;
}