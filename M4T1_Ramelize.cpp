//CSC 134
//M4T1
//Abreanna Ramelize
//3/17/2025


#include <iostream>
using namespace std;
 
int main () {

    //Using a simple while loop
    // Part 1, just say "hi" five times 

    int number = 5;
    int i =0;
    while (i < number) {
        cout << "Hello" << endl;
        //i =i + 1;
        i++; 
    }
    cout << "Thats's all!" << endl;


     // part 2
    

    //program 5-6
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    //print a table header
    
   cout << "Table of Squares" << endl;
   cout << "----------------" << endl;
   int num = MIN_NUMBER;
   int sq; // num squared
   while (num <= MAX_NUMBER) {
    sq = num * num;
    cout << num << "\t" << sq << endl;
    num = num + 1;
   }

   return 0;
}
    
