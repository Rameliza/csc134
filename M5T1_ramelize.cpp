// CSC 134
// M5T1
// Abreanna Ramelize
// 04/12/14


#include <iostream>
   using namespace std;

   // Goal -
   // Create one void function ,
   // and one value returning function

 // Function Prototypes (declarations)
    void say_hello();
    int  give_the_answer();
    int  double_a_number(int num);
    
  // Function Definitions
    int main()
    {
        cout << "Hello from main()" << endl;
        say_hello();
        string user = "Abby";
        int my_answer = give_the_answer();
        cout << "The answer is: " << my_answer << endl;

        // now double the answer
        int twotimes = double_a_number(6);
        cout << "Here's another number: " << twotimes << endl;
        return 0;
    }
    void say_hello() {
        cout << "Hi from Abby " << endl;
        return;
    }
    int give_the_answer() {
        return 36;
    }
    int double_a_number(int num) {
        int new_num = num * 2;
        return new_num;
   }