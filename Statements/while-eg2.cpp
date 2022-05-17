#include<iostream>
using namespace std;
int main() {
    int i = 1, j = 10;
    while (i < 5 && j > 1) {
        cout<<"i = "<<i<<"\t j = "<<j<<"\n";
        i++;
        j--;
    }
    return 0;
}