#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
void coinToss() {
    srand(static_cast<int>(time(0)));
    int result = rand() % 2 + 1;
    int input;
    int count = 0;

    cout << "How many times do you want to flip the coin?: ";
    cin >> input;
    while(count < input){
        if(result == 1){
            cout << "Heads" << endl;
        }
        if(result == 2){
            cout << "Tails" << endl;
        }
        result = rand() % 2 + 1;
        count++;
    }
}

int main() {
    coinToss();
}