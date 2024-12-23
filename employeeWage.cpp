#include <bits/stdc++.h>
using namespace std;

class EmployeeWageComputation {
private:
    // Class variables
    static const int wagePerHour = 20;
    static const int totalWorkingDays = 20;
    static const int maxWorkingHours = 100;

    int totalWageMonth;
    int totalWorkingHours;
    int daysWorked;

    // helper methods
    bool markAttendance() {
        return rand() % 2;
    }

    int calculateDailyWage(int workingHours) {
        return wagePerHour * workingHours;
    }

    int getRandomWorkingHours() {
        return rand() % 8 + 1;
    }

public:
    
    EmployeeWageComputation() : totalWageMonth(0), totalWorkingHours(0), daysWorked(0) {}

    
    void computeEmployeeWage() {
        cout << "Welcome to Employee-Wage-Computation!" << endl;

        srand(time(0)); // Seed the random number generator

        for (int i = 1; i <= totalWorkingDays; i++) {
            if (totalWorkingHours >= maxWorkingHours) {
                cout << "Maximum working hours reached." << endl;
                break;
            }

            // Check attendance
            if (!markAttendance()) {
                cout << "Day " << i << ": Employee is absent." << endl;
                continue;
            }

            cout << "Day " << i << ": Employee is present." << endl;

            // Generate working hours
            int workingHours = getRandomWorkingHours();

        
            if (totalWorkingHours + workingHours > maxWorkingHours) {
                workingHours = maxWorkingHours - totalWorkingHours;
            }

            // Update total working hours and days worked
            totalWorkingHours += workingHours;
            daysWorked++;

            // Calculate daily wage
            int dailyWage = calculateDailyWage(workingHours);
            totalWageMonth += dailyWage;

            // Log full-time or part-time status
            if (workingHours > 4) {
                cout << "Worked full-time for " << workingHours << " hours. Daily wage: " << dailyWage << endl;
            } else {
                cout << "Worked part-time for " << workingHours << " hours. Daily wage: " << dailyWage << endl;
            }
        }

        // Output final results
        displayResults();
    }

    // Class method to display results
    void displayResults() const {
        cout << "-----------------------------" << endl;
        cout << "Total Monthly Wage: " << totalWageMonth << endl;
        cout << "Total Working Hours: " << totalWorkingHours << endl;
        cout << "Total Days Worked: " << daysWorked << endl;
    }
};


int main() {
    // Create an instance of the EmployeeWageComputation class
    EmployeeWageComputation employeeWage;

    // Call the method to compute the employee wage
    employeeWage.computeEmployeeWage();

    return 0;
}
