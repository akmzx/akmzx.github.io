#include<iostream>
using namespace std;
int main() {
    int s_num,e_num,j = 0;

    cout<<"Enter start value: ";
    cin>>s_num;
    cout<<"Enter end value: ";
    cin>>e_num;

    cout<<"The numbers divisible by 8 & 5:"<<"\n";
    for (int i = s_num; i <= e_num; i++) {
        if (i%8 == 0 && i%5 == 0) {
            cout<<i<<"\n";
        }
    }

    cout<<"The numbers divisible by only 8:"<<"\n";
    for (int i = s_num; i <= e_num; i++) {
        if (i%8 == 0) {
            cout<<i<<"\n";
        }
    }

    cout<<"The numbers divisible by only 5:"<<"\n";
    for (int i = s_num; i <= e_num; i++) {
        if (i%5 == 0) {
            cout<<i<<"\n";
        }
    }

    cout<<"The numbers not divisible by 8 & 5:"<<"\n";
    for (int i = s_num; i <= e_num; i++) {
        if (i%8 != 0 && i%5 != 0) {
            cout<<i<<"\n";
        }
    }
    return 0;
}