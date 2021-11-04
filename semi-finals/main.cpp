/*
Activity Name: SemiFinal Self-Assessment 1
Submitted by: James Leo C. Grimaldo
Date: 10/31/21

Instructions:
Create a program that will compute for the total interest and monthly 
payment of a lending customer based on his borrowed amount. 
A 6% monthly interest will be applied in lending business.

The program must be able to do the following:

1. Ask the user for the total amount to be borrowed.

2. Ask the user how many months he will pay the borrowed amount.

3. Apply 6% monthly interest. Use the formula:

monthly interest = total amount x 6%
total monthly interest = monthly interest x number of months to pay.

4. Compute for the total amount to be received by the customer.

total amount to received = total amount to be borrowed - total monthly interest.

5. Compute for the monthly payment;

monthly payment = total amount / number of months to pay

*/

#include<iostream>
#include "lending.h" // Include atmClass
#include <string>
#include <iomanip>
using namespace std;

int main(){

    lend lend;

    double amount; 
    int months;

    cout<< "Enter Amount to be borrowed: ";
    cin >> amount;
    cout<< "Number of months to pay: ";
    cin >> months;
    lend.setAmountMonths(amount, months);

    cout<< "Monthly Interest: " << lend.monthlyInterest()<<endl;
    cout<< "Total Interest for "<< months << " Month/s: " << lend.totalMonthlyInterest() <<endl;
    cout<< "Amount to Recieved: "<< lend.totalAmountToRecieve() <<endl;
    cout<< "Monthly Payment: " << lend.monthlyPayment(); 

};