#include <iostream>
using namespace std;

int main(){
    int input = 0;
    int largest, smallest;

    cout << "Enter a number: ";
    
    while(input != -99){
        cout << "Enter a number: ";
        cin >> input;

        if (input < smallest){
            smallest = input;
        }

        if (input > largest){
            largest = input;
        }
    }
    
    cout << "The Largest is: " << largest << endl;
    cout << "The Smallest is " << smallest << endl;

    return 0;
}