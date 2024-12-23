#include <bits/stdc++.h>

using namespace std;

// Function to calculate employee attendance
bool markAttendance() {
    int random = rand() % 2;
    return random == 1;
}

// Function to calculate employee wage
int calculateDailyWage(int wagePerHour, int workingHours) {
    return wagePerHour * workingHours;
}

// Function to generate random working hours (1 to 8)
int getRandomWorkingHours() {
    return rand() % 8 + 1;
}

int main() {
    srand(time(0)); // Seed the random number generator
    cout << "Welcome to Employee-Wage-Computation!" << endl;

    const int wagePerHour = 20 ;
    const int totalWorkingDays = 20 ; 
    const int maxWorkingHours = 100 ;

    int totalWageMonth = 0 ;
    int totalWorkingHrs = 0 ;
    int daysWorked = 0 ; 

    for(int i = 1 ; i <= totalWorkingDays ; i++)
    {
        if(totalWorkingHrs >= maxWorkingHours) {
            cout << "Maximum Working hours reached . " << endl ;
            break;   
        }

        // Check attendance
        int attendance = markAttendance();

        switch (attendance) {
            case 0: // Employee is absent
                cout << "Employee is absent." << endl;
                break;

            case 1: { // Employee is present
                cout << "Employee is present." << endl;

                // Calculate wage based on working hours
                int workingHours = getRandomWorkingHours();

                if(totalWorkingHrs + workingHours > maxWorkingHours){
                    workingHours = maxWorkingHours - totalWorkingHrs ;
                }
                    totalWorkingHrs += workingHours ;
                    daysWorked++;

                switch (workingHours > 4) {
                    case 1: { // Full-time employee
                        int dailyWage = calculateDailyWage(wagePerHour, workingHours);
                        totalWageMonth += dailyWage ;
                        cout << "Employee worked full-time for : " << workingHours << " hours." << endl;
                        break;
                        }
        case 0: { // Part-time employee
            int partTimeWage = calculateDailyWage(wagePerHour, workingHours);
            totalWageMonth += partTimeWage ;
            cout << "Employee worked part-time for :  " << workingHours << " hours." << endl;
            break;
        }
        }
        break;
    }

    default:
        cout << "Invalid attendance value." << endl;
    }
    }

    cout << "Total monthly wage : " << totalWageMonth << endl ;
    cout << "Total Working hours : " << totalWorkingHrs << endl ;
    cout << "Total Days Worked : " << daysWorked << endl ; 

    return 0;
}
