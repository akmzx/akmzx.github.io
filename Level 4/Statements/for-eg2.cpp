#include<iostream>
using namespace std;
int main() {

    for (int i = 1, j = 10; (i < 5 && j >= 1); ++i, j--) {
        cout<<"i = "<<i<<"\t j = "<<j;
        cout<<"\n";
    }
    return 0;
}