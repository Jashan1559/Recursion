// Write a C++ program to implement a recursive function to calculate the sum of digits of a given number.


#include<iostream>
using namespace std;

int sum(int n){
    if(n>0){
        int r;
        r = n % 10;
        n = n/10;
        return r+sum(n);
    }
    else if(n==0){
        return 0;
    }
}

int main(){

    int n;
    cout <<"Enter any number: ";
    cin >>n;

    cout << "Sum of each digit of "<< n << ": "<<sum(n);
}
