// Write a C++ program to implement a recursive function to find the maximum and minimum elements in an array.


#include<iostream>
#include<algorithm>
using namespace std;

int maximum(int arr[], int index, int size){
    
    if(index < size){
       return max(arr[index], maximum(arr, index+1,size));
    }
    else{
        return 0;
    }
}

int main(){
    int arr[] = {9,6,3,5,6,2,7,0};
    int size =  sizeof(arr)/sizeof(int);
    int m;
    m=maximum(arr, 0, size);
    cout << m<< endl;
    return 0;
}
