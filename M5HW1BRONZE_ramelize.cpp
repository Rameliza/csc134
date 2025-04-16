// CSC 134
// M5HW1
// Abreanna Ramelize
// 4/16/2025

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Doing all three questions on this cpp file

int main() {

    cout << " Question 1" << endl;
    // Declare variables to store the names of the months and rainfall amounts
    string month1, month2, month3;
    double rain1, rain2, rain3;

    // Prompt the user to enter the first month and rainfall
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the amount of rain (in inches) for " << month1 << ": ";
    cin >> rain1;

    // Prompt the user to enter the second month and rainfall
    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the amount of rain (in inches) for " << month2 << ": ";
    cin >> rain2;

    // Prompt the user to enter the third month and rainfall
    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the amount of rain (in inches) for " << month3 << ": ";
    cin >> rain3;

    // Calculate the average rainfall
    double averageRainfall = (rain1 + rain2 + rain3) / 3.0;

    // Display the average rainfall rounded to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3
         << " is " << averageRainfall << " inches." << endl;





    cout << "Question 2" << endl;

    int number;

    // Prompt the user to enter a number
    cout << "Enter a number (1-10): ";
    cin >> number;

    // Input validation
    if (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10." << endl;
    } else {
        // Display the Roman numeral equivalent using a switch statement
        cout << "The Roman numeral for " << number << " is ";

        switch (number) {
            case 1:
                cout << "I" << endl;
                break;
            case 2:
                cout << "II" << endl;
                break;
            case 3:
                cout << "III" << endl;
                break;
            case 4:
                cout << "IV" << endl;
                break;
            case 5:
                cout << "V" << endl;
                break;
            case 6:
                cout << "VI" << endl;
                break;
            case 7:
                cout << "VII" << endl;
                break;
            case 8:
                cout << "VIII" << endl;
                break;
            case 9:
                cout << "IX" << endl;
                break;
            case 10:
                cout << "X" << endl;
                break;
            default:
                // This should never be reached due to the validation above
                cout << "Unknown" << endl;
        }
    

       cout << "Question3" << endl;

    // Variables to hold speed, hours, and distance traveled
    double speed;
    int hours;

    // Prompt the user for the speed of the vehicle
    cout << "Enter the speed of the vehicle in miles per hour: ";
    cin >> speed;

    // Input validation for speed
    while (speed < 0) {
        cout << "Invalid input. Speed must be a non-negative number." << endl;
        cout << "Enter the speed of the vehicle in miles per hour: ";
        cin >> speed;
    }

    // Prompt the user for the time traveled
    cout << "Enter the number of hours the vehicle has traveled: ";
    cin >> hours;

    // Input validation for hours
    while (hours < 1) {
        cout << "Invalid input. Hours must be 1 or more." << endl;
        cout << "Enter the number of hours the vehicle has traveled: ";
        cin >> hours;
    }

    // Display the distance traveled for each hour
    cout << "Hour    Distance Traveled (miles)" << endl;
    cout << "-------------------------------" << endl;

    for (int hour = 1; hour <= hours; ++hour) {
        double distance = speed * hour;
        cout << hour << "       " << distance << endl;
    }

    return 0;
    }
}

