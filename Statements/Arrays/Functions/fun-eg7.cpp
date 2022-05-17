#include<iostream>
using namespace std;
void display (char ch = '*', int no = 3) {
    for (int i = 0; i < no; i++) 
        cout<<ch<<" ";

    cout<<"\n";
}

int main() {
    cout<<"No args passed\n";
    display();
    cout<<"1 arg passed\n";
    display('#');
    return 0;
}