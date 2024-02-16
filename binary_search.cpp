//Binary Search using Recursion 


#include<iostream>
using namespace std; 

int search(int arr[], int low, int high, int target){
    int mid = (low + high)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(mid > target){
        search(arr,low, mid-1, target);
    }
    else if(mid < target){
        search(arr, mid+1, high, target);
    }
}

int main(){

    int num;
    cout << "Enter length of array: ";
    cin >> num;

    int arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    int target;
    cout <<"Enter number to find: ";
    cin >> target;

    int pos;
    pos = search(arr, 0, num-1, target);
    cout << pos;

    return 0; 
}
