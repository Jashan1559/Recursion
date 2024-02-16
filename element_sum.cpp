// Write a C++ program to find the sum of all elements in an array using recursion.



#include<iostream>
using namespace std;
int func_sum(int index, int arr[]){
    int size= sizeof(arr)/ sizeof(int);
    if(index < size){
        return arr[index] + func_sum(index+1, arr);
    }
    else{
        return 0;
    }

}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int sum = func_sum(0, arr);
    cout << sum << endl;
}
