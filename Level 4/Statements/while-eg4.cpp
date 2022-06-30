#include<iostream>
using namespace std;
int main() {
    int s_num,e_num;
    cout<<"Enter start number: ";
    cin>>s_num;
    cout<<"Enter end number: ";
    cin>>e_num;

    while (s_num <= e_num) {
        if (s_num%2 != 0) {
            cout<<s_num<<" is odd number\n";
        }
        s_num++;
    }
    return 0;
}