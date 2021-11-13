# Semi Final Activity 1 Documentation

**Instructor:** Cheeky Rose Villamarzo <br>
**Author:**[James Leo C. Grimaldo](https://github.com/ELGrimaldo) <br>
**Github Repository:** [C++_OOP](https://github.com/ELGrimaldo/CPP_OOP)

<br>

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
                threeMonths.setNumAndAmtperUnit(numUnits, amtPerUnit);
                fourMonths.setNumAndAmtperUnit(numUnits, amtPerUnit);
                fiveMonths.setNumAndAmtperUnit(numUnits, amtPerUnit);
                ```
            * [x] display all amount in two decimal places (5 pts)
                ```cpp
                cout<< setprecision(2);
                cout<< fixed;
                ```