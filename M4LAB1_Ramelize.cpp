// CSC134
// M4LAB1 
// Abreanna Ramelize
// 03/20/2025


#include <iostream>
using namespace std;
 
int main () {

// declare variables 
int height, width;

// start with a set size 
// height = 5;
// width = 5;
cout << "How tall should the block be? " << endl;
cin >> height;
cout << "How wide should the block be? " << endl;
cin >> width;

// test: make a row of asterisks
cout << "One row" << endl;
for (int i=0; i < width; i++) {
 cout << "*" << " ";
}
cout << endl; // finish the row 

// make a column 
cout << "One column" << endl;
for (int j=0; j < height; j++) {
cout << "*" << endl;
}

cout << "The entire block" << endl;
for (int j=0; j< height; j++) {
    ///print one row
for (int i=0; i < width; i++) {
    cout << "*" << " ";
} 
cout << endl; //end the row 
}

return 0; 
}

