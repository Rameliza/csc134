// CSC134
// M3HW1 BRONZE
// Abreanna Ramelize
// 03/14/2025

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    
// Question 1
cout << "1.Question 1"<< endl;

//Set specific numbers
int num1 = 2;
int num2 = 7;
// Print the addition problem
cout << "What is " << num1 << " plus " << num2 << "?" << endl;

// Get the user's answer
int user_answer;
cin >> user_answer;

// Check if the answer is correct
if (user_answer == (num1 + num2)) {
    cout << "Correct." << endl;
} else {
    cout << "Incorrect." << endl;
}



  cout << "2.Question 2 " << endl;

    // Greeting
    cout << "Hello, I’m Abby!" << endl;

    // Ask the user a question
    cout << "Do you like me? Please type yes or no." << endl;

    // Get the user's response
    string user_response;
    cin >> user_response;

    // Respond based on the user's input
    if (user_response == "yes" || user_response == "Yes") {
        cout << "That’s great! I’m so happy we’ll get along just fine." << endl;
    } else if (user_response == "no" || user_response == "No") {
        cout << "Oh no! I’ll do my best to be someone you’ll learn like." << endl;
    } else {
        cout << "Hmm, I’m not sure what you mean, but I’d still like to be friends!" << endl;
    }

    return 0;
}



