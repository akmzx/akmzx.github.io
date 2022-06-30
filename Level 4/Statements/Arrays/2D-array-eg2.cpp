#include<iostream>
using namespace std;
int main() {
    // declare 
    int num[2][3];
    // assign 
    num[0][0] = 70;
    num[0][1] = 100;
    num[0][2] = 50;
    num[1][0] = 100;
    num[1][1] = 700;
    num[1][2] = 90;
    // display
    cout<<"\n___All Elements___\n";
    cout<<num[0][0]<<"\t";
    cout<<num[0][1]<<"\t";
    cout<<num[0][2]<<"\t";
    cout<<"\n";
    cout<<num[1][0]<<"\t";
    cout<<num[1][1]<<"\t";
    cout<<num[1][2]<<"\t";

    return 0;
}