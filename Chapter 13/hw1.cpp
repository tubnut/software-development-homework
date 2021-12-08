#include <iostream>
using namespace std;

class Population{
    public:
        Population(){
            int birthRate(double births, double population){
                if(population > 1){
                    return births/population;
                }
                else{
                    cout << "You can't input a number less than 1 for population please enter again";
                }
            }
            int deathRate(double deaths, double population){
                if(population > 1 && deaths >= 0){
                    return deaths/population;
                }
                else{
                    cout << "You can't input a number less than 1 for population or a number less than 0 for deaths please enter again";
                }
            }
        }
};

int main(){
    cout << "The birth rate is " << Population.birthRate(8000, 100000) << endl;
    cout << "The death rate is " << Population.deathRate(6000, 100000) << endl;
}
