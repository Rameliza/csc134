// CSC 134
// M5T2
// Abreanna Ramelize
// 4/12/2025


#include <iostream>
using namespace std;

int find_square(int num);
void print_line(int number, int square);

int main() {
    
    for (int num=1; num<=10; num++) {
        int square = find_square(num);
        print_line(num, square);
    }
}

int find_square(int number) {
    int answer = number * number;
    return answer;
}

void print_line(int number, int square) {

    cout << "Number = " << number << "\tSquare = " << square << endl;

}