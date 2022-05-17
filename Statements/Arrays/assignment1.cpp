#include<iostream> 
using namespace std;
int main() {
    int length = 0,zeros = 0,positives = 0,negatives = 0;
    
    cout<<"How many numbers you want to type : ";
    cin>>length;
    int numbers[length];
    
    for (int i = 0; i < length; i++) {
        cout<<"Enter any number: ";
        cin>>numbers[i];
        (numbers[i] == 0) ? zeros++ : 
        ((numbers[i] > 0) ? positives++ : negatives++);
    }

    cout<<"Numbers of zero : "<<zeros<<"\n";
    cout<<"Numbers of positive number : "<<positives<<"\n";
    cout<<"Numbers of negative number : "<<negatives<<"\n";
    
    return 0;
}