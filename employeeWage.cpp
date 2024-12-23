#include<bits/stdc++.h>

using namespace std;

// Function to calculate employee attenedence 
bool markAttendence()
{
    srand(time(0));
    int random = rand() % 2 ;
    return random == 1 ;
} 

// Function to calculate  employee wage
int calculateDailyWage(int& wagePerHr , int& workingHr) 
{
    return wagePerHr * workingHr ;
}


int getRandomWorkingHours()
{
    return rand() % 8 + 1 ;
}



int main()
{
    srand(time(0));
    cout << "Welcome to Employee-Wage-computation" << endl ;

    // check attendence    
    if(markAttendence()) 
    {
        cout << "Employee is present " << endl ; 

            // calculate daily wage 
            // calculate part time employee wage 

        int wagePerHr = 20 ;  // wage per hour 
            // int workingHr = 8 ;     // working hours
        int workingHours = getRandomWorkingHours();
    

        if(workingHours > 4 ) 
        {
            //full time employee 
            int dailyWage = calculateDailyWage(wagePerHr , workingHours) ;
            cout << "Employee worked full-time for " << workingHours << " hours." << endl;
            cout << "Daily wage of Employee is : " << dailyWage << endl ;
        }
        else
        {
            // part time employee
            int partTimeWage = calculateDailyWage(wagePerHr,workingHours) ;
            cout << "Part-time employee worked for : " << workingHours << endl ;
            cout << "Part-time wage of employee is : " << partTimeWage << endl ;

        }
    }

    else
    {
        cout << "Employee is absent " << endl ; 

    }
 
    return 0;
}
