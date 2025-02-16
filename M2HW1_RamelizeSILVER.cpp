// CSC 134
// M2HW1 SILVER
// Abreanna Ramelize
// 2/16/2025 

#include <iostream>
#include <iomanip> // Include this header for setprecision in question 1
using namespace std;

int main() {

    cout << "Question 1" << endl;
    int pizzasOrdered = 2;
    int slicesPerPizza = 10;
    int visitors = 4;
    int totalSlices, slicesNeeded, slicesLeftOver;

    // Prompt the user to enter the number of pizzas ordered, slices per pizza, and number of visitors
    cout << "How many pizzas did you order? ";
    cin >> pizzasOrdered;
    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;
    cout << "How many visitors are coming? ";
    cin >> visitors;

    // Calculate the total number of slices and the number of slices needed
    totalSlices = pizzasOrdered * slicesPerPizza;
    slicesNeeded = visitors * 3;

    // Calculate the number of slices left over
    slicesLeftOver = totalSlices - slicesNeeded;

    // Output the result
    cout << "You will have " << slicesLeftOver << " slices of pizza left over." << endl;



    cout << "Question 4" << endl;
    // Declare the necessary variables
    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne, cheerTwo;

    // Build the cheers using string concatenation
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Output the cheers
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
 


    cout << "Question 1 " << endl;

    // Declare variables
    string firstName, lastName;
    double startingBalance, depositAmount, withdrawalAmount, finalBalance;
    int accountNumber;

    // Get the user's name (separating first and last name)
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "Please enter your last name: ";
    cin >> lastName;

    // Combine first and last name
    string name = firstName + " " + lastName;

    // Get the starting account balance
    cout << "Enter your starting account balance: ";
    cin >> startingBalance;

    // Get the deposit amount
    cout << "Enter the amount you want to deposit: ";
    cin >> depositAmount;

    // Get the withdrawal amount
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawalAmount;

    // Calculate the final account balance
    finalBalance = startingBalance + depositAmount - withdrawalAmount;

    // Generate a random account number
    accountNumber = rand() % 7000 + 2000;

    // Output the information
    cout << fixed << setprecision(2); // Set the decimal precision to 2 places
    cout << "Name on the account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final account balance: $" << finalBalance << endl;
    return 0;
}