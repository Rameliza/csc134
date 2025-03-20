// CSC134
// M4HW1 
// Abreanna Ramelize
// 03/20/2025


#include <iostream>
using namespace std;
 
int main () {

// Task #1
// declare variables 
int firstNum, secondNum, answer;
firstNum = 5;
// secondNum = 1;
// answer =  firstNum * secondNum;

 for (int i=1; i<= 5; i++) {
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
 }


 // Task #2
cout << " Enter a number from 1 to 12: ?" << endl;
cin >> firstNum; 
// Generate and display the multiplication table

for (int i = 1; i <= 12; i++) {
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
 }
return 0;
}