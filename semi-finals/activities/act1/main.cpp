#include <iostream>
#include "interface.h"
#include <iomanip>
using namespace std;

int main(){

    Installment installment;
    ThreeMonths threeMonths;
    FourMonths  fourMonths;
    FiveMonths  fiveMonths;

    cout<< setprecision(2);
    cout<< fixed;

    //user input for number of units and amount per unit;
    double numUnits, amtPerUnit;
    cout<< "Enter number of units: ";
    cin >> numUnits;
    cout<< "Enter amount per unit: ";
    cin >> amtPerUnit;
    installment.setNumAndAmtperUnit(numUnits, amtPerUnit);

    //Display tuition fee, misc. fee, lab fee, and total fee.
    cout<< "Tuition Fee: "<< installment.computeTuitionFee()<<endl;
    cout<< "MISCELLANEOUS FEE: "<< installment.miscFee<<endl;
    cout<< "LABORATORY FEE: "<< installment.labFee<<endl;
    cout<< "TOTAL FEE: " << installment.computeTotalFee()<<endl;

    //Display Installment options.
    cout<< "\nINSTALLMENT OPTIONS"<<endl;
    threeMonths.setNumAndAmtperUnit(numUnits, amtPerUnit);
    fourMonths.setNumAndAmtperUnit(numUnits, amtPerUnit);
    fiveMonths.setNumAndAmtperUnit(numUnits, amtPerUnit);
    cout<< "3 MONTHS: " << threeMonths.displayInstallment()<<endl;
    cout<< "4 MONTHS: " << fourMonths.displayInstallment()<<endl;
    cout<< "5 MONTHS: " << fiveMonths.displayInstallment()<<endl;

};