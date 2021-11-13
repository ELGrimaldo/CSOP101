# Semi Final Activity 1 Documentation

**Instructor:** Cheeky Rose Villamarzo <br>
**Author:**[James Leo C. Grimaldo](https://github.com/ELGrimaldo) <br>
**Github Repository:** [C++_OOP](https://github.com/ELGrimaldo/CPP_OOP)

<br>

## Files and folder
This activity consist of 2 program files [main.cpp](https://github.com/ELGrimaldo/CSOP101/blob/master/semi-finals/activities/act1/main.cpp) and [interface.h](https://github.com/ELGrimaldo/CSOP101/blob/master/semi-finals/activities/act1/interface.h), it can be found on github repository using this link [Semi Final Activity 1](https://github.com/ELGrimaldo/CSOP101/blob/master/semi-finals/activities/act1)

- | File Name | Description |
  | --------- | ----------- |
  | [main.cpp](https://github.com/ELGrimaldo/CSOP101/blob/master/semi-finals/activities/act1/main.cpp) | Contains main method of the program. |
  | [interface.h](https://github.com/ELGrimaldo/CSOP101/blob/master/semi-finals/activities/act1/interface.h) | contains base class and 3 derived classes. | 
  | [DOCUMENTATION.md](https://github.com/ELGrimaldo/CSOP101/blob/master/semi-finals/activities/act1/DOCUMENTATION.md) | Contains documentation of this program |

## Class and Variable names
- Based on the given requirement, this program consist of variables that are used in main method and classes that act as a based class and derived classes.
    - `Installment` Class will act as based class consist of public varibles `tuitionFee`, `numUnits`, `amtPerUnit`, and `totalFee`. These variable will act as interface and will be used once the base class was inherited in derived classes. There are also varibles with pre-assigned values.
      |  Variables   | Data Type | Value|  Description |
      | :----------: | :-------: | :--: |----- |
      | `tuitionFee` | `double`  | Null | Store computed amount using `computeTuitionFee()` method. |
      | `numUnits `  | `double`  | Null | Store input numbers of units to be taken. |
      | `amtPerUnit` | `double`  | Null | Store input amouunt per units to be taken. |
      | `totalFee`   | `double`  | Null | Store computed total fee using computeTotalFee() method. |
      | `miscFee`    | `double`  | 3000.00 | Store Miscellaneous Fee |
      | `labFee`     | `double`  | 1000.00 | Store Laboratory Fee |

    - Derived classes are almost the same except its class names and the algorithm inside methods. 
        | Derived Classes | Description | 
        | :-------------: | ----------- |
        | `class ThreeMonths` | consist of method that will compute installment fee for Three months. |
        | `class FourMonths` | consist of method that will compute installment fee for four months. |
        | `class FiveMonths` | consist of method that will compute installment fee for five months. | 

        These derived classes consist of same method names that will compute Intsallment fee which is `displayInstallment()` that consist of one variable `installment` that will be returned once `displayInstallment` was called. 

        | Variable Name | Data Type | Value | Description | 
        | :-----------: | :-------: | ----- | ----------- | 
        | `installment` | `double`  |  computeTotalFee() / 3; | this variable was used in `displayInstallment()` method under `ThreeMonths` class. |
        | `installment` | `double`  |  computeTotalFee() / 4; | this variable was used in `displayInstallment()` method under `FourMonths` class.|
        | `installment` | `double`  |  computeTotalFee() / 4; | this variable was used in `displayInstallment()` method under `FiveMonths` class.|

## Classes and Variables used in MAIN method
- Interface header file was imported in main file using `#include "interface.h"` in order to uses its classes. 
    - | Assigned Variable Name | Class Name | Class Type |
      | :--------------------: | :--------: | ---------- |
      | `installment`          | `Installment` | Base Class | 
      | `threeMonths`          | `ThreeMonths` | Derived Class | 
      | `fourMonths`          | `FourMonths` | Derived Class | 
      | `fiveMonths`          | `FiveMonths` | Derived Class | 
    
    - | Variable Name | Data Type | Value | Description |
      | :-----------: | :-------: | :---: | ----------- |
      | `numUnits`      | `double`  | Null  | It will temporarily store input value of number of units. |
      | `amtPerUnit`    | `double`  | Null  | It will temporarily store input value of amount per Units. |



## Instructions:
- Using OOP Interface approach, write a program that will determine the monthly payment of school fee based on a installment basis.

    - ### Requirements:
        * [x] Create a based class for installment fee. (10 pts)
            ```cpp
            //based class for installment fee
            class Installment{
                public:
                    double tuitionFee, numUnits, amtPerUnit, totalFee;
                    double miscFee = 3000.00;
                    double labFee = 1000.00;

                    void setNumAndAmtperUnit(double numberOfUnits, double amountPerUnit){
                        numUnits   = numberOfUnits;
                        amtPerUnit = amountPerUnit;
                    }

                    double computeTuitionFee(){
                        tuitionFee = numUnits * amtPerUnit;
                        return tuitionFee;
                    }

                    double computeTotalFee(){
                        totalFee = computeTuitionFee() + miscFee + labFee;
                        return totalFee;
                    }       

            };
            ```
        * [x] Create derived classes for 3 months, 4 months, and 5 months installment options.
            ```cpp
            //derived classes for 3 months
            class ThreeMonths: public Installment{
                public:
                    double installment;

                    double displayInstallment(){
                        installment = computeTotalFee() / 3;
                        return installment;
                    }
            };
            ```

            ```cpp
            //derived classes for 4 months
            class FourMonths: public Installment{
                public:
                    double installment;


                    double displayInstallment(){
                        installment = computeTotalFee() / 4;
                        return installment;
                    }
            };
            ```

            ```cpp
            //derived classes for 5 months
            class FiveMonths: public Installment{
                public:
                    double installment;


                    double displayInstallment(){
                        installment = computeTotalFee() / 5;
                        return installment;
                    }
            };
            ```

        * [x] Assign a value to miscellaneous and laboratory fee. (6 pts).
            ```cpp
            double miscFee = 3000.00;
            double labFee = 1000.00;
            ```
        
        * [x] Allow the user to input amount for number of units enrolled and amount per unit. (10 pts).
            ```cpp
            double numUnits, amtPerUnit;

            cout<< "Enter number of units: ";
            cin >> numUnits;
            cout<< "Enter amount per unit: ";
            cin >> amtPerUnit;
            ```

        * [x] Compute for tuition fee. Use the formula tuition fee = amount per unit x number of units enrolled. (5 pts)

            ```cpp
            double computeTuitionFee(){
                tuitionFee = numUnits * amtPerUnit;
                return tuitionFee;
            }
            ```
        
        * [x] Compute for total fee. Use the formula total fee = tuition fee + misc fee + lab fee. (5pts)
            ```cpp
            double computeTotalFee(){
                totalFee = computeTuitionFee() + miscFee + labFee;
                return totalFee;
            }
            ```

        * [x] Compute for monthly installment. Use the formula total fee / number of months. (5pts)
            ```cpp
            //method for 3 months.
            double displayInstallment(){
                installment = computeTotalFee() / 3;
                return installment;
            }
            ```
            

            ```cpp
            //method for 4 months.
            double displayInstallment(){
                installment = computeTotalFee() / 4;
                return installment;
            }
            
            ```

            ```cpp
            //method for 5 months.
            double displayInstallment(){
                installment = computeTotalFee() / 5;
                return installment;
            }
            ```

        * [x] Display all the necessary information such as:
            * [x] tuition fee (5 pts)
                ```cpp
                cout<< "Tuition Fee: "<< installment.computeTuitionFee()<<endl;
                ```
            * [x] miscellaneous fee (2 pts)
                ```cpp
                cout<< "MISCELLANEOUS FEE: "<< installment.miscFee<<endl;
                ```
            * [x] laboratory fee (2 pts)
                ```cpp
                cout<< "LABORATORY FEE: "<< installment.labFee<<endl;
                ```
            * [x] total fee (5 pts)
                ```cpp
                cout<< "TOTAL FEE: " << installment.computeTotalFee()<<endl;

                ```
            * [x] monthly payment for 3, 4, and 5 months (10pts)
                ```cpp
                cout<< "3 MONTHS: " << threeMonths.displayInstallment()<<endl;
                cout<< "4 MONTHS: " << fourMonths.displayInstallment()<<endl;
                cout<< "5 MONTHS: " << fiveMonths.displayInstallment()<<endl;
            
                ```
            * [x] display all amount in two decimal places (5 pts)
                ```cpp
                cout<< setprecision(2);
                cout<< fixed;
                ```