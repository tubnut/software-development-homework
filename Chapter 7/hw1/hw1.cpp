#include <iostream>
using namespace std;

void arrayDis(int[], int, int);

int main(){
    int arr[6] = {5, 8, 4, 3, 6, 10};
    arrayDis(arr, 6, 5);
}

void arrayDis(int nums[], int size, int n){
    for(int i = 0; i < size; i++){
        if(nums[i] > n){
            cout << nums[i] << " ";
        }
    }
}