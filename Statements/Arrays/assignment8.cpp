#include<iostream>
using namespace std;
void countZeroOccurences() {
    int len, count = 0;
    cout<<"Please enter how many numbers you want to type: ";
    cin>>len;
    int numbers[len];
    for (int i = 0; i < len; i++) {
        cout<<"Enter number: ";
        cin>>numbers[i];
        if (numbers[i] == 0) 
            count++;
    }
    cout<<"Number of zero inputs: "<<count;
}
int main() {
    countZeroOccurences();
    return 0;
}