#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    int x;
    int sum = 0;
    ifstream file ("Random.txt");
        while (file >> x){
            sum = sum + x;
        }
  cout << "The sum is " << sum << endl;
  cout << "The average is " << sum / 200;
  
  return 0;
}
