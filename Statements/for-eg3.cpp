#include<iostream>
using namespace std;
int main() {
    
    int total = 0;
    int count = 0;

    for (int i = 1; i <= 10; i++) {
        total = total + i;
        count++;
    }

    cout<<"Total = "<<total;
    cout<<"\nNo of numbers: "<<count;

    return 0;
}