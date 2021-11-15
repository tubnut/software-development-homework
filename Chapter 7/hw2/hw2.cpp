#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string x;
    string name;
    vector<string> boyNames;
    vector<string> girlNames;
    ifstream BoyNames("BoyNames.txt");
    ifstream GirlNames("GirlNames.txt");

    while (getline(BoyNames, x)) {
        boyNames.push_back(x);
    }
    while (getline(GirlNames, x)) {
        girlNames.push_back(x);
    }
    cout << "Enter a name: ";
    cin >> name;
    for (int i = 0; i < 200; i++){
        if (boyNames[i] == name){
            cout << "This name was among the most popular boy names";
        }
        else if (girlNames[i] == name){
            cout << "This name was among the most popular girl names";
        }
        else if (girlNames[i] == name && boyNames[i] == name){
            cout << "This name was among the most popular names for boys and girls";
        }
        else if (girlNames[i] != name && boyNames[i] != name){
            cout << "This name was not among the most popular names";
        }
    }
    return 0;
}