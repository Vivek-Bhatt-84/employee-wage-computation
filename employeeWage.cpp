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

    int totalWageMonth = 0 ;

    for(int i = 1 ; i <= totalWorkingDays ; i++){


    // Check attendance
    int attendance = markAttendance();

    switch (attendance) {
    case 0: // Employee is absent
        cout << "Employee is absent." << endl;
        break;

    case 1: { // Employee is present
        cout << "Employee is present." << endl;

        // Calculate wage based on working hours
        int wagePerHour = 20; // Wage per hour
        int workingHours = getRandomWorkingHours();

        switch (workingHours > 4) {
        case 1: { // Full-time employee
            int dailyWage = calculateDailyWage(wagePerHour, workingHours);
            totalWageMonth += dailyWage ;
            cout << "Employee worked full-time for " << workingHours << " hours." << endl;
            cout << "Daily wage of Employee is: " << dailyWage << endl;
            break;
        }
        case 0: { // Part-time employee
            int partTimeWage = calculateDailyWage(wagePerHour, workingHours);
            totalWageMonth += partTimeWage ;
            cout << "Part-time employee worked for " << workingHours << " hours." << endl;
            cout << "Part-time wage of Employee is: " << partTimeWage << endl;
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

    return 0;
}
