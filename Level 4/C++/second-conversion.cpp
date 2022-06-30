#include<iostream>
using namespace std;
int main() {
    int totalSec;
    cout<<"Enter total second: ";
    cin>>totalSec;
    cout<<"Hour"<<(totalSec/3600); // totalSec = 3699

    // hr = 3669/3600
    int hr = totalSec/3600; // convert hour
    // remain_sec = 3669%3600 = 69
    int remain_sec = totalSec%3600; // get remaining sec
    // min = 69/60 = 1
    int min = remain_sec/60; // convert remaining sec to min
    // remain_sec = 69%60 = 9
    remain_sec = remain_sec%60;

    cout<<"\nHour: "<< hr;
    cout<<"\nMinute: "<< min;
    cout<<"\nSecond: "<< remain_sec;
    
    return 0; 
}