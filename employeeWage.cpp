#include<bits/stdc++.h>

using namespace std;

// Function to calculate employee attenedence 
void markAttendence(){
    srand(time(0));
    int random = rand() % 2 ;
    
    if(random == 0) 
    {
        cout << "Employee is absent . " << endl ;
    }
    else
    {
        cout << "Employee is present . " << endl ;
    }
} 

// Function to calculate daily employee wage
int calculateDailyWage(int& wagePerHr , int& workingHr) {
    return wagePerHr * workingHr ;
}

int main()
{
    cout << "Welcome to Employee-Wage-computation" << endl ;

    // attendence 
    markAttendence();    

    // calculate daily wage 
    int wagePerHr = 20 ;  // wage per hour 
    int workingHr = 8 ;     // working hours
    int dailyWage = calculateDailyWage(wagePerHr , workingHr) ;

    cout << "Daily wage of Employee is : " << dailyWage << endl ;

    return 0;
}
