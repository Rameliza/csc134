// CSC 134
// M2T2
// Abreanna Ramelize
// 2/08/2025

// We'll make a simple sales program
// that prints "well formatted" receipts
/*
This program should take the price of a meal, which is $7.49, 
and print out a simple text receipt. It should include:
The price before tax
The amount of tax owed (8%)
The total including tax
*/


#include <iostream>
#include <iomanip>  // needed for the 2 decimals thing
using namespace std;

int main()
{
  // setup the variables 
  string store_name = " Abreanna Gyros";
  string food_name = "Gyro";
  double food_price = 7.49;   // input later 
  int  how_many;

  // Figure out the subtotal and total
  double subtotal, total;
  subtotal = food_price; // changes if they buy more

  // Do the order 
  cout << "Welcome to the " << store_name << " store!" <<endl;
  cout << " We sell " << food_name << " and it's $" << food_price << " each." << endl; 
  cout << "How many gyros do you want?" << endl;
  cin >> how_many; 
    
  // Remember tax is two things, the percent and the $
  double tax_percent = 0.08; // 8% is 8/100
  double tax_cost = tax_percent * subtotal;
  total = subtotal + tax_cost;

  // Print the receipt
  cout << setprecision(2) << fixed; // magic words for 2 decimals
  // \t is the tab key
  cout << "YOUR RECEIPT" << endl;
  cout << "-----------------------" << endl;
  cout << "Subtotal:\t$" << subtotal << endl;
  cout << "Tax:\t\t$" << tax_cost << endl;
  cout << "-----------------------" << endl;
  cout << "Total:\t\t$" << total << endl;
  cout << "Have a nice day!" << endl;
  cout << endl; 

return 0;
}