#include<iostream>
using namespace std;
int main() {
    int mark1[] = {100, 50, 60};
    int mark2[] = {};
    int mark3[] = {100, 40, 90, 80};

    cout<<"Size of int data type: "<<sizeof(int)<<" bytes\n";
    cout<<"Size of mark1 variables: "<<sizeof(mark1)<<" bytes\n";

    cout<<"Length of mark1: "<<sizeof(mark1)/sizeof(int)<<" items\n";
    cout<<"Length of mark2: "<<sizeof(mark2)/sizeof(int)<<" items\n";
    cout<<"Length of mark3: "<<sizeof(mark3)/sizeof(int)<<" items\n";
    return 0;
}