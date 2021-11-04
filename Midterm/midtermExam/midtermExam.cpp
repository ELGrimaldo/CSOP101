/*
Activity Name: Midterm Examination - OOP Bank
Submitted by: James Leo C. Grimaldo
Date: 10/15/21

Instructions: Create an OOP program that simulate a bank transaction 
              such as Deposit, Withdraw, and Inquire Balance.
Requirements:
    // Create a class that will perform the following function:
        > Check Balance
        > Withdraw
        > Deposit
    // Initial Balance = 5000
    // Create a menu that will allow the user to choose bank transactions.
    // When user chose Check Balance, display the balance.
    // When the user chose Deposit, enter the amount to deposit. The smallest 
       amount to deposit is P100.00. If the client tried to deposit smaller 
       than P100.00, notify the client. 
    // When the user withdraws, take note of the following:
        > The client is not allowed to withdraw the amount greater than his balance. 
          Display the current balance.
        > The client is not allowed to withdraw less than P200.00. Display the current balance.
        > The client is not allowed to withdraw amount with less than P100.00. Display the current balance. 
    // Notify the client if his balance (after withdrawal) is less than P2000.00. Display the current balance.
    // Always ask the user if he wants to perform another transaction. If yes, continue choosing among 
       the listed transaction, otherwise, stop the transaction.
*/

#include<iostream>
#include "atmClass.h" // Include atmClass
#include <string>
#include <iomanip>
using namespace std;

int main(){
    atmFunctions atm; //Class that perform check Balance, Withdraw, and Deposit.

    int operation;
    while (true)
    {
        //Menu Transactions
        cout<< "------ OOP Bank ------" <<endl;
        cout<< "Bank Operations" <<endl;
        cout<< "1. Check Balance" <<endl;
        cout<< "2. Deposit" <<endl;
        cout<< "3. Withdraw" <<endl;
        cout<< "----------------------" <<endl;
        cout<< "Choose transaction: ";
        cin >> operation;

        if(operation == 1){ // Display Balance
            cout<< "Balance: ";
            atm.checkBalance();
        }
        else if(operation == 2){ //Display Deposit 

            int depositAmount;
            cout<< "Enter Amount to deposit: ";
            cin >> depositAmount;
            atm.deposit(depositAmount);
        }else if(operation == 3){ // Display Withdrawal

            int withdrawalAmount;
            cout<< "Enter amount to Withdraw: ";
            cin >> withdrawalAmount;
            atm.withdraw(withdrawalAmount);
            if(atm.balance < atm.minimumBalance){ // Notify client if his/her balance is less than Minimum Balance(P2000.00)
                string message = "Warning: Your current balance is less than the required maintaining balance.";
                cout<< message << endl;
            }
        }

        // Ask user for another transaction.
        int doAnotherTransaction;
        cout<< "Do you want to perform another transactions? Press 1 to continue...";
        cin >> doAnotherTransaction;
        if(doAnotherTransaction != 1){
            break;
        }
    }
    
}