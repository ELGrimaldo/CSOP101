# Prelims Code Documentation

**Instructor:** Cheeky Rose Villamarzo <br>
**Author:**[James Leo C. Grimaldo](https://github.com/ELGrimaldo) <br>
**Project Repository:** [C++_OOP](https://github.com/ELGrimaldo/CPP_OOP)

<br>

### Table of contents
1.

<br>

---
## SemiFinal Self-Assessment 1

- Date of submission: 10/31/21<br>
- **Instructions:** 
Create a program that will compute for the total interest and monthly 
payment of a lending customer based on his borrowed amount. 
A 6% monthly interest will be applied in lending business.

The program must be able to do the following:

1. Ask the user for the total amount to be borrowed.
    ```c++
    cout<< "Enter Amount to be borrowed: ";
    cin >> amount;
    ```

1. Ask the user how many months he will pay the borrowed amount.
    ```c++
    cout<< "Number of months to pay: ";
    cin >> months;
    ```

1. Apply 6% monthly interest. Use the formula:

    monthly interest = total amount x 6%
    ```c++
    double monthlyInterest(){
        double monthlyInterest = amountToLend * 0.06;
        return monthlyInterest;
        }
    ```
    total monthly interest = monthly interest x number of months to pay.
    ```c++
    double totalMonthlyInterest(){
        double totalMonthlyInterest = monthlyInterest() * monthsToPay;
        return totalMonthlyInterest;
        }

    ```
1. Compute for the total amount to be received by the customer  .

    total amount to received = total amount to be borrowed - total monthly  interest.
    ```c++
    double totalAmountToRecieve(){
        double totalAmountToRecieve = amountToLend - totalMonthlyInterest();
        return totalAmountToRecieve;
    }
    ```

1. Compute for the monthly payment;

    monthly payment = total amount / number of months to pay
    ```c++
    double monthlyPayment(){
        double monthlyPayment = amountToLend / monthsToPay;
        return monthlyPayment;
    }
    ```

<br>

- File directory *[SemiFinal Self-Assessment 1](./activities/main.cpp)*

- Solution in `C++`

    **Main** File
    ```c++
    
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
        cout<< "Total Interest for "<< months << " Month/s: " << lend.  totalMonthlyInterest() <<endl;
        cout<< "Amount to Recieved: "<< lend.totalAmountToRecieve() <<endl;
        cout<< "Monthly Payment: " << lend.monthlyPayment(); 

    };
    ```
    **HEADER** File
    ```c++
    class lend{
    private:
        double amountToLend;
        int monthsToPay;
    
    public:
        void setAmountMonths(double amount, int months){
            amountToLend = amount;
            monthsToPay = months;
        }

        double monthlyInterest(){
            double monthlyInterest = amountToLend * 0.06;
            return monthlyInterest;
        }

        double totalMonthlyInterest(){
            double totalMonthlyInterest = monthlyInterest() * monthsToPay;
            return totalMonthlyInterest;
        }

        double totalAmountToRecieve(){
            double totalAmountToRecieve = amountToLend - totalMonthlyInterest();
            return totalAmountToRecieve;
        }

        double monthlyPayment(){
            double monthlyPayment = amountToLend / monthsToPay;
            return monthlyPayment;
        }
    };
    
    ```
