// CSC 134
// M2T1
// Abreanna Ramelize
// 2/08/2025


#include <iostream>

using namespace std;

int main()
{
    // variables are like mailboxes 
    string name = "Abreanna";
    int num_apples = 10;
    double price_each = 0.25;


    // Declare your variables

    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "We have " << num_apples << " apples in stock." << endl;
    cout << "Price per apple is: $" << price_each << endl;

    // Calculate total
    double total_cost = num_apples * price_each;

    // Finally print answer
    cout << "The total for all " << num_apples;
    cout <<  " is $" << total_cost << endl;


    cout << endl;

     
    return 0;
}