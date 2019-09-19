/*
 *        File: wages.cc
 *      Author: Morgan Van Valkenburgh
 *        Date: September 11, 2019
 * Description: Wage calculator program, extra credit
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    ///#1 Variable declaration
    double rate, hours, wages;

    ///#2 input hours and rate
    cout << "Enter the hourly rate: ";
    cin >> rate;
    cout << "Enter the number of hours: ";
    cin >> hours;

    // Input Validation
    if (rate < 8 || rate > 20){
        return 0;
    }

    if (hours < 0 || hours > 60){
        return 0;
    }

    ///#3 Calculate wages (overtime?)
    if (hours > 40 )
    {
        double overtime = (hours - 40) * rate * 1.5;///overtime
        double regularPay = 40 * rate; ///regular
        wages = overtime + regularPay;
    } else {
        wages = hours * rate;
    }
    

    ///#
    cout << fixed << setprecision(2) << showpoint;
    cout << setw(25) << "Your hourly rate: $" << rate << endl;
    cout << setw(24) << "Hours worked: " << hours << endl;
    cout << setw(25) << "Weekly pay: $" << wages << endl;
    return 0;
}// main
