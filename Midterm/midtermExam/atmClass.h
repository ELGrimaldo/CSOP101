#include <string>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;
class atmFunctions{
    public:
        double initialBalance = 5000.00;    // Initial Balance
        double balance = initialBalance; //Current Balance
        double minimumBalance = 2000;    //Required Minimum Balance
    
    void checkBalance(){ //Check Balance Function
        cout << fixed << setprecision(2) << balance <<endl;
    }

    void withdraw(double amount){ //Withdrawal Function
        
        double minimumAmount = 200.00;
        double fixedAmount = 100.00;
        
        if (amount > balance){ // check if amount is greater than current balance.
            string errorMessage = "Amount to withdraw is greater than your current balance!";
            cout<< errorMessage << endl << "Your current Balance is: ";
            cout << fixed << setprecision(2) << balance <<endl;
        }
        else if (amount < minimumAmount){ // check if amount is less than minimum required amount.
            string errorMessage = "You cannot withdraw less than P200.00";
            cout<< errorMessage << endl << "Your current Balance is: ";
            cout << fixed << setprecision(2) << balance <<endl;
        } 
        else if(fmod(amount, fixedAmount)!=0){ // check if amount has an exceeding value of less than 100.
            string errorMessage = "Cannot withdraw amount with less than P100.00";
            cout<< errorMessage << endl << "Your current Balance is: ";
            cout << fixed << setprecision(2) << balance <<endl;
        }
        else{
            balance = balance - amount; // Subtract the amount withdrawn from balance.
            cout<< "Your current Balance is: ";
            cout << fixed << setprecision(2) << balance;
            cout<< ", Please maintain a minimum of P2000.00 within this month. Thank you!"<< endl;
        } 

    }

    void deposit(double amount){ //Deposit Function
        double minDepositAmount = 100.00; //Minimum Deposit Amount

        if(amount < minDepositAmount){ //Notify and Check if amount is less than minimum Amount
            string errorMessage = "You cannot deposit P100.00 and below.";
            cout<< errorMessage <<endl;
        }
        else{
            balance = balance + amount;   
            cout<< "Balance: ";
            
            cout << fixed << setprecision(2) << balance <<endl;
            
        }

    }
};