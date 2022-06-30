#include<iostream>
using namespace std;
string brands[5];
int index = 0;
// init
void addBrand(string name) {
    brands[index] = name;
    index++;
}
// display
void showData() {
    cout<<"\n_____ All Brand _____\n";
    for (int i = 0; i < 5; i++)
        cout<<brands[i]<<"\n";
}

int main() {
    addBrand("Samsung");
    addBrand("iPhone");
    addBrand("Vivo");
    addBrand("Mi");
    addBrand("Oppo");

    showData();
    return 0;
}