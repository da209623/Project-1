/**
 *   @file: gas_consumption.cc
 * @author: Dustin Adams
 *   @date: 9/12/2023
 *  @brief: Program that calculates the gallons used in a trip through both 
 *          town and highway. 
 */

/**
 *   @file: gas_consumption.cc
 * @author: Nasseef Abukamail
 *   @date: September 09, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
const double AVG_MILES_PER_GAL_TOWN = 22.5;
const double AVG_MILES_PER_GAL_HIGHWAY = 29.5;

int main(int argc, char const *argv[]) {
    
    // Declaration
    double miles_in_town, miles_on_highway, gas_used_town, gas_used_highway;
    
    // User Input
    cout << "Enter the number of miles in town: ";
    cin >> miles_in_town;

    // Validates Input
    if(miles_in_town < 0)
    {
        cout << "Number of miles in town cannot be negative." << endl;
        exit(0);
    }

    // User Input
    cout << "Enter the number of miles on highway: ";
    cin >> miles_on_highway;
    
    // Validates Input
    if(miles_on_highway < 0)
    { 
        cout << "Number of miles on hiqhway cannot be negative." << endl;
        exit(0);
    }
    
    // Calculations
    gas_used_town = miles_in_town / AVG_MILES_PER_GAL_TOWN;
    gas_used_highway = miles_on_highway / AVG_MILES_PER_GAL_HIGHWAY;

    // Exception

    if(gas_used_town == 0 && gas_used_highway == 0)
    {
        cout << "No Average can be calculated" << endl;
        exit(0);
    }

    // Output

    cout << fixed << setprecision(1);
    cout << "Gas used in town: " << gas_used_town << " " << "gallons" << endl;
    cout << "Gas used on highway: " << gas_used_highway << " " << "gallons" << endl;

    return 0;
} /// main
