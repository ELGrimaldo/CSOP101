# Prelims Code Documentation

**Instructor:** Cheeky Rose Villamarzo <br>
**Author:**[James Leo C. Grimaldo](https://github.com/ELGrimaldo) <br>
**Project Repository:** [C++_OOP](https://github.com/ELGrimaldo/CPP_OOP)

<br>

---


## Prelim Lesson 12:Self Assessment

- Date of submission: 09/05/21<br>
- **Instructions:** Create a C++ program that shows the application of input and output statement.
- File directory *[Prelim Lesson 12:Self Assessment](./Activities/act1.cpp)*

- Solution in `C++`
    ```c++
    #include <iostream>
    using namespace std;

    int main(){

        string name;
        int age;

        cout << "Enter your name: ";
        cin >> name; 

        cout << "Enter your age: ";
        cin >> age;

        cout << "Hi " << name << "! You are " << age << "   year's old."; 

        return 0;
    }
    ```
    Output:
    >Enter your name: James <br>
    >Enter your age: 18 <br>
    >Hi James! You are 18 year's old.


---
## Prelim Act 1
- Date of submission: 09/10/21<br>
- **Instructions:** 
Create a simple C++ program that will allow the user to input a number. 
The program must determine if the input number is less than or equal to 100. 
If input number is greater than 100, display "JOLINA", otherwise, display "KIKO".

- File directory *[Prelim Act 1](./Activities/act2.cpp)*
- Solution in `C++`
    ```cpp
    #include <iostream>
    using namespace std;

    int main(){
        int num;

        cout<< "Input a number: ";
        cin>> num;

        if(num > 100)
            cout<< "JOLINA";

        else
            cout<< "KIKO";

        return 0;
    }
    ```
    **Test-case 1:**
    > Input a number: 101 <br>
    > JOLINA

    **Test-case 2:**
    > Input a number: 99 <br>
    > KIKO

---
## Prelim Activity 2
- Date of submission: 09/10/21
- **Instructions:** 
Using nested selection statement,   create a C++ program that will be able to perform the     given algorithm.


    * [x] Prompt the user to input year level and number of units  to enroll. 
        
        ```cpp
        cout<< "Input year level: ";
        cin>> yearLevel;
        ```
    * [x] If year level is between 1-4, assign the amount per  unit to each year level, otherwise, 
    prompt an invalidity message.

        ```cpp
        if(yearLevel >= 1 && yearLevel <= 4){
        
        cout<< "Input number of Units: ";
        cin>> numOfUnits;
        
        if(yearLevel == 1){
            cout<< "Tuition Fee: " << numOfUnits * 800;
        }else if (yearLevel == 2){
            cout<< "Tuition Fee: " << numOfUnits * 1800;
        }else if(yearLevel == 3){
            cout<< "Tuition Fee: " << numOfUnits * 2800;
        }else{
            cout<< "Tuition Fee: " << numOfUnits * 3800;
        }
        ```
    * [x] Compute and display for the tuition fee amount using     the formula: 
        - number of units to enroll x amount per unit.
        - for year level 1: `numOfUnits * 800`
        - for year level 2: `numOfUnits * 1800`
        - for year level 3: `numOfUnits * 2800`
        - for year level 4: `numOfUnits * 3800` 

- File directory *[Prelim Act 1](./Activities/act3.cpp)*
- Complete Solution in `C++`
    ```cpp
    #include <iostream>
    using namespace std;

    int main(){
        int yearLevel, numOfUnits, amtPerUnit;

        cout<< "Input year level: ";
        cin>> yearLevel;

        if(yearLevel >= 1 && yearLevel <= 4){

            cout<< "Input number of Units: ";
            cin>> numOfUnits;

            if(yearLevel == 1){
                cout<< "Tuition Fee: " << numOfUnits * 800;
            }else if (yearLevel == 2){
                cout<< "Tuition Fee: " << numOfUnits * 1800;
            }else if(yearLevel == 3){
                cout<< "Tuition Fee: " << numOfUnits * 2800;
            }else{
                cout<< "Tuition Fee: " << numOfUnits * 3800;
            }

        }else{
            cout<< "Invalid Value! Year Level must be 1 to 4";
        }

        return 0;
    };

    ```
    **Test-case 1:**
    >Input year level: 1 <br>
    >Input number of Units: 8 <br>
    >Tuition Fee: 6400 <br>

    **Test-case 2:**
    >Input year level: 2 <br>
    >Input number of Units: 6 <br>
    >Tuition Fee: 10800 <br>

    **Test-case 3:**
    >Input year level: 3 <br>
    >Input number of Units: 18 <br>
    >Tuition Fee: 50400 <br>

    **Test-case 4:**
    >Input year level: 4 <br>
    >Input number of Units: 15 <br>
    >Tuition Fee: 57000 <br>

    **Test-case 5:**
    >Input year level: 6 <br>
    >Invalid Value! Year Level must be 1 to 4
