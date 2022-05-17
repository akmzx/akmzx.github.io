#include<iostream>
using namespace std;
string cities[3];
// data initialize
void initializeData() {
    for (int i = 0; i < 3; i++) {
        cout<<"Enter city: ";
        getline(cin,cities[i]);
    }
}

// output 
void showData() {
    cout<<"____ City List ____\n";
    for (int i = 0; i < 3; i++) 
        cout<<cities[i]<<"\n";
}

int main() {
    initializeData();
    showData();
    return 0;
}