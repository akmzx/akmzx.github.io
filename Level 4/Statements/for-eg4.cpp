#include<iostream>
using namespace std;
int main() {
    int s_num,e_num;

    cout<<"Enter start number: ";
    cin>>s_num;
    cout<<"Enter end number: ";
    cin>>e_num;

    cout<<"odd number between "<<s_num<<" and "<<e_num<<"\n";
    for (int i = s_num; i <= e_num; i++) {
        if (i%2 == 1) {
            cout<<i<<"\n";
        }
    }
    return 0;
}