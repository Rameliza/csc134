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

  // Calculate subtotal, tax, total
  tax_percent = 0.08; // assignment says 8%, so 8/100 (as a double)
  subtotal = food_price * how_many;
  tax_cost = subtotal * tax_percent; // 8% of $7.49
  total    = subtotal + tax_cost;
  
  // Print the receipt
  // Tried two ways to line up : setw() and tab \t 
  cout << setprecision(2) << fixed; // magic to turn on 2 decimals
  cout << food_name << " x " << how_many << endl;
  cout << "------------------------------------" << endl;
  cout << setw(12) << "Subtotal:\t$"  << setw(6) << subtotal << endl;
  cout << setw(12) << "Tax (8%):\t$"  << setw(6) << tax_cost << endl;
  cout << "------------------------------------" << endl;
  cout << setw(12) << "Total:\t$"     << setw(6) << total    << endl;
  cout << "------------------------------------" << endl;

return 0;
}