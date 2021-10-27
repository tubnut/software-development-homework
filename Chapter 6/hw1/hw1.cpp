#include <iostream>
#include <stdlib.h>
using namespace std;

string coinToss(){
    int result = rand() % 3 + 0;
    
    if(result == 1){
        cout << "Heads";
    }
    if(result == 2){
        cout << "Tails";
    }
}

int main(){
    coinToss();
}