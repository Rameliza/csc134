// CSC134
// M3LAB1
// Abreanna Ramelize
// 03/9/2025

#include <iostream>
using namespace std;


int main() {
 // declare the variable we need
int choice; 
  
// ask the question

cout << "You're in a mortal combat battle! Sindel vs. Sonya Blade." << endl;
cout << "1. Fight" << endl;
cout << "2. Run"   << endl;
cout << "3. Use boost" << endl;
cout << "Type 1,2, or 3: "; 
cin >> choice;

 // using if, make a decision based on the user's choice

 if (1 == choice) {
    cout << "You chose to battle" << endl;
  cout << "Unfortunately, you lose. " << endl;
}
else if (2 == choice) {
    cout << "You chose to run" << endl;
  cout << "You live to fight another day." << endl;
}
else if (3 == choice) {
  cout << "You use a boost." << endl;
  cout << "More here later..." << endl;
}
else {
    cout << "I'm sorry, that is not a valid choice." << endl;
}
// finish up
cout << "Thanks for playing!" << endl; 

return 0; // exit without error
}