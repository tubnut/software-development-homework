#include <iostream>
using namespace std;

int main(){
    int input;
    
    cout << "Enter a number:" << endl;
    cin >> input;
    int largest = input;
    int smallest = input;

    while(input != -99){
        cin >> input;

        if (input > largest){
            largest = input;
        }
        if (input < smallest){
            smallest = input;
        }

    }
    
    cout << "The Largest is " << largest << endl;
    cout << "The Smallest is " << smallest << endl;

    return 0;
}