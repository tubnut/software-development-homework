#include <iostream>
using namespace std;

int main(){
    int years, c;
    double inches;

    cout << "How many years do you want to average?: ";
    cin >> years;

    for(c = 1; c < years; c++);{
        cout << "Year " << c << endl;
        for(int i = 0; i < 12; i++ ){
            cout << "Number of inches of rain for each month: ";
            cin >> inches;
        }
    }

    return 0;
}