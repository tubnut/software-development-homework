#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double inches, total, average;
    int years;
    
    cout << "How many years of rainfall do you want to average? ";
    cin >> years;
    while(years < 1){
        cout << "Error! please enter a number greater than 1" << endl;
        cout << "How many years of rainfall do you want to average? ";
        cin >> years;
    }

    for(int year_num = 1; year_num <= years; year_num++){
        cout << "Year "<< year_num << endl;
        
        for(int c = 1; c <= 12; c++){
            cout << "Number of inches for month " << setw(2) << c << ": ";
            cin >> inches;
            while(inches < 0){
                cout << "Error! Please enter a number that is not negative.";
                cout << "Number of inches for month " << setw(2) << c << ": ";
                cin >> inches;
            }
            total += inches;
        }
    }
    
    int months = years * 12;
    average = total / months;

    cout << "After " << months << " months, the total amount of rainfall was " << total << " and the average was " << average;
    return 0;
}