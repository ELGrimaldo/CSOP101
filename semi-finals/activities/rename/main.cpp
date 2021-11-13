#include <iostream>
#include "interface.h"
#include <iomanip>
using namespace std;



int main(){
    Basevalue base;
    RaiseToTwo square;
    RaiseToThree cube;

    int baseValue;

    cout<< "Enter number: ";
    cin >> baseValue;


    square.getBase(baseValue);
    cube.getBase(baseValue);

    cout<< baseValue <<" ^ 2 = "<< square.getSquared()<<endl;
    cout<< baseValue <<" ^ 3 = "<< cube.getCubed()<<endl;
    

}