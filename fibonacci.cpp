//Write a C++ program to implement a recursive function to get the nth Fibonacci number.

#include<iostream>
using namespace std;
int fibo(int n){
    if(n>1){
        return fibo(n-2) + fibo(n-1);
    }
    else if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
}


int main(){
    int n;
    cout<< "Enter number: ";
    cin>> n;

    int n_term;
    n_term = fibo(n);
    cout << n << "th term of fibonacci series: "<< n_term;
}
